/* Module: stl2plg.dll
   Function: FUN_0044cdd0
   Address: 0044cdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cdd0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x1b9);
  *puVar1 = FUN_0044cb30;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1bd))(param_1);
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  return;
}


