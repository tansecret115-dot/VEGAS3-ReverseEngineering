/* Module: extmondrv.dll
   Function: FUN_0040ab80
   Address: 0040ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ab80(int param_1)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x1c) = 0x28;
  *(undefined4 *)(param_1 + 0x20) = 0x2d0;
  *(undefined4 *)(param_1 + 0x24) = 0x1e6;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0x18;
  *(undefined4 *)(param_1 + 0x2c) = 0x47504a4d;
  uVar1 = *(int *)(param_1 + 0x20) * 0x18 + 0x1f;
  *(int *)(param_1 + 0x30) =
       ((int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3) * *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int **)(param_1 + 0x448) != (int *)0x0) {
    FUN_0040b920(*(int **)(param_1 + 0x448));
  }
  return;
}


