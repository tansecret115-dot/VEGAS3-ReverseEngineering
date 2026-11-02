/* Module: rmme3260.dll
   Function: FUN_662591e0
   Address: 662591e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_662591e0(short param_1)

{
  undefined4 *puVar1;
  
  if (DAT_6627f238 != 0) {
    if (param_1 == 1) {
      puVar1 = operator_new(0x7c);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_66259090(puVar1);
        *puVar1 = &PTR_FUN_6626d0a0;
        return puVar1;
      }
    }
    else if ((param_1 == 2) && (puVar1 = operator_new(0x7c), puVar1 != (undefined4 *)0x0)) {
      FUN_66259090(puVar1);
      *puVar1 = &PTR_FUN_6626d128;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


