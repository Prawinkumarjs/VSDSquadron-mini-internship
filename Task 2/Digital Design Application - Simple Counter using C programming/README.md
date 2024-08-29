You can use the following README.md content tailored to your repository URL:


# RISC-V Simple Counter Program

This repository contains a simple RISC-V counter program written in C. Follow the instructions below to set up, build, and run the program using the RISC-V toolchain, Spike simulator, and proxy kernel (pk).

## Prerequisites

- **RISC-V Toolchain**: For compiling RISC-V code.
- **Spike Simulator**: To run RISC-V binaries.
- **Proxy Kernel (pk)**: Provides a runtime environment for running RISC-V binaries.

## Step-by-Step Instructions

### 1. Clone the Repository

Clone this repository to your local machine:

```sh
git clone https://github.com/Prawinkumarjs/VSDSquadron-mini-internship.git
cd VSDSquadron-mini-internship
```

### 2. Install the RISC-V Toolchain

Follow the [installation instructions](https://github.com/riscv/riscv-gnu-toolchain) for your platform. For example, on Ubuntu:

```sh
sudo apt-get update
sudo apt-get install gcc-riscv64-linux-gnu
```

### 3. Install Spike and pk

Follow the installation instructions for Spike and pk. Example installation for Spike:

```sh
# Clone Spike repository
git clone https://github.com/riscv/riscv-isa-sim.git
cd riscv-isa-sim
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

For pk:

```sh
# Clone pk repository
git clone https://github.com/riscv/riscv-pk.git
cd riscv-pk
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

Ensure `/opt/riscv/bin` is in your `PATH`.

### 4. Create the Source File

Create the `simplecounter.c` source file using Leafpad:

```sh
leafpad simplecounter.c
```

In Leafpad, enter the following code:

```c
#include <stdio.h>
#include <unistd.h>  // For usleep() in POSIX systems

int main() {
    int counter = 0;
    int end_value = 10;  // Set the end value

    printf("Simple Digital Counter\n");

    while (counter <= end_value) {  // Loop until counter reaches end value
        printf("Counter: %d\n", counter);
        counter++;  // Increment the counter
        usleep(1000000);  // Wait for 1 second (1,000,000 microseconds)
    }

    printf("Counter reached the end value of %d. Stopping.\n", end_value);

    return 0;
}
```
Save and close Leafpad.

### 5. Compile the Program

Compile and link the source code into an executable:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o simplecounter simplecounter.c
```

### 6. View the Object File (Optional)

If you need to view the object file, first compile to object file:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -c simplecounter.c -o simplecounter.o
```

To view the object file, use:

 ```sh
    riscv64-unknown-elf-objdump -d simplecounter.o
```

### 7. Run the Program

To execute the compiled program with Spike and pk, use:

 ```sh
    spike pk simplecounter
```

### 8. Debug the Program (Optional)

For detailed debugging output, run:

```sh
    spike -d pk simplecounter
```

### 9. View the File Content (Optional)

To view the content of the source file or object file, use `cat`:

 ```sh
    cat simplecounter.c
 ```

```sh
    cat simplecounter.o
```

### Example Output
When running the program, you should see:

```
Simple Digital Counter
Counter: 0
Counter: 1
Counter: 2
Counter: 3
Counter: 4
Counter: 5
Counter: 6
Counter: 7
Counter: 8
Counter: 9
Counter: 10
Counter reached the end value of 10. Stopping.
```

 ### Troubleshooting

- **Compilation Issues**: Ensure the RISC-V toolchain is properly installed and configured.
- **Execution Issues**: Verify that `spike` and `pk` are correctly                                                    installed and accessible in your `PATH`.                                                
- **Path Problems**: Ensure that all necessary binaries (e.g., `spike`, `pk`) are in your system’s `PATH`, or provide full paths to these executables.
                                                 
                                                   