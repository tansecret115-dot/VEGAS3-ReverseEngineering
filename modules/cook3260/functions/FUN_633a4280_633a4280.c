/* Module: cook3260.dll
   Function: FUN_633a4280
   Address: 633a4280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a4280(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = *(int *)(&DAT_633a8c50 + *(int *)((int)this + 0x18) * 4);
  iVar6 = *(int *)(&DAT_633a8c4c + *(int *)((int)this + 0xc) * 4);
  if (iVar1 <= iVar6) {
    piVar4 = param_1 + iVar1;
    iVar3 = (iVar6 - iVar1) + 1;
    local_8 = *(int *)((int)this + 0x1c) * iVar3;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + *(int *)((int)this + iVar2 * 4 + 0x45a0);
      iVar3 = iVar3 + -1;
      local_c = iVar5;
    } while (iVar3 != 0);
  }
  FUN_633a38b0(this,(uint)(local_c < local_8),1);
  if (local_c < local_8 == 0) {
    if (iVar1 <= iVar6) {
      iVar6 = (iVar6 - iVar1) + 1;
      param_1 = param_1 + iVar1;
      do {
        FUN_633a38b0(this,*param_1,*(int *)((int)this + 0x1c));
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return local_8 + 1;
  }
  if (iVar1 <= iVar6) {
    iVar6 = (iVar6 - iVar1) + 1;
    param_1 = param_1 + iVar1;
    do {
      FUN_633a38b0(this,*(int *)((int)this + *param_1 * 4 + 0x469c),
                   *(int *)((int)this + *param_1 * 4 + 0x45a0));
      param_1 = param_1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return local_c + 1;
}


