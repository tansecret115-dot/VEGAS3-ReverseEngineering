/* Module: rmto3260.dll
   Function: FUN_662c3ed0
   Address: 662c3ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3ed0(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 0;
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *param_2 = *(int *)(param_1 + 0x20) + 8;
    *param_3 = *(undefined4 *)(param_1 + 0x48);
    return 0;
  }
  *param_2 = 0;
  *param_3 = *(undefined4 *)(param_1 + 0x48);
  return 0;
}


