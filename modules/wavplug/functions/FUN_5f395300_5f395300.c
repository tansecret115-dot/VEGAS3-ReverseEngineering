/* Module: wavplug.dll
   Function: FUN_5f395300
   Address: 5f395300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f395300(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_5f3cb138;
  param_1[0xc] = 0;
  puVar2 = param_1 + 0xd;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  return param_1;
}


