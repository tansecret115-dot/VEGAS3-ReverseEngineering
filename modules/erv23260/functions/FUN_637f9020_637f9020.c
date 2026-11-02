/* Module: erv23260.dll
   Function: FUN_637f9020
   Address: 637f9020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_637f9020(void *this,int param_1,int param_2,byte param_3,uint *param_4,int *param_5,int *param_6
            )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_637f8e00((int)this);
  if (*(int *)((int)this + 0x14) == 0) {
    if (((((param_3 & 1) != 0) || (*(int **)((int)this + 0x2e4) == (int *)0x0)) ||
        (*param_6 == **(int **)((int)this + 0x2e4))) || (piVar2 == (int *)0x0)) {
      *param_4 = *param_4 | 2;
    }
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      if (*piVar2 <= *(int *)((int)this + 0x350)) {
        iVar3 = *(int *)((int)this + 0x350);
      }
      *(int *)((int)this + 0x350) = iVar3;
    }
    if ((*param_4 & 2) != 0) {
      return 0;
    }
    if ((*(int *)((int)this + 0x30) == 0) || (*(int *)(*(int *)((int)this + 0x30) + 0x1c) == 0)) {
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      if ((*(int **)((int)this + 0x10) != (int *)0x0) &&
         (iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))
                            (*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)),
         iVar3 != 0)) {
        return iVar3;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x28);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x2c);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x30);
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x34);
    }
    *(int **)((int)this + 0x30) = piVar2;
    *(int *)((int)this + 0x28) = (int)this + *piVar2 * 0x144 + 0x50;
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + *piVar2 * 0x144 + 0x168);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + *piVar2 * 4 + 0x31c);
    iVar3 = FUN_637f8e70(this,param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  iVar3 = *(int *)(*(int *)((int)this + 4) + 8);
  if ((iVar3 == 0x15) || (iVar3 == 0x16)) {
    iVar3 = FUN_637fa180((int)this);
    *param_5 = iVar3 - *(int *)(param_1 + 0x30);
  }
  else {
    iVar3 = ftol();
    *param_5 = *param_5 - iVar3;
  }
  *(int *)(*(int *)(*(int *)((int)this + 0x30) + 0x1c) + 8) = *(int *)((int)this + 0x30);
  *(undefined4 *)(*(int *)((int)this + 0x30) + 0x18) = 1;
  iVar3 = FUN_637f4fa0(*(void **)((int)this + 4),(int)this + 0x28,param_2);
  if (iVar3 == 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x30) + 8);
    if (iVar1 == 0) {
      *param_4 = *param_4 | 4;
      *(undefined4 *)((int)this + 0x14) = 0;
      return 0;
    }
    if (iVar1 == 3) {
      *param_4 = *param_4 | 8;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return iVar3;
}


