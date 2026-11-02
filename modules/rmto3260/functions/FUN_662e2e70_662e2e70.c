/* Module: rmto3260.dll
   Function: FUN_662e2e70
   Address: 662e2e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_662e2e70(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *pvVar2;
  undefined3 extraout_var_00;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  iVar4 = 0;
  bVar1 = FUN_662ea4b0(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_662e7a70(param_1);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      iVar4 = -0x7ffbff7e;
      goto LAB_662e2eda;
    }
    pvVar2 = operator_new(0x133);
    if (pvVar2 != (void *)0x0) {
      piVar3 = FUN_662e77d0(pvVar2,param_1);
      goto LAB_662e2eda;
    }
  }
  else {
    pvVar2 = operator_new(0x1cc);
    if (pvVar2 != (void *)0x0) {
      piVar3 = FUN_662ea1b0(pvVar2,param_1);
      goto LAB_662e2eda;
    }
  }
  piVar3 = (int *)0x0;
LAB_662e2eda:
  if (iVar4 == 0) {
    iVar4 = 0;
    if (piVar3 == (int *)0x0) {
      iVar4 = -0x7ffbff7e;
    }
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_1 + 0x1c))();
      piVar3[0x1e] = iVar4;
      iVar4 = FUN_662e38f0(piVar3);
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


