/* Module: oggplug.dll
   Function: FUN_00430070
   Address: 00430070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00430070(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  _Memory = (void *)param_1[7];
  if (_Memory != (void *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 8)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x24);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          free((void *)*puVar2);
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 8));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0xc)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x224);
      do {
        (**(code **)((&PTR_PTR_00452c60)[puVar2[-0x40]] + 0x10))(*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0xc));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0x10)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x424);
      do {
        (**(code **)((&PTR_PTR_00452c48)[puVar2[-0x40]] + 0x10))(*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0x10));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0x14)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x624);
      do {
        (**(code **)((&PTR_PTR_00452c4c)[puVar2[-0x40]] + 0x10))(*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0x14));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0x18)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x824);
      do {
        (**(code **)((&PTR_PTR_00452c54)[puVar2[-0x40]] + 0x10))(*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0x18));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0x1c)) {
      puVar2 = (undefined4 *)((int)_Memory + 0x924);
      do {
        if ((undefined4 *)*puVar2 != (undefined4 *)0x0) {
          FUN_00435910((undefined4 *)*puVar2);
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0x1c));
    }
    iVar1 = 0;
    if (0 < *(int *)((int)_Memory + 0x20)) {
      puVar2 = (undefined4 *)((int)_Memory + 0xd24);
      do {
        FUN_004326b0((undefined4 *)*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)((int)_Memory + 0x20));
    }
    free(_Memory);
  }
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


