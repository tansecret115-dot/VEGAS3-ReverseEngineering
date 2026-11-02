/* Module: vegas30k.dll
   Function: FUN_011d1750
   Address: 011d1750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d1750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || ((*(uint *)(param_1 + 0x154) & 6) == 0)) {
    return param_2;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar2 = *(int *)(param_1 + 0x1e8) << 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1e4);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      if ((*(byte *)(param_1 + 0x154) & 6) == 0) {
        return iVar3;
      }
      iVar1 = (**(code **)(param_1 + 0x15c))
                        (param_1,2,*(undefined4 *)(param_1 + 0x160),0,param_2,param_3,iVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar3 = iVar3 + iVar1;
      param_3 = param_3 - iVar1;
      iVar2 = iVar2 - iVar1;
      param_2 = param_2 + (uint)*(ushort *)(param_1 + 0x180) * iVar1;
    } while (iVar3 < param_3);
  }
  return iVar3;
}


