/* Module: InstMsi-x86a.exe
   Function: FUN_010076d0
   Address: 010076d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010076d0(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_010077a0((int *)param_1[10]);
  *param_1 = 0;
  (*(code *)param_1[2])(param_1[10]);
  (*(code *)param_1[2])(param_1);
  return 0;
}


