/* Module: rnco3260.dll
   Function: FUN_636f2480
   Address: 636f2480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2480(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_636f22a0((int)this);
  if (((iVar1 == 0) || (iVar1 = FUN_636f22c0((int)this), iVar1 == 0)) ||
     (iVar1 = FUN_636f2440(this,2,2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 == 0x10) && (*(int *)((int)this + 0x30) == 0x10)) {
    pvVar2 = operator_new(0x30);
    if (pvVar2 != (void *)0x0) {
      puVar3 = FUN_636f2c60(pvVar2,FUN_636f1330,0,0);
      *param_1 = puVar3;
      return 1;
    }
LAB_636f25df:
    *param_1 = 0;
    return 1;
  }
  if ((iVar1 == 0x11) && (*(int *)((int)this + 0x30) == 0x10)) {
    pvVar2 = operator_new(0x30);
    if (pvVar2 != (void *)0x0) {
      puVar3 = FUN_636f2c60(pvVar2,FUN_636f11a0,0,0);
      *param_1 = puVar3;
      return 1;
    }
  }
  else {
    if ((iVar1 == 0x13) && (*(int *)((int)this + 0x30) == 0x10)) {
      pvVar2 = operator_new(0x30);
      if (pvVar2 != (void *)0x0) {
        puVar3 = FUN_636f2c60(pvVar2,FUN_636f1660,0,0);
        *param_1 = puVar3;
        return 1;
      }
      goto LAB_636f25df;
    }
    if ((iVar1 == 0x14) && (*(int *)((int)this + 0x30) == 0x10)) {
      pvVar2 = operator_new(0x30);
      if (pvVar2 != (void *)0x0) {
        puVar3 = FUN_636f2c60(pvVar2,FUN_636f1660,1,0);
        *param_1 = puVar3;
        return 1;
      }
    }
    else {
      if ((iVar1 == 0x15) && (*(int *)((int)this + 0x30) == 0x10)) {
        pvVar2 = operator_new(0x30);
        if (pvVar2 != (void *)0x0) {
          puVar3 = FUN_636f2c60(pvVar2,FUN_636f1960,0,0);
          *param_1 = puVar3;
          return 1;
        }
        goto LAB_636f25df;
      }
      if (iVar1 != 0x12) {
        return 0;
      }
      if (*(int *)((int)this + 0x30) != 0x10) {
        return 0;
      }
      pvVar2 = operator_new(0x30);
      if (pvVar2 != (void *)0x0) {
        puVar3 = FUN_636f2c60(pvVar2,FUN_636f14c0,0,0);
        *param_1 = puVar3;
        return 1;
      }
    }
  }
  *param_1 = 0;
  return 1;
}


