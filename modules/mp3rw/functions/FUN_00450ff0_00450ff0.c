/* Module: mp3rw.dll
   Function: FUN_00450ff0
   Address: 00450ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5a);
  *(undefined4 **)(param_1 + 0x1bd) = puVar1;
  *puVar1 = FUN_00452850;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 4) = &LAB_00451570;
  *(code **)(*(int *)(param_1 + 0x1bd) + 8) = FUN_004527c0;
  *(code **)(*(int *)(param_1 + 0x1bd) + 0xc) = FUN_004514d0;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1bd) + -4 + iVar2) = FUN_004514d0;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x10) = &LAB_00451080;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x48) = &LAB_00451310;
  FUN_00452850(param_1);
  return;
}


