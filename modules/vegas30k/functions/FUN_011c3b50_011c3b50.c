/* Module: vegas30k.dll
   Function: FUN_011c3b50
   Address: 011c3b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c3b50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*(byte *)(param_1 + 0x8a) & 2) == 0) &&
     (iVar1 = param_1[0x73], param_1[0x73] = iVar1 + 1U, iVar1 + 1U < 2)) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (-1 < iVar2) {
      param_1[0x8a] = param_1[0x8a] | 1;
      return iVar2;
    }
    (**(code **)(*param_1 + 0x24))(param_1);
  }
  return iVar2;
}


