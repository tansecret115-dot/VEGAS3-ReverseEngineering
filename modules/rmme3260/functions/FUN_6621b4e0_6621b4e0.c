/* Module: rmme3260.dll
   Function: FUN_6621b4e0
   Address: 6621b4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6621b4e0(int *param_1)

{
  int iVar1;
  
  FUN_6621b880((int)param_1);
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


