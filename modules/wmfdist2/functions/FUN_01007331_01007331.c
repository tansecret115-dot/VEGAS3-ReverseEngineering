/* Module: wmfdist2.exe
   Function: FUN_01007331
   Address: 01007331
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01007331(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_010073d0((int *)param_1[10]);
  *param_1 = 0;
  (*(code *)param_1[2])(param_1[10]);
  (*(code *)param_1[2])(param_1);
  return 0;
}


