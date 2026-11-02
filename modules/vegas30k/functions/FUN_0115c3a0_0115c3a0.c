/* Module: vegas30k.dll
   Function: FUN_0115c3a0
   Address: 0115c3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115c3a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5a);
  *(undefined4 **)(param_1 + 0x1bd) = puVar1;
  *puVar1 = FUN_0115dc00;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 4) = &LAB_0115c920;
  *(code **)(*(int *)(param_1 + 0x1bd) + 8) = FUN_0115db70;
  *(code **)(*(int *)(param_1 + 0x1bd) + 0xc) = FUN_0115c880;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1bd) + -4 + iVar2) = FUN_0115c880;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x10) = &LAB_0115c430;
  *(undefined1 **)(*(int *)(param_1 + 0x1bd) + 0x48) = &LAB_0115c6c0;
  FUN_0115dc00(param_1);
  return;
}


