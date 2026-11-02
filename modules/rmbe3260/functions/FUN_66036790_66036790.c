/* Module: rmbe3260.dll
   Function: FUN_66036790
   Address: 66036790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66036790(int *param_1)

{
  int iVar1;
  
  FUN_660374d0((int)param_1);
  iVar1 = (**(code **)(*param_1 + 4))();
  param_1[2] = iVar1;
  param_1[3] = 0x32;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


