/* Module: sfmarket2.dll
   Function: FUN_004597e0
   Address: 004597e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004597e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5a);
  *(undefined4 **)(param_1 + 0x1bd) = puVar1;
  *puVar1 = FUN_0045b040;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 4) = &LAB_00459d60;
  *(code **)(*(int *)(param_1 + 0x1bd) + 8) = FUN_0045afb0;
  *(code **)(*(int *)(param_1 + 0x1bd) + 0xc) = FUN_00459cc0;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1bd) + -4 + iVar2) = FUN_00459cc0;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x10) = &LAB_00459870;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x48) = &LAB_00459b00;
  FUN_0045b040(param_1);
  return;
}


