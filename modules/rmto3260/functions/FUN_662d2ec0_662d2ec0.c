/* Module: rmto3260.dll
   Function: FUN_662d2ec0
   Address: 662d2ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662d2ec0(undefined4 *param_1)

{
  DWORD DVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66306400;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66306fb0;
  FUN_662eefd0(param_1 + 0xf);
  FUN_662ed450((undefined4 *)((int)param_1 + 0x66));
  *param_1 = &PTR_FUN_66307210;
  param_1[4] = &PTR_LAB_663071c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)((int)param_1 + 0x4a) = 0;
  DVar1 = GetTickCount();
  param_1[0x14] = DVar1;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((int)param_1 + 0x56) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  return param_1;
}


