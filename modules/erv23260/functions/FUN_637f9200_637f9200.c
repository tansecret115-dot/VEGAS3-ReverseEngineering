/* Module: erv23260.dll
   Function: FUN_637f9200
   Address: 637f9200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_637f9200(void *this,undefined4 param_1,int param_2,byte param_3,uint *param_4,int *param_5,
            int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_6 + 0x14);
  if ((iVar3 == 2) || ((iVar3 == 1 && (*(int *)(param_6 + 0x24) != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_7 == 0) {
    if ((*(int *)((int)this + 0x35c) == 0) &&
       (((((param_3 & 1) != 0 || (*(int *)((int)this + 0x310) == 0)) ||
         (*(int *)((int)this + 0x2ec) == 0)) ||
        ((*(int *)(*(int *)((int)this + 0x2ec) + 8) != 0 ||
         ((iVar3 != 3 && (**(int **)((int)this + 0x338) < *(int *)((int)this + 0x350))))))))) {
      *param_4 = *param_4 | 2;
    }
    iVar2 = **(int **)((int)this + 0x338);
    if (**(int **)((int)this + 0x338) <= *(int *)((int)this + 0x350)) {
      iVar2 = *(int *)((int)this + 0x350);
    }
    *(int *)((int)this + 0x350) = iVar2;
    if ((*param_4 & 2) != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x35c) != 0) goto LAB_637f9358;
    if ((*(int *)((int)this + 0x30) == 0) || (*(int *)(*(int *)((int)this + 0x30) + 0x1c) == 0)) {
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      if ((*(int **)((int)this + 0x10) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))
                            (*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)),
         iVar2 != 0)) {
        return iVar2;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x28);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x2c);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x30);
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x34);
    }
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + 0x310);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x338) + 4;
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(*(int *)((int)this + 0x340) + 0x11c);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x32c);
  }
  if (((*(int *)((int)this + 0x35c) == 0) && (*(int *)((int)this + 0x14) == 0)) &&
     (iVar2 = FUN_637f8e70(this,param_2), iVar2 != 0)) {
    return iVar2;
  }
LAB_637f9358:
  if ((bVar1) && (*(int *)(*(int *)((int)this + 0x310) + 0x18) == 0)) {
    iVar2 = ftol();
    *param_5 = *param_5 - iVar2;
    iVar2 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 4) + 8))();
    if (iVar2 != 0) {
      *param_4 = *param_4 | 1;
    }
  }
  if (iVar3 == 3) {
    iVar3 = ftol();
    *param_5 = *param_5 - iVar3;
  }
  *(int *)(*(int *)(*(int *)((int)this + 0x30) + 0x1c) + 8) = *(int *)((int)this + 0x30);
  *(undefined4 *)(*(int *)((int)this + 0x30) + 0x18) = 1;
  iVar3 = FUN_637f4fa0(*(void **)((int)this + 4),(int)this + 0x28,param_2);
  if (iVar3 == 0) {
    iVar2 = *(int *)(*(int *)((int)this + 0x30) + 8);
    if (iVar2 == 0) {
      *param_4 = *param_4 | 4;
      *(undefined4 *)((int)this + 0x14) = 0;
      return 0;
    }
    if (iVar2 == 3) {
      *param_4 = *param_4 | 8;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return iVar3;
}


