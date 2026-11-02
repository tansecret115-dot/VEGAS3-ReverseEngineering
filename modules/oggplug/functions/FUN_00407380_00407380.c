/* Module: oggplug.dll
   Function: FUN_00407380
   Address: 00407380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00407380(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0xd0] = 0;
  *param_1 = &PTR_LAB_00447a28;
  param_1[1] = 1;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0x3ff00000;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xcc] = 0;
  param_1[0xd9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  puVar2 = param_1 + 10;
  for (iVar1 = 0xc2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


