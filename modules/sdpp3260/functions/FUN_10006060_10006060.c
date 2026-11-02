/* Module: sdpp3260.dll
   Function: FUN_10006060
   Address: 10006060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10006060(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}


