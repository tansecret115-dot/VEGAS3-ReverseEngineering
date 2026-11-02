/* Module: vidpcore.dll
   Function: FUN_5deac110
   Address: 5deac110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deac110(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xa8) < 2) {
    return *(int *)(param_1 + 0x44);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar4 = *(uint *)(param_1 + 0x98);
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x9c);
    iVar3 = *(int *)(param_1 + 0xa4);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_5deabf90(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar2 = ((int)(iVar3 - uVar4) / 2 + (-(uint)(iVar1 != 0) & uVar4)) - iVar2;
  iVar3 = *(int *)(param_1 + 0xa8) + iVar2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_2 < iVar2) {
      return *(int *)(param_1 + 0x44);
    }
    if (iVar3 < param_2) {
      return *(int *)(param_1 + 0x48);
    }
    iVar3 = param_2 - iVar2;
  }
  else {
    if (param_2 < iVar2) {
      return *(int *)(param_1 + 0x48);
    }
    if (iVar3 < param_2) {
      return *(int *)(param_1 + 0x44);
    }
    iVar3 = iVar3 - param_2;
  }
  iVar3 = (int)(((longlong)iVar3 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)))
               / (longlong)*(int *)(param_1 + 0xa8)) + *(int *)(param_1 + 0x44);
  if ((*param_1 & 0x80) != 0) {
    iVar3 = FUN_5deac210(param_1,iVar3);
  }
  return iVar3;
}


