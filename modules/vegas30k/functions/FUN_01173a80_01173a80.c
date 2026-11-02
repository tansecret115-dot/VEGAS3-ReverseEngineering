/* Module: vegas30k.dll
   Function: FUN_01173a80
   Address: 01173a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01173a80(int param_1)

{
  undefined4 *puVar1;
  char unaff_BL;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1e);
  *(undefined4 **)(param_1 + 0x169) = puVar1;
  *puVar1 = FUN_01174090;
  puVar1[1] = FUN_011744f0;
  puVar1[2] = &LAB_01174520;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  FUN_01173b40(param_1);
  if (*(int *)(param_1 + 0xe1) == 0) {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xdd) = 1;
  }
  else {
    FUN_01173d00(param_1);
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


