/* Module: InstMsi-x86w.exe
   Function: FUN_010078b0
   Address: 010078b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_010078b0(int *param_1)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xbb9])(*param_1);
    *param_1 = 0;
  }
  return;
}


