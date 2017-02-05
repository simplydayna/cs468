/* 
   Replace lines 96-99 of the arch/x86/kernel/cpu/proc.c file with the following code
   to reverse the output for the flags 
*/

seq_puts(m, "flags\t\t:");
         for (i = 32*NCAPINTS; i >= 0; i--)
                if (cpu_has(c, i) && x86_cap_flags[i] != NULL)
                        seq_printf(m, " %s", x86_cap_flags[i]);

