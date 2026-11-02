/* Module: rmto3260.dll
   Function: FUN_662c3f30
   Address: 662c3f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3f30(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 0;
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *param_2 = *(int *)(param_1 + 0x1c) + 8;
    return 0;
  }
  *param_2 = 0;
  return 0;
}


