/* Module: rmme3260.dll
   Function: FUN_6625ebf0
   Address: 6625ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_6625ebf0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  void *this;
  
  puVar1 = (undefined4 *)FUN_6625f560();
  if ((puVar1 == (undefined4 *)0x0) && (param_2 != 0)) {
    this = operator_new(0x28);
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_6625f0b0(this,param_1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[2] == 0) {
        FUN_6625f200((int)puVar1);
        operator_delete(puVar1);
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_6625f500(puVar1);
      }
    }
  }
  return puVar1;
}


