/* Module: sfcdi.dll
   Function: FUN_5bf03fb0
   Address: 5bf03fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf03fb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x24)) {
    do {
      piVar1 = FUN_5bf2c170((int *)(param_1 + 0x74),0);
      if (piVar1 == (int *)0x0) {
        if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
          SetEvent(*(HANDLE *)(param_1 + 4));
        }
        piVar1 = FUN_5bf2c170((int *)(param_1 + 0x74),0xffffffff);
      }
      if (*(int *)(param_1 + 0x30) != 0) break;
      if (*(uint *)(param_1 + 0x24) < (uint)(piVar1[4] + *(int *)(param_1 + 0x28))) {
        iVar2 = *(uint *)(param_1 + 0x24) - *(int *)(param_1 + 0x28);
        piVar1[4] = iVar2;
        piVar1[3] = piVar1[5] * iVar2;
      }
      iVar2 = (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x20),piVar1[2],piVar1[3]);
      piVar1[6] = 0;
      if (iVar2 != piVar1[3]) {
        piVar1[6] = -0x7ffb1ff8;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + piVar1[4];
      FUN_5bf2c120((undefined4 *)(param_1 + 0x9c),piVar1);
      *(undefined4 *)(*(int *)(param_1 + 0x1cd4) + 0x40) = *(undefined4 *)(param_1 + 0xb8);
    } while (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x24));
  }
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x70) = 0xfffffc18;
  FUN_5bf2c120((undefined4 *)(param_1 + 0x9c),(int *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return 0;
}


