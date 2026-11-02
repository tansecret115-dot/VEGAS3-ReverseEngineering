/* Module: vidcap30.exe
   Function: FUN_00550f20
   Address: 00550f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00550f20(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x1b9);
  *puVar1 = FUN_00550c80;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1bd))(param_1);
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  return;
}


