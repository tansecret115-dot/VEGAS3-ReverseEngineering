/* Module: vegas30.exe
   Function: FUN_0050cf80
   Address: 0050cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050cf80(int param_1,int *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    param_2[1] = *(int *)(*(int *)(param_1 + 0x98) + 0x90);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x98) + 4);
    param_2[3] = 0x191;
    *param_2 = ((uVar1 & 0x1000) != 0) + 1;
  }
  return;
}


