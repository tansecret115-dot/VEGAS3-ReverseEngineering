/* Module: erv23260.dll
   Function: FUN_6380c740
   Address: 6380c740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380c740(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  
  iVar4 = 0;
  bVar2 = false;
  bVar5 = (*(uint *)(param_2 + 0x30) & 0x3f) != 0;
  bVar1 = false;
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 4) == 9)) {
    FUN_637fb570(*(void **)((int)this + 0x6c4),1);
    return;
  }
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    bVar5 = true;
    iVar4 = 0xc;
    break;
  case 6:
    bVar1 = true;
    iVar4 = bVar5 + 3;
    break;
  case 7:
    bVar2 = true;
    iVar4 = bVar5 + 6;
    break;
  case 9:
    iVar4 = 1;
  }
  if ((bVar5) && (param_3 != 0)) {
    iVar4 = iVar4 + 1;
  }
  FUN_637fb570(*(void **)((int)this + 0x6c4),0);
  FUN_638003d0(*(void **)((int)this + 0x6c4),iVar4);
  if (bVar5) {
    FUN_638003f0(*(void **)((int)this + 0x6c4),*(int *)(param_2 + 0x30));
    if ((*(int *)((int)this + 0x620) == 0) ||
       (uVar3 = *(uint *)(param_2 + 0x30), ((byte)uVar3 & 0x30) != 0x30)) {
      uVar3 = *(uint *)(param_2 + 0x30);
      uVar6 = (uint)(*(int *)(param_2 + 4) == 0);
    }
    else {
      uVar6 = 1;
    }
    FUN_63800420(*(void **)((int)this + 0x6c4),uVar3,uVar6);
    if (param_3 != 0) {
      FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                   *(int *)((int)this + 0x624));
    }
  }
  if ((bVar1) || (bVar2)) {
    if ((*(int *)((int)this + 0x5dc) == 7) && (*(int *)((int)this + 0x5f0) != 0)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x10),*(uint *)(param_2 + 0x14),
                 iVar4);
  }
  return;
}


