/* Module: aviplug.dll
   Function: FUN_5f984a40
   Address: 5f984a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f984a40(int param_1,int *param_2)

{
  int iVar1;
  
  param_2[2] = *param_2 + param_1;
  iVar1 = *param_2 + param_1 + param_2[1];
  param_2[7] = iVar1;
  param_2[0xb] = iVar1 - param_2[3];
  return;
}


