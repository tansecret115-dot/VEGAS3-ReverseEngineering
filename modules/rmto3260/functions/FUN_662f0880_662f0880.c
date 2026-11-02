/* Module: rmto3260.dll
   Function: FUN_662f0880
   Address: 662f0880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_662f0880(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_662f1d60(puVar1);
      return puVar1;
    }
  }
  else if ((param_1 == 1) && (puVar1 = operator_new(0x20), puVar1 != (undefined4 *)0x0)) {
    FUN_662f0960(puVar1);
    puVar1[2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_66307c58;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


