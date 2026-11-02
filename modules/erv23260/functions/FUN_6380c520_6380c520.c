/* Module: erv23260.dll
   Function: FUN_6380c520
   Address: 6380c520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380c520(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 != 2) && (iVar2 != 4)) {
    if (iVar2 != 0) {
      return;
    }
    *(uint *)(*(int *)((int)this + 0x74c) + param_1 * 4) = param_1 & 0xf;
    FUN_637fb570(*(void **)((int)this + 0x6c4),0);
    if (param_3 == 0) {
      iVar1 = FUN_6380c380(0);
      iVar2 = *(int *)(param_2 + 0x30);
    }
    else {
      iVar1 = FUN_6380c380(1);
      iVar2 = *(int *)(param_2 + 0x30);
    }
    FUN_638002e0(*(void **)((int)this + 0x6c4),iVar2,iVar1);
    if (*(int *)((int)this + 0x60c) != 0) {
      FUN_63800340(*(void **)((int)this + 0x6c4),*(int *)(param_2 + 0xc));
    }
    FUN_638004b0(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x30));
    if (param_3 == 0) {
      return;
    }
    FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                 *(int *)((int)this + 0x624));
    return;
  }
  if (*(int *)(param_2 + 8) != 0) {
    FUN_637fb570(*(void **)((int)this + 0x6c4),1);
    return;
  }
  FUN_637fb570(*(void **)((int)this + 0x6c4),0);
  if ((*(byte *)(param_2 + 0x30) & 0x3f) != 0) {
    *(int *)(*(int *)((int)this + 0x74c) + param_1 * 4) =
         *(int *)(*(int *)((int)this + 0x74c) + param_1 * 4) + 1;
  }
  if ((param_3 == 0) || ((*(byte *)(param_2 + 0x30) & 0x3f) == 0)) {
    iVar1 = FUN_6380c380(*(undefined4 *)(param_2 + 4));
    iVar2 = *(int *)(param_2 + 0x30);
  }
  else {
    iVar1 = FUN_6380c380((-(uint)(*(int *)(param_2 + 4) != 2) & 2) + 3);
    iVar2 = *(int *)(param_2 + 0x30);
  }
  FUN_638002e0(*(void **)((int)this + 0x6c4),iVar2,iVar1);
  if (*(int *)((int)this + 0x620) == 0) {
    uVar3 = *(uint *)(param_2 + 0x30);
    this_00 = *(void **)((int)this + 0x6c4);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x30);
    this_00 = *(void **)((int)this + 0x6c4);
    if (((byte)uVar3 & 0x30) == 0x30) {
      FUN_638004b0(this_00,uVar3);
      goto LAB_6380c69c;
    }
  }
  FUN_63800370(this_00,uVar3);
LAB_6380c69c:
  if ((param_3 != 0) && ((*(byte *)(param_2 + 0x30) & 0x3f) != 0)) {
    FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                 *(int *)((int)this + 0x624));
  }
  if ((*(int *)((int)this + 0x5dc) == 7) && (*(int *)((int)this + 0x5f0) != 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x10),*(uint *)(param_2 + 0x14),
               iVar2);
  if (*(int *)(param_2 + 4) == 4) {
    FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x18),*(uint *)(param_2 + 0x1c),
                 iVar2);
    FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x20),*(uint *)(param_2 + 0x24),
                 iVar2);
    FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x28),*(uint *)(param_2 + 0x2c),
                 iVar2);
  }
  return;
}


