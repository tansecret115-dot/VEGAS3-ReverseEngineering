/* Module: rmto3260.dll
   Function: FUN_662e1310
   Address: 662e1310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662e1310(int *param_1)

{
  int iVar1;
  
  FUN_662e19b0((int)param_1);
  iVar1 = (**(code **)(*param_1 + 4))();
  param_1[2] = iVar1;
  param_1[3] = 0x12;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  return;
}


