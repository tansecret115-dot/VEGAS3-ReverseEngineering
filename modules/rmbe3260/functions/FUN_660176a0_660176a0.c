/* Module: rmbe3260.dll
   Function: FUN_660176a0
   Address: 660176a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660176a0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064850;
  param_1[5] = &PTR_LAB_66066668;
  FUN_6605cda0(param_1 + 0xf);
  FUN_6605cda0(param_1 + 0x13);
  FUN_6605cda0(param_1 + 0x17);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_66066640;
  param_1[4] = &PTR_LAB_66066628;
  param_1[5] = &PTR_LAB_660665e0;
  param_1[0xe] = 1;
  return param_1;
}


