/* Module: rmme3260.dll
   Function: FUN_66233960
   Address: 66233960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66233960(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_6626c270;
  param_1[1] = &PTR_LAB_6626c238;
  param_1[2] = &PTR_LAB_6626c220;
  param_1[3] = &PTR_LAB_6626c208;
  param_1[4] = &PTR_LAB_6626c1e0;
  param_1[5] = &PTR_LAB_6626bec8;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_662509f0(param_1 + 8);
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xe0;
  FUN_662509f0((undefined4 *)((int)param_1 + 0x49));
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  *param_1 = &PTR_FUN_6626c198;
  param_1[1] = &PTR_LAB_6626c160;
  param_1[2] = &PTR_LAB_6626c148;
  param_1[3] = &PTR_LAB_6626c130;
  param_1[4] = &PTR_LAB_6626c108;
  param_1[5] = &PTR_LAB_6626c0f8;
  return param_1;
}


