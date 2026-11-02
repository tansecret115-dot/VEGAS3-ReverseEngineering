/* Module: vidcap30.exe
   Function: FUN_0056ad80
   Address: 0056ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056ad80(int param_1)

{
  undefined4 *puVar1;
  char unaff_BL;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1e);
  *(undefined4 **)(param_1 + 0x169) = puVar1;
  *puVar1 = FUN_0056b390;
  puVar1[1] = FUN_0056b7f0;
  puVar1[2] = &LAB_0056b820;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  FUN_0056ae40(param_1);
  if (*(int *)(param_1 + 0xe1) == 0) {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xdd) = 1;
  }
  else {
    FUN_0056b000(param_1);
  }
  if (*(char *)(param_1 + 0x104) != '\0') {
    *(undefined1 *)(param_1 + 0xe7) = 1;
  }
  if (unaff_BL == '\0') {
    *(undefined4 *)((int)puVar1 + 0xe) = 0;
  }
  else if (*(char *)(param_1 + 0xe7) == '\0') {
    *(undefined4 *)((int)puVar1 + 0xe) = 2;
  }
  else {
    *(undefined4 *)((int)puVar1 + 0xe) = 1;
  }
  *(undefined4 *)((int)puVar1 + 0x1a) = 0;
  *(undefined4 *)((int)puVar1 + 0x12) = 0;
  if (*(char *)(param_1 + 0xe7) != '\0') {
    *(int *)((int)puVar1 + 0x16) = *(int *)(param_1 + 0xdd) << 1;
    return;
  }
  *(undefined4 *)((int)puVar1 + 0x16) = *(undefined4 *)(param_1 + 0xdd);
  return;
}


