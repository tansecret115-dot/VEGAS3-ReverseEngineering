/* Module: cook3260.dll
   Function: FUN_633a1780
   Address: 633a1780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a1780(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x28) != 0) {
    return -0x7fffbffd;
  }
  iVar4 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x28) = 1;
  if (0x1a < iVar4) {
    return -0x7ff8ffa9;
  }
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(&DAT_633ab03c + iVar4 * 0x34);
  iVar2 = *(int *)(&DAT_633ab020 + iVar4 * 0x34);
  iVar4 = iVar4 * 0x34;
  iVar1 = *(int *)(&DAT_633ab024 + iVar4);
  *(int *)((int)this + 0xc) = iVar2 * iVar1;
  *param_1 = *(int *)((int)this + 0x14) * iVar2 * iVar1;
  iVar2 = (int)(*(int *)(&DAT_633ab02c + iVar4) + (*(int *)(&DAT_633ab02c + iVar4) >> 0x1f & 7U)) >>
          3;
  *(int *)((int)this + 0x10) = iVar2;
  param_1[1] = *(int *)((int)this + 0x14) * iVar2;
  iVar2 = -0x7fffbffb;
  if (*(int *)((int)this + 0x24) < 0x11) {
    puVar3 = operator_new(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_633a19c0(puVar3);
    }
    *(undefined4 **)this = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_633a18aa;
    iVar4 = FUN_633a1a20(puVar3,*(int *)(&DAT_633ab020 + iVar4),*(int *)(&DAT_633ab024 + iVar4),
                         *(int *)(&DAT_633ab028 + iVar4),*(int *)(&DAT_633ab02c + iVar4),
                         *(undefined4 *)(&DAT_633ab030 + iVar4));
  }
  else {
    puVar3 = operator_new(0x16bb8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_633a1f60(puVar3);
    }
    *(undefined4 **)this = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_633a18aa;
    iVar4 = FUN_633a1fd0(puVar3,*(int *)(&DAT_633ab020 + iVar4),*(int *)(&DAT_633ab024 + iVar4),
                         *(int *)(&DAT_633ab028 + iVar4),*(undefined4 *)(&DAT_633ab02c + iVar4),
                         *(undefined4 *)(&DAT_633ab030 + iVar4),
                         *(undefined4 *)(&DAT_633ab034 + iVar4),
                         *(undefined4 *)(&DAT_633ab038 + iVar4));
  }
  if (iVar4 == 0) {
    iVar2 = 0;
  }
LAB_633a18aa:
  if (iVar2 != 0) {
    FUN_633a1940(this);
  }
  return iVar2;
}


