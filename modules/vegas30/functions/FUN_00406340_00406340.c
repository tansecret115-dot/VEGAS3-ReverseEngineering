/* Module: vegas30.exe
   Function: FUN_00406340
   Address: 00406340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406340(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = param_1;
  }
  FUN_004075c0();
  param_1[2] = &PTR_LAB_0060fdac;
  param_1[10] = &PTR_FUN_0060fd88;
  param_1[0xb] = &PTR_LAB_0060fd64;
  param_1[0xc] = &PTR_LAB_0060fcec;
  param_1[0xd] = &PTR_LAB_0060fcc4;
  param_1[0xe] = &PTR_LAB_0060fcac;
  param_1[0xf] = &PTR_LAB_0060fc98;
  param_1[0x11] = &PTR_LAB_0060fc88;
  param_1[0x12] = &PTR_LAB_0060fc68;
  param_1[0x13] = &PTR_LAB_0060fc20;
  param_1[0x14] = &PTR_LAB_0060fb94;
  param_1[0x15] = param_2;
  *param_1 = &PTR_LAB_0060fb88;
  InterlockedIncrement((LONG *)&DAT_0064717c);
  return param_1;
}


