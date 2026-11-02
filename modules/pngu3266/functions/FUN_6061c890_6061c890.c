/* Module: pngu3266.dll
   Function: FUN_6061c890
   Address: 6061c890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_6061c890(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_6061d290(puVar1);
      return puVar1;
    }
  }
  else if ((param_1 == 1) && (puVar1 = operator_new(0x20), puVar1 != (undefined4 *)0x0)) {
    FUN_6061c980(puVar1);
    puVar1[2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_6062d120;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


