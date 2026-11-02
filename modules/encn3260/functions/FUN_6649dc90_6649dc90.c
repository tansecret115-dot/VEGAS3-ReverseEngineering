/* Module: encn3260.dll
   Function: FUN_6649dc90
   Address: 6649dc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6649dc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_664ded80;
  param_1[1] = &PTR_LAB_664ded48;
  param_1[2] = &PTR_LAB_664ded30;
  param_1[3] = &PTR_LAB_664ded18;
  param_1[4] = &PTR_LAB_664decf0;
  param_1[5] = &PTR_LAB_664dde40;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_664ba900(param_1 + 8);
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xe0;
  FUN_664ba900((undefined4 *)((int)param_1 + 0x49));
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  *param_1 = &PTR_FUN_664deca8;
  param_1[1] = &PTR_LAB_664dec70;
  param_1[2] = &PTR_LAB_664dec58;
  param_1[3] = &PTR_LAB_664dec40;
  param_1[4] = &PTR_LAB_664dec18;
  param_1[5] = &PTR_LAB_664dec08;
  return param_1;
}


