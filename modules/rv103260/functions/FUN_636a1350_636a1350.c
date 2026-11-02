/* Module: rv103260.dll
   Function: FUN_636a1350
   Address: 636a1350
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a1350(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  
  piVar2 = param_2;
  puVar3 = (undefined4 *)0x0;
  *param_1 = 0;
  iVar5 = 0x67;
  if (*(int *)(*param_2 + 4) != 0x5649444f) goto LAB_636a1436;
  iVar1 = *(int *)(*param_2 + 8);
  if (iVar1 == 0x52563130) {
    iVar1 = param_2[1];
    if (*(int *)(iVar1 + 4) == 0x494d4147) {
      if (*(int *)(iVar1 + 8) != 0x59555632) goto LAB_636a1436;
      pvVar4 = operator_new(0x10e);
      if (pvVar4 != (void *)0x0) {
        puVar3 = FUN_636a3fb0(pvVar4,this);
        goto LAB_636a1436;
      }
    }
    else {
      if ((*(int *)(iVar1 + 4) != 0x494d4742) || (*(int *)(iVar1 + 8) != 0x59555632))
      goto LAB_636a1436;
      pvVar4 = operator_new(0x10e);
      if (pvVar4 != (void *)0x0) {
        puVar3 = FUN_636a3fb0(pvVar4,this);
        goto LAB_636a1436;
      }
    }
  }
  else {
    if (((((iVar1 != 0x52474256) && (iVar1 != 0x52474233)) && (iVar1 != 0x20524742)) &&
        (iVar1 != 0x59555632)) ||
       ((*(int *)(param_2[1] + 4) != 0x5649444f || (*(int *)(param_2[1] + 8) != 0x52563130))))
    goto LAB_636a1436;
    pvVar4 = operator_new(0x2da0);
    if (pvVar4 != (void *)0x0) {
      puVar3 = FUN_636a3220(pvVar4,this);
      goto LAB_636a1436;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_636a1436:
  if (puVar3 != (undefined4 *)0x0) {
    param_2 = (int *)0x0;
    (**(code **)*puVar3)(2,&param_2);
    if (param_2 != (int *)0x0) {
      iVar5 = (**(code **)(*param_2 + 0xc))(piVar2);
      if (iVar5 == 0) {
        *param_1 = param_2;
        *(int **)((int)this + (uint)*(ushort *)((int)this + 0x32) * 4 + 0x34) = param_2;
        *(uint *)((int)param_2 + 0x2e) = (uint)*(ushort *)((int)this + 0x32);
        *(short *)((int)this + 0x32) = *(short *)((int)this + 0x32) + 1;
        return 0;
      }
      (**(code **)(*param_2 + 8))();
    }
  }
  return iVar5;
}


