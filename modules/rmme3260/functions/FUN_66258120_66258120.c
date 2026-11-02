/* Module: rmme3260.dll
   Function: FUN_66258120
   Address: 66258120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66258120(void *this,uint param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int local_8;
  
  pvVar5 = (void *)0x0;
  *param_2 = 0;
  local_8 = -0x7fffbffb;
  piVar6 = (int *)0x0;
  sVar1 = (**(code **)(*(int *)this + 0x40))();
  if (-1 < sVar1) {
    uVar2 = (**(code **)(*(int *)this + 0x1c))();
    if ((int)uVar2 < (int)param_1) {
      param_1 = uVar2;
    }
    puVar3 = operator_new(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_662522d0(puVar3);
    }
    (**(code **)(*piVar6 + 4))(piVar6);
    pvVar5 = operator_new(param_1);
    iVar4 = (**(code **)(*(int *)this + 0x28))(pvVar5,param_1);
    if (iVar4 == -1) {
      local_8 = -0x7ffbff7f;
    }
    else {
      iVar4 = (**(code **)(*piVar6 + 0x10))(piVar6,pvVar5,iVar4);
      if (iVar4 == 0) {
        local_8 = 0;
        *param_2 = piVar6;
      }
    }
  }
  if ((local_8 != 0) && (piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  operator_delete(pvVar5);
  return local_8;
}


