/* Module: mp3plug.dll
   Function: FUN_5f69bf30
   Address: 5f69bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69bf30(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4;
  
  iVar4 = 0;
  local_4 = 0;
  iVar1 = **(int **)((int)this + 0x18);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x18) + 8) + iVar4 * 4);
      iVar3 = FUN_5f69a6b0(iVar2);
      if (iVar3 == param_1) {
        if (param_2 == local_4) {
          return iVar2;
        }
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


