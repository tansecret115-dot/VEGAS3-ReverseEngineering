/* Module: rmme3260.dll
   Function: FUN_66263b00
   Address: 66263b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66263b00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_662509f0(puVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


