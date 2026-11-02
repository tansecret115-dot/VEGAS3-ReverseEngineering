/* Module: sfmarket2.dll
   Function: FUN_004854d0
   Address: 004854d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004854d0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x16);
  *(undefined4 **)((int)param_1 + 0x1a9) = puVar1;
  *puVar1 = FUN_00485780;
  puVar1[1] = &LAB_004858e0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00485500(param_1);
  return;
}


