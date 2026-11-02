/* Module: sfcdi.dll
   Function: FUN_5bf1f360
   Address: 5bf1f360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5bf1f360(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 1;
  *param_1 = &PTR_LAB_5bf56470;
  puVar2 = param_1 + 0x15;
  for (iVar1 = 0x764; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x779;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x799;
  for (iVar1 = 0x7ad; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xf46] = 0;
  return param_1;
}


