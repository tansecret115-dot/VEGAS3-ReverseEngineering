/* Module: rmto3260.dll
   Function: FUN_662f97a0
   Address: 662f97a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_662f97a0(short param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == 3) {
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_662fae10(puVar1);
      goto LAB_662f9812;
    }
  }
  else if (param_1 == 4) {
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_662fb8d0(puVar1);
      goto LAB_662f9812;
    }
  }
  else {
    if (param_1 != 5) {
      puVar1 = (undefined4 *)0x0;
      iVar2 = -0x7ffbfffb;
      goto LAB_662f9812;
    }
    puVar1 = operator_new(0xb7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_662fc780(puVar1);
      goto LAB_662f9812;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_662f9812:
  if (iVar2 == 0) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    if (iVar2 == 0) {
      puVar1[1] = 0;
      _DAT_66311d78 = iVar2;
      return puVar1;
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    (**(code **)*puVar1)(1);
  }
  _DAT_66311d78 = iVar2;
  return (undefined4 *)0x0;
}


