/* Module: vegas30k.dll
   Function: FUN_010a9e90
   Address: 010a9e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010a9e90(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*param_1 & 0x80) != 0) {
    param_2 = FUN_010a9f10(param_1,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    iVar2 = (int)(((longlong)(param_2 - iVar1) * (longlong)*(int *)(param_1 + 0x74)) /
                 (longlong)(*(int *)(param_1 + 0x14) - iVar1));
  }
  if ((param_1[0xc] & 8) != 0) {
    return (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x7c)) - iVar2;
  }
  return iVar2 + *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x60);
}


