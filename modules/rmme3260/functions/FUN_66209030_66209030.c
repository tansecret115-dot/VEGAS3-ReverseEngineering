/* Module: rmme3260.dll
   Function: FUN_66209030
   Address: 66209030
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_66209030(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *pvVar2;
  undefined3 extraout_var_00;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  iVar4 = 0;
  bVar1 = FUN_66221800(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_6621edc0(param_1);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      iVar4 = -0x7ffbff7e;
      goto LAB_6620909a;
    }
    pvVar2 = operator_new(0x133);
    if (pvVar2 != (void *)0x0) {
      piVar3 = FUN_6621eb20(pvVar2,param_1);
      goto LAB_6620909a;
    }
  }
  else {
    pvVar2 = operator_new(0x1cc);
    if (pvVar2 != (void *)0x0) {
      piVar3 = FUN_66221500(pvVar2,param_1);
      goto LAB_6620909a;
    }
  }
  piVar3 = (int *)0x0;
LAB_6620909a:
  if (iVar4 == 0) {
    iVar4 = 0;
    if (piVar3 == (int *)0x0) {
      iVar4 = -0x7ffbff7e;
    }
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_1 + 0x1c))();
      piVar3[0x1e] = iVar4;
      iVar4 = FUN_66209b30(piVar3);
      if (iVar4 == 0) {
        return piVar3;
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  return (int *)0x0;
}


