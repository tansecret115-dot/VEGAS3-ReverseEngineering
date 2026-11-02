/* Module: encn3260.dll
   Function: FUN_664cfb60
   Address: 664cfb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664cfb60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_664ba900(puVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


