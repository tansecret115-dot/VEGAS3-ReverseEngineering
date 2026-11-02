/* Module: rmbe3260.dll
   Function: FUN_66037430
   Address: 66037430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66037430(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  param_1[2] = iVar1;
  param_1[3] = 0x14;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  FUN_660374d0((int)param_1);
  return;
}


