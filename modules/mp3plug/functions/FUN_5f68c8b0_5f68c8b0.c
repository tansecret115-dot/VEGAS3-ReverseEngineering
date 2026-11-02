/* Module: mp3plug.dll
   Function: FUN_5f68c8b0
   Address: 5f68c8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f68c8b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5f72ca28;
  param_1[0x5c9] = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[1] = 0xffffffff;
  puVar2 = param_1 + 0x20d;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x892);
  for (iVar1 = 0x395; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  param_1[0x5bc] = 0;
  param_1[0x5be] = 0;
  param_1[0x5c0] = 0;
  param_1[0x5c2] = 0;
  param_1[0x5ba] = 0;
  param_1[0x20b] = 0;
  param_1[0x5bd] = 0;
  param_1[0x5bf] = 0;
  param_1[0x5c1] = 0;
  param_1[0x5c3] = 0;
  param_1[0x5c8] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5b9] = 4;
  return param_1;
}


