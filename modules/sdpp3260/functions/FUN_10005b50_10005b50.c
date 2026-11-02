/* Module: sdpp3260.dll
   Function: FUN_10005b50
   Address: 10005b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_10005b50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_10002640(puVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


