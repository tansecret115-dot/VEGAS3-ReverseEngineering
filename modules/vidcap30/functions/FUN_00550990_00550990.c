/* Module: vidcap30.exe
   Function: FUN_00550990
   Address: 00550990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00550990(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x13);
  *(undefined4 **)(param_1 + 0x1b9) = puVar1;
  *puVar1 = FUN_00550c80;
  puVar1[1] = FUN_00550f20;
  puVar1[2] = FUN_005509d0;
  puVar1[3] = &LAB_00550c60;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  return;
}


