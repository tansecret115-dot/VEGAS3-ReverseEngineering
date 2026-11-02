/* Module: rmme3260.dll
   Function: FUN_66209140
   Address: 66209140
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_66209140(char *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar3 = 0;
  pvVar1 = operator_new(0x56);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_66257370(pvVar1,param_1,0x8302,0x1a4);
  }
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  if (iVar3 == 0) {
    pvVar1 = operator_new(0x133);
    if (pvVar1 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_6621eb20(pvVar1,puVar2);
    }
  }
  if ((piVar4 != (int *)0x0) && (piVar4[0x1e] = (int)param_1, piVar4 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar4 + 4))();
  }
  if ((iVar3 != 0) && (piVar4 != (int *)0x0)) {
    (**(code **)*piVar4)(1);
    piVar4 = (int *)0x0;
  }
  return piVar4;
}


