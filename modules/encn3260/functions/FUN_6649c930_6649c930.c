/* Module: encn3260.dll
   Function: FUN_6649c930
   Address: 6649c930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6649c930(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_664deac8;
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_664d29c0(puVar1);
    param_1[2] = puVar1;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}


