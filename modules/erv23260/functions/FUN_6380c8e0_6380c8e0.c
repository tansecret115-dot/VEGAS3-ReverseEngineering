/* Module: erv23260.dll
   Function: FUN_6380c8e0
   Address: 6380c8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380c8e0(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_2;
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 4) == 6)) {
    FUN_637fb570(*(void **)((int)this + 0x6c4),1);
    return;
  }
  if (((*(byte *)(param_2 + 0x30) & 0x3f) != 0) ||
     ((piVar1 = (int *)(param_2 + 4), *piVar1 == 0 || (param_2 = 0, *piVar1 == 6)))) {
    param_2 = 1;
  }
  cVar3 = FUN_6380c440(*(int *)(iVar2 + 4),param_2,param_3);
  FUN_637fb570(*(void **)((int)this + 0x6c4),0);
  FUN_63800490(*(void **)((int)this + 0x6c4),CONCAT31(extraout_var,cVar3));
  if (((param_2 != 0) || (*(int *)(iVar2 + 4) == 6)) || (*(int *)(iVar2 + 4) == 0)) {
    FUN_638003f0(*(void **)((int)this + 0x6c4),*(int *)(iVar2 + 0x30));
    if ((*(int *)((int)this + 0x620) == 0) ||
       (uVar4 = *(uint *)(iVar2 + 0x30), ((byte)uVar4 & 0x30) != 0x30)) {
      if ((*(int *)(iVar2 + 4) == 0) || (*(int *)(iVar2 + 4) == 10)) {
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
      }
      uVar4 = *(uint *)(iVar2 + 0x30);
    }
    else {
      iVar5 = 1;
    }
    FUN_63800420(*(void **)((int)this + 0x6c4),uVar4,iVar5);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                 *(int *)((int)this + 0x624));
  }
  if (*(int *)(iVar2 + 4) == 6) {
    if ((*(int *)((int)this + 0x5dc) == 7) && (*(int *)((int)this + 0x5f0) != 0)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    FUN_63800010(*(void **)((int)this + 0x6c4),*(uint *)(iVar2 + 0x10),*(uint *)(iVar2 + 0x14),iVar5
                );
  }
  return;
}


