/* Module: rmto3260.dll
   Function: FUN_662fb8d0
   Address: 662fb8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662fb8d0(undefined4 *param_1)

{
  FUN_662f99c0(param_1);
  *param_1 = &PTR_FUN_66308158;
  param_1[0xb] = 0x1f400000;
  param_1[0xc] = 0x45fa0000;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  *(undefined2 *)(param_1 + 0xd) = 0x10;
  *(undefined2 *)((int)param_1 + 0x4e) = 0xc;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x120;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x55) = 0;
  *(undefined4 *)((int)param_1 + 0x59) = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  FUN_662f9ff0(param_1,&DAT_6630ba28);
  return param_1;
}


