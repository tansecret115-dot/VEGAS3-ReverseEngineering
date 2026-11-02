/* Module: rmbe3260.dll
   Function: FUN_6602e350
   Address: 6602e350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6602e350(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_66067990;
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_66053190(puVar1);
    param_1[2] = puVar1;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}


