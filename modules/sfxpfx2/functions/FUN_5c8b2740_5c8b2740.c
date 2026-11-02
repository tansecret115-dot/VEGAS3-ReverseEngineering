/* Module: sfxpfx2.dll
   Function: FUN_5c8b2740
   Address: 5c8b2740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8b2740(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 < 2) {
    return *(int *)(param_1 + 0x10);
  }
  if ((param_1[0xc] & 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    if (param_2 < *(int *)(param_1 + 0x60) + iVar2) {
      return *(int *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x68) - iVar2 < param_2) {
      return *(int *)(param_1 + 0x14);
    }
    iVar2 = (param_2 - *(int *)(param_1 + 0x60)) - iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7c);
    if (param_2 < *(int *)(param_1 + 100) + iVar2) {
      return *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x6c) - iVar2 < param_2) {
      return *(int *)(param_1 + 0x10);
    }
    iVar2 = (*(int *)(param_1 + 100) - param_2) + iVar2 + uVar1;
  }
  iVar2 = (int)(((longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)))
               / (longlong)(int)uVar1) + *(int *)(param_1 + 0x10);
  if ((*param_1 & 0x80) != 0) {
    iVar2 = FUN_5c8b2810((int)param_1,iVar2);
  }
  return iVar2;
}


