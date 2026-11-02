/* Module: vidcap30.exe
   Function: FUN_0041f990
   Address: 0041f990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f990(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  param_2 = param_2 + 1;
  if (param_2 == (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) {
    *(uint *)(param_1 + 8) = -uVar1;
    return -uVar1;
  }
  *(int *)(param_1 + 8) = param_2;
  return param_2;
}


