/* Module: sftrans1.dll
   Function: FUN_004c0420
   Address: 004c0420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c0420(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*param_1 & 0x80) != 0) {
    param_2 = FUN_004c04a0(param_1,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    iVar2 = (int)(((longlong)(param_2 - iVar1) * (longlong)*(int *)(param_1 + 0x5c)) /
                 (longlong)(*(int *)(param_1 + 0x14) - iVar1));
  }
  if ((param_1[0xc] & 8) != 0) {
    return (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 100)) - iVar2;
  }
  return iVar2 + *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48);
}


