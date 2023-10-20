import os
import subprocess


def compile_and_run_cpp_files(directory_path):

    # Change the current working directory to the specified path
    os.chdir(directory_path)

    cpp_files = [f for f in os.listdir() if f.endswith(".cpp")]

    if not cpp_files:
        print("No .cpp files found in the directory.")
        return

    print("List of .cpp files:")
    for cpp_file in cpp_files:
        print(cpp_file)

    print("\nRunning .cpp files:")
    for cpp_file in cpp_files:
        # Compile the C++ file
        compile_command = ['g++', cpp_file, '-o', 'a.exe']
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
            run_command = ['a.exe']
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
                print(f"{cpp_file} Output:")
                print(run_output.decode())
        else:
            print(f"Failed to compile {cpp_file}:")
            print(compile_errors.decode())

    print("\n✅ Ran all C++ files successfully.")

    # Delete the compiled executable
    os.remove('a.exe')


if __name__ == "__main__":
    directory_path = './Basic Problems/'
    compile_and_run_cpp_files(directory_path)
