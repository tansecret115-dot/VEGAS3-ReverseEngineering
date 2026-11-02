/* Module: cook3260.dll
   Function: FUN_633a4380
   Address: 633a4380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a4380(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(&DAT_633a8c50 + *(int *)((int)this + 0x18) * 4);
  iVar1 = *(int *)(&DAT_633a8c4c + *(int *)((int)this + 0xc) * 4);
  local_c = iVar4;
  local_8 = FUN_633a39b0(this,&local_10);
  if (local_10 == 0) {
    if (iVar4 <= iVar1) {
      puVar3 = (uint *)(param_1 + iVar4 * 4);
      iVar4 = (iVar1 - local_c) + 1;
      do {
        iVar1 = FUN_633a3930(this,*(int *)((int)this + 0x1c),puVar3);
        puVar3 = puVar3 + 1;
        local_8 = local_8 + iVar1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar4 <= iVar1) {
    piVar2 = (int *)(param_1 + iVar4 * 4);
    iVar4 = (iVar1 - local_c) + 1;
    do {
      iVar1 = FUN_633a5ab0(this,*(int *)((int)this + 0x459c),piVar2);
      piVar2 = piVar2 + 1;
      local_8 = local_8 + iVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return local_8;
  }
  return local_8;
}


