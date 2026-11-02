/* Module: mp3plug.dll
   Function: FUN_5f69be70
   Address: 5f69be70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69be70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = 0;
  local_4 = 0;
  iVar1 = **(int **)((int)this + 0x18);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_5f69a6b0(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 8) + iVar3 * 4));
      if (iVar2 == param_1) {
        local_4 = local_4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = local_4;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}


