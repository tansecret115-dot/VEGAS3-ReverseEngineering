/* Module: rmbe3260.dll
   Function: FUN_66047020
   Address: 66047020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_66047020(short param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == 3) {
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_660486b0(puVar1);
      goto LAB_66047092;
    }
  }
  else if (param_1 == 4) {
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_66049170(puVar1);
      goto LAB_66047092;
    }
  }
  else {
    if (param_1 != 5) {
      puVar1 = (undefined4 *)0x0;
      iVar2 = -0x7ffbfffb;
      goto LAB_66047092;
    }
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_66049dd0(puVar1);
      goto LAB_66047092;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_66047092:
  if (iVar2 == 0) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    if (iVar2 == 0) {
      puVar1[1] = 0;
      _DAT_6607531c = iVar2;
      return puVar1;
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    (**(code **)*puVar1)(1);
  }
  _DAT_6607531c = iVar2;
  return (undefined4 *)0x0;
}


