/* Module: vegas30k.dll
   Function: FUN_0119ac50
   Address: 0119ac50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0119ac50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
    piVar1 = *(int **)(param_1 + 0x668);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x66c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x54))(piVar1);
      }
    }
    else {
      (**(code **)(*piVar1 + 0x48))(piVar1);
    }
  }
  for (puVar2 = *(undefined4 **)(param_1 + 0x674); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[6]) {
    if (((puVar2[3] & 1) != 0) && ((puVar2[3] & 0x60) != 0)) {
      (**(code **)(*(int *)*puVar2 + 0xe0))((int *)*puVar2);
    }
  }
  if (((*(int *)(param_1 + 0x618) != 0) && ((*(uint *)(param_1 + 8) & 0x4000) == 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x618) + 0x28), (*(byte *)(piVar1 + 8) & 0x60) != 0)) {
    (**(code **)(*piVar1 + 0xe0))(piVar1);
  }
  if (*(DWORD *)(param_1 + 0x284) != 0) {
    WaitForMultipleObjects(*(DWORD *)(param_1 + 0x284),(HANDLE *)(param_1 + 0x84),1,20000);
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffe7;
  if (*(code **)(param_1 + 0x64c) != (code *)0x0) {
    (**(code **)(param_1 + 0x64c))
              (param_1,2,*(undefined4 *)(param_1 + 0x650),0,0,0xffffffff,0xffffffff,0,0x3ff00000,0,0
               ,0,0,0xffffffff);
    FUN_011a88c0();
  }
  return 0;
}


