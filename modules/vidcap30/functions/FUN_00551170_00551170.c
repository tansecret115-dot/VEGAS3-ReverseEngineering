/* Module: vidcap30.exe
   Function: FUN_00551170
   Address: 00551170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00551170(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5a);
  *(undefined4 **)(param_1 + 0x1bd) = puVar1;
  *puVar1 = FUN_005529d0;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 4) = &LAB_005516f0;
  *(code **)(*(int *)(param_1 + 0x1bd) + 8) = FUN_00552940;
  *(code **)(*(int *)(param_1 + 0x1bd) + 0xc) = FUN_00551650;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1bd) + -4 + iVar2) = FUN_00551650;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x10) = &LAB_00551200;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x48) = &LAB_00551490;
  FUN_005529d0(param_1);
  return;
}


