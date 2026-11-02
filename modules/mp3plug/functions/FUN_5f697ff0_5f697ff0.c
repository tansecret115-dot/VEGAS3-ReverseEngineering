/* Module: mp3plug.dll
   Function: FUN_5f697ff0
   Address: 5f697ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f697ff0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x66] = 0;
  *param_1 = &PTR_LAB_5f72d2c0;
  param_1[1] = 1;
  param_1[100] = 0;
  param_1[0x67] = 0x3ff00000;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x6f] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[7] = 0;
  puVar2 = param_1 + 10;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


