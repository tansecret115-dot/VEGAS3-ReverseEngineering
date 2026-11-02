/* Module: stl2plg.dll
   Function: FUN_00456010
   Address: 00456010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456010(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x16);
  *(undefined4 **)((int)param_1 + 0x1a9) = puVar1;
  *puVar1 = FUN_004562c0;
  puVar1[1] = &LAB_00456420;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00456040(param_1);
  return;
}


