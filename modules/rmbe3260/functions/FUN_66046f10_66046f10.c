/* Module: rmbe3260.dll
   Function: FUN_66046f10
   Address: 66046f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_66046f10(undefined4 param_1,short param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)0x0;
  piVar1 = FUN_6604fb50(0);
  if (piVar1 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (iVar4 != 0) goto LAB_66046ff2;
  iVar4 = (**(code **)(*piVar1 + 0x10))(param_1,0x302,0);
  if (iVar4 != 0) goto LAB_66046ff2;
  if (param_2 == 3) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) {
LAB_66046fc1:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_660486b0(puVar2);
    }
  }
  else if (param_2 == 4) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) goto LAB_66046fc1;
    piVar3 = FUN_66049170(puVar2);
  }
  else if (param_2 == 5) {
    puVar2 = operator_new(0xb7);
    if (puVar2 == (undefined4 *)0x0) goto LAB_66046fc1;
    piVar3 = FUN_66049dd0(puVar2);
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
    _DAT_6607531c = iVar4;
    return piVar3;
  }
LAB_66046ff2:
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    (**(code **)*piVar3)(1);
  }
  _DAT_6607531c = iVar4;
  return (int *)0x0;
}


