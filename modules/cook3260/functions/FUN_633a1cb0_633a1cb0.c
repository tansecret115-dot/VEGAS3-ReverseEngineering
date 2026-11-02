/* Module: cook3260.dll
   Function: FUN_633a1cb0
   Address: 633a1cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __thiscall FUN_633a1cb0(void *this,byte *param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  bVar1 = 0;
  if (*(int *)((int)this + 4) == 1) {
    iVar5 = FUN_633a34a0(*(void **)((int)this + 0x14),param_1,param_2,param_3);
    return -(iVar5 != 0) & 3;
  }
  if (0 < *(int *)((int)this + 4)) {
    local_8 = 0;
    do {
      if (bVar1 != 0) {
        return bVar1;
      }
      iVar2 = FUN_633a34a0((void *)(*(int *)((int)this + 0x14) + local_8),
                           param_1 + *(int *)((int)this + 0xc) * iVar5,param_2,
                           *(undefined2 **)((int)this + 0x10));
      iVar3 = 0;
      bVar1 = -(iVar2 != 0) & 3;
      puVar4 = param_3;
      if (0 < *(int *)((int)this + 8)) {
        do {
          iVar3 = iVar3 + 1;
          *puVar4 = *(undefined2 *)(*(int *)((int)this + 0x10) + -2 + iVar3 * 2);
          puVar4 = puVar4 + 2;
        } while (iVar3 < *(int *)((int)this + 8));
      }
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 0x16bb4;
      param_3 = param_3 + 1;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return bVar1;
}


