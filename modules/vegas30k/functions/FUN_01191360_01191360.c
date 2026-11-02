/* Module: vegas30k.dll
   Function: FUN_01191360
   Address: 01191360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01191360(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x4e001;
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffe0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    SetEvent(*(HANDLE *)(param_1 + 0x24));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))
              (*(int **)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x14c));
    if (*(void **)(param_1 + 0x14c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x14c));
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if (*(void **)(param_1 + 0x150) != (void *)0x0) {
      free(*(void **)(param_1 + 0x150));
    }
    piVar1 = *(int **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff3f;
    uVar2 = 0;
  }
  return uVar2;
}


