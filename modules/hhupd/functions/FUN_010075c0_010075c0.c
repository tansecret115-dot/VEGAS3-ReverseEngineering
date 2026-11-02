/* Module: hhupd.exe
   Function: FUN_010075c0
   Address: 010075c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010075c0(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_01007690((int *)param_1[10]);
  *param_1 = 0;
  (*(code *)param_1[2])(param_1[10]);
  (*(code *)param_1[2])(param_1);
  return 0;
}


