/* Module: dsetup.dll
   Function: __amsg_exit
   Address: 00402ec6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_0040aaa0 == 1) || ((DAT_0040aaa0 == 0 && (DAT_0040aaa4 == 1)))) {
    FUN_00403e9b();
  }
  FUN_00403ed4(param_1);
  (*(code *)PTR___exit_00408040)(0xff);
  return;
}


