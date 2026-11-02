/* Module: stl2plg.dll
   Function: FUN_0044d020
   Address: 0044d020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d020(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5a);
  *(undefined4 **)(param_1 + 0x1bd) = puVar1;
  *puVar1 = FUN_0044e880;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 4) = &LAB_0044d5a0;
  *(code **)(*(int *)(param_1 + 0x1bd) + 8) = FUN_0044e7f0;
  *(code **)(*(int *)(param_1 + 0x1bd) + 0xc) = FUN_0044d500;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1bd) + -4 + iVar2) = FUN_0044d500;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x10) = &LAB_0044d0b0;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x48) = &LAB_0044d340;
  FUN_0044e880(param_1);
  return;
}


