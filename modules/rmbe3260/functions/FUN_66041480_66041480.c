/* Module: rmbe3260.dll
   Function: FUN_66041480
   Address: 66041480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66041480(undefined4 *param_1)

{
  FUN_6603eb20(param_1);
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined2 *)((int)param_1 + 0xd2) = 1;
  *(undefined2 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 1;
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0xde) = 0;
  *(undefined4 *)((int)param_1 + 0xe2) = 0;
  FUN_6605b650((undefined4 *)((int)param_1 + 0xe6));
  *(undefined4 *)((int)param_1 + 0xf2) = 0;
  *(undefined4 *)((int)param_1 + 0xf6) = 0;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  *(undefined2 *)((int)param_1 + 0xfe) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  param_1[0x51] = 0;
  *param_1 = &PTR_FUN_66068120;
  FUN_660422d0((int)param_1);
  return param_1;
}


