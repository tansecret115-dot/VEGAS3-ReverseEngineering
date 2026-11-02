/* Module: rmto3260.dll
   Function: FUN_662f9690
   Address: 662f9690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_662f9690(undefined4 param_1,short param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)0x0;
  piVar1 = FUN_662f0880(0);
  if (piVar1 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (iVar4 != 0) goto LAB_662f9772;
  iVar4 = (**(code **)(*piVar1 + 0x10))(param_1,0x302,0);
  if (iVar4 != 0) goto LAB_662f9772;
  if (param_2 == 3) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) {
LAB_662f9741:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_662fae10(puVar2);
    }
  }
  else if (param_2 == 4) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) goto LAB_662f9741;
    piVar3 = FUN_662fb8d0(puVar2);
  }
  else if (param_2 == 5) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) goto LAB_662f9741;
    piVar3 = FUN_662fc780(puVar2);
  }
  else {
    piVar3 = (int *)0x0;
    iVar4 = -0x7ffbfffb;
  }
  if ((iVar4 == 0) && (piVar3 == (int *)0x0)) {
    iVar4 = -0x7ff8fff2;
  }
  (**(code **)(*piVar3 + 0x8c))(param_1);
  if (iVar4 == 0) {
    piVar3[1] = (int)piVar1;
    _DAT_66311d78 = iVar4;
    return piVar3;
  }
LAB_662f9772:
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    (**(code **)*piVar3)(1);
  }
  _DAT_66311d78 = iVar4;
  return (int *)0x0;
}


