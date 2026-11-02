/* Module: erv13260.dll
   Function: FUN_63603a10
   Address: 63603a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63603a10(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}


