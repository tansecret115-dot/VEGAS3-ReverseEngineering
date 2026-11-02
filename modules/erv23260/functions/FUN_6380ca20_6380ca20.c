/* Module: erv23260.dll
   Function: FUN_6380ca20
   Address: 6380ca20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380ca20(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 8) != 0) {
    FUN_637fb570(*(void **)((int)this + 0x6c4),1);
    return;
  }
  FUN_637fb570(*(void **)((int)this + 0x6c4),0);
  if (*(int *)(param_2 + 4) == 0) {
    *(uint *)(*(int *)((int)this + 0x74c) + param_1 * 4) = param_1 & 0xf;
  }
  else if ((*(byte *)(param_2 + 0x30) & 0x3f) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0x74c) + param_1 * 4);
    *piVar1 = *piVar1 + 1;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else if ((*(byte *)(param_2 + 0x30) & 0x3f) != 0) {
      iVar3 = 0xb;
    }
  }
  iVar4 = *(int *)(param_2 + 0x30);
  iVar2 = FUN_6380c3e0(iVar3);
  FUN_63800450(*(void **)((int)this + 0x6c4),iVar2,iVar4);
  FUN_638004b0(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x30));
  if ((iVar3 == 1) || (iVar3 == 0xb)) {
    FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                 *(int *)((int)this + 0x624));
  }
  return;
}


