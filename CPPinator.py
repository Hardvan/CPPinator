import os
import subprocess


def compile_and_run_cpp_files(directory_path):

    a_exe = 'a.exe'  # Name of the compiled executable

    # Change the current working directory to the specified path
    os.chdir(directory_path)

    # Get all the .cpp files in the directory
    cpp_files = [f for f in os.listdir() if f.endswith(".cpp")]
    if not cpp_files:
        print("No .cpp files found in the directory.")
        return
    print("List of .cpp files:\n")
    for i, cpp_file in enumerate(cpp_files):
        print(f"{i+1}) \033[94m{cpp_file}\033[0m")

    # Run all the .cpp files
    success = True
    print("\nRunning .cpp files:\n")
    for i, cpp_file in enumerate(cpp_files):

        # Compile the C++ file
        compile_command = ['g++', cpp_file, '-o', a_exe]
        compile_process = subprocess.Popen(
            subprocess.list2cmdline(compile_command),
            shell=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
        compile_output, compile_errors = compile_process.communicate()

        # Compilation successful
        if compile_process.returncode == 0:
            # Run the compiled executable
            run_command = [a_exe]
            run_process = subprocess.Popen(
                subprocess.list2cmdline(run_command),
                shell=True,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE
            )
            run_output, run_errors = run_process.communicate()

            if run_errors:
                print(f"Errors while running {cpp_file}:")
                print(run_errors.decode())
            else:
                # Enclose the file name in blue color:
                print(f"{i+1}) \033[94m{cpp_file}\033[0m")
                print(run_output.decode())
        else:
            print(f"Failed to compile {cpp_file}:")
            print(compile_errors.decode())
            success = False

    if success:
        print("\n✅ Ran all C++ files successfully.")
    else:
        print("\n❌ Some C++ files failed to compile/run.")

    # Delete the compiled executable
    os.remove(a_exe)


if __name__ == "__main__":
    directory_path = './Basic Problems/'
    compile_and_run_cpp_files(directory_path)
