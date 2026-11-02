/* Module: rmbe3260.dll
   Function: FUN_66036250
   Address: 66036250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66036250(int *param_1)

{
  int iVar1;
  
  FUN_660374d0((int)param_1);
  iVar1 = (**(code **)(*param_1 + 4))();
  param_1[2] = iVar1;
  param_1[3] = 0x12;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  return;
}


