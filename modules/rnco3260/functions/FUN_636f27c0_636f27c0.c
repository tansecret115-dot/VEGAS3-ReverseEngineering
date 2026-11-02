/* Module: rnco3260.dll
   Function: FUN_636f27c0
   Address: 636f27c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_636f27c0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((((*(int *)((int)param_1 + 0x14) == *(int *)((int)param_1 + 0x30)) &&
       (iVar1 = FUN_636f22f0((int)param_1), iVar1 != 0)) &&
      (iVar1 = FUN_636f22a0((int)param_1), iVar1 != 0)) &&
     (iVar1 = FUN_636f22c0((int)param_1), iVar1 != 0)) {
    puVar2 = operator_new(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      local_8 = FUN_636f2f20(puVar2);
      goto LAB_636f2937;
    }
  }
  else {
    iVar1 = FUN_636f2480(param_1,&local_8);
    if ((iVar1 != 0) || (iVar1 = FUN_636f2640(param_1,&local_8), iVar1 != 0)) goto LAB_636f2937;
    if ((*(int *)((int)param_1 + 0x14) == 0) &&
       ((*(int *)((int)param_1 + 0x30) == 0x10 && (iVar1 = FUN_636f22a0((int)param_1), iVar1 != 0)))
       ) {
      pvVar3 = operator_new(0x4c);
      if (pvVar3 != (void *)0x0) {
        local_8 = FUN_636f2da0(pvVar3,FUN_63718f30,1,0);
        goto LAB_636f2937;
      }
    }
    else {
      if (*(int *)((int)param_1 + 0x14) != 0x10) {
        return (int *)0x0;
      }
      if ((*(int *)((int)param_1 + 0x30) == 0) && (iVar1 = FUN_636f22a0((int)param_1), iVar1 != 0))
      {
        pvVar3 = operator_new(0x28);
        if (pvVar3 != (void *)0x0) {
          local_8 = FUN_636f3000(pvVar3,1);
          goto LAB_636f2937;
        }
      }
      else {
        if (*(int *)((int)param_1 + 0x14) != 0x10) {
          return (int *)0x0;
        }
        if ((*(int *)((int)param_1 + 0x30) == 4) && (iVar1 = FUN_636f22a0((int)param_1), iVar1 != 0)
           ) {
          pvVar3 = operator_new(0x28);
          if (pvVar3 != (void *)0x0) {
            local_8 = FUN_636f3000(pvVar3,0);
            goto LAB_636f2937;
          }
        }
        else {
          if (*(int *)((int)param_1 + 0x14) != 0x10) {
            return (int *)0x0;
          }
          if ((*(int *)((int)param_1 + 0x30) != 5) && (*(int *)((int)param_1 + 0x30) != 0xd)) {
            return (int *)0x0;
          }
          iVar1 = FUN_636f22a0((int)param_1);
          if (iVar1 == 0) {
            return (int *)0x0;
          }
          pvVar3 = operator_new(0x40);
          if (pvVar3 != (void *)0x0) {
            local_8 = FUN_636f3180(pvVar3,0);
            goto LAB_636f2937;
          }
        }
      }
    }
  }
  local_8 = (int *)0x0;
LAB_636f2937:
  if (local_8 != (int *)0x0) {
    iVar1 = (**(code **)(*local_8 + 4))(param_1);
    if (-1 < iVar1) {
      return local_8;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)*local_8)(1);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


