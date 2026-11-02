/* Module: mp3rw.dll
   Function: FUN_00486490
   Address: 00486490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486490(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1d) + 0x51);
  cVar2 = (*(code *)puVar1[3])(*(int *)(param_1 + 0x1d));
  if (cVar2 == '\0') {
    *(undefined4 *)(**(int **)(param_1 + 0x1d) + 0x14) = 0x16;
    (**(code **)**(undefined4 **)(param_1 + 0x1d))(*(undefined4 **)(param_1 + 0x1d));
  }
  *(undefined4 *)(param_1 + 0xd) = *puVar1;
  *(undefined4 *)(param_1 + 0x11) = puVar1[1];
  return;
}


