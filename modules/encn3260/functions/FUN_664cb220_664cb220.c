/* Module: encn3260.dll
   Function: FUN_664cb220
   Address: 664cb220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_664cb220(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  void *this;
  
  puVar1 = (undefined4 *)FUN_664cb650();
  if ((puVar1 == (undefined4 *)0x0) && (param_2 != 0)) {
    this = operator_new(0x22);
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_664cb290(this,param_1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[2] == 0) {
        FUN_664cb3c0((int)puVar1);
        operator_delete(puVar1);
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_664cb5f0(puVar1);
      }
    }
  }
  return puVar1;
}


