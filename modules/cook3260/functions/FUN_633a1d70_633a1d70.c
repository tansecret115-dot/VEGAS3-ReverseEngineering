/* Module: cook3260.dll
   Function: FUN_633a1d70
   Address: 633a1d70
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __thiscall FUN_633a1d70(void *this,float *param_1,byte *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  bVar2 = 0;
  if (*(int *)((int)this + 4) == 1) {
    iVar5 = FUN_633a3260(*(void **)((int)this + 0x14),param_1,param_2);
    return -(iVar5 != 0) & 2;
  }
  if (0 < *(int *)((int)this + 4)) {
    local_8 = 0;
    do {
      if (bVar2 != 0) {
        return bVar2;
      }
      iVar3 = 0;
      pfVar4 = param_1;
      if (0 < *(int *)((int)this + 8)) {
        do {
          uVar1 = *(undefined2 *)pfVar4;
          pfVar4 = pfVar4 + 1;
          *(undefined2 *)(*(int *)((int)this + 0x10) + iVar3 * 2) = uVar1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 8));
      }
      iVar3 = FUN_633a3260((void *)(*(int *)((int)this + 0x14) + local_8),
                           *(float **)((int)this + 0x10),param_2 + *(int *)((int)this + 0xc) * iVar5
                          );
      param_1 = (float *)((int)param_1 + 2);
      bVar2 = -(iVar3 != 0) & 2;
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 0x16bb4;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return bVar2;
}


