/* Module: cook3260.dll
   Function: FUN_633a1b60
   Address: 633a1b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_633a1b60(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = param_2;
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(int *)((int)this + 0xc) = param_4 / (param_2 * 8);
  piVar2 = operator_new(param_2 * 0x16bb4 + 4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = param_2;
    piVar2 = piVar2 + 1;
    piVar5 = piVar2;
    if (-1 < param_2 + -1) {
      do {
        FUN_633a3040(piVar5);
        param_2 = param_2 + -1;
        piVar5 = piVar5 + 0x5aed;
      } while (param_2 != 0);
    }
  }
  iVar6 = 0;
  *(int **)((int)this + 0x14) = piVar2;
  if (piVar2 == (int *)0x0) {
    (**(code **)(*(int *)this + 8))();
    return 4;
  }
  if (1 < *(int *)((int)this + 4)) {
    pvVar3 = operator_new(*(int *)((int)this + 8) << 1);
    *(void **)((int)this + 0x10) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      (**(code **)(*(int *)this + 8))();
      return 4;
    }
  }
  param_2 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  do {
    iVar4 = FUN_633a3150((void *)(*(int *)((int)this + 0x14) + iVar6),*(int *)((int)this + 8),1,
                         param_3,param_4 / iVar1,param_5,0,0,param_6);
    if (iVar4 != 0) {
      (**(code **)(*(int *)this + 8))();
      return 1;
    }
    iVar6 = iVar6 + 0x16bb4;
    param_2 = param_2 + 1;
  } while (param_2 < iVar1);
  return 0;
}


