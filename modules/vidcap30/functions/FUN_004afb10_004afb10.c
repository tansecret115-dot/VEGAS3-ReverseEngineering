/* Module: vidcap30.exe
   Function: FUN_004afb10
   Address: 004afb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004afb10(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (uVar1 < 2) {
    return *(int *)(param_1 + 0x10);
  }
  if ((param_1[0xc] & 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    if (param_2 < *(int *)(param_1 + 0x48) + iVar2) {
      return *(int *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x50) - iVar2 < param_2) {
      return *(int *)(param_1 + 0x14);
    }
    iVar2 = (param_2 - *(int *)(param_1 + 0x48)) - iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 100);
    if (param_2 < *(int *)(param_1 + 0x4c) + iVar2) {
      return *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x54) - iVar2 < param_2) {
      return *(int *)(param_1 + 0x10);
    }
    iVar2 = (*(int *)(param_1 + 0x4c) - param_2) + iVar2 + uVar1;
  }
  iVar2 = (int)(((longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)))
               / (longlong)(int)uVar1) + *(int *)(param_1 + 0x10);
  if ((*param_1 & 0x80) != 0) {
    iVar2 = FUN_004afbe0(param_1,iVar2);
  }
  return iVar2;
}


