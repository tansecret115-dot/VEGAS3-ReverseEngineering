/* Module: rmbe3260.dll
   Function: FUN_66061ba0
   Address: 66061ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061ba0(int param_1,int *param_2)

{
  if (*(short *)(param_1 + 0x56) == 0) {
    *param_2 = *(int *)(param_1 + 0x52) + 0xc;
    return 0;
  }
  if (*(short *)(param_1 + 0x56) != 1) {
    *param_2 = 0;
    return 0x80040005;
  }
  *param_2 = *(int *)(param_1 + 0x52) + 0xd;
  return 0;
}


