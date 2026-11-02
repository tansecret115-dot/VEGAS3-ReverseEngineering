/* Module: oggplug.dll
   Function: FUN_004313a0
   Address: 004313a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004313a0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar5 = param_1[1];
    if (iVar5 == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(iVar5 + 0x1c);
    }
    _Memory = (undefined4 *)param_1[0x1a];
    if (_Memory != (undefined4 *)0x0) {
      if ((undefined4 *)_Memory[1] != (undefined4 *)0x0) {
        pvVar1 = *(void **)_Memory[1];
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        free((void *)_Memory[1]);
        puVar4 = _Memory + 5;
        local_8 = 2;
        do {
          iVar2 = 2;
          do {
            if (*(void **)*puVar4 != (void *)0x0) {
              free(*(void **)*puVar4);
            }
            free((void *)*puVar4);
            puVar4 = puVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      if ((int *)*_Memory != (int *)0x0) {
        FUN_00436a30((int *)*_Memory);
        free((void *)*_Memory);
      }
      if ((undefined4 *)_Memory[9] != (undefined4 *)0x0) {
        FUN_00437430(*(undefined4 **)_Memory[9]);
        free(*(void **)_Memory[9]);
        free((void *)_Memory[9]);
      }
      if ((undefined4 *)_Memory[10] != (undefined4 *)0x0) {
        FUN_00437430(*(undefined4 **)_Memory[10]);
        free(*(void **)_Memory[10]);
        free((void *)_Memory[10]);
      }
      if ((undefined4 *)_Memory[0xc] != (undefined4 *)0x0) {
        FUN_00432650((undefined4 *)_Memory[0xc]);
      }
    }
    if (param_1[2] != 0) {
      iVar2 = 0;
      if (0 < *(int *)(iVar5 + 4)) {
        do {
          pvVar1 = *(void **)(param_1[2] + iVar2 * 4);
          if (pvVar1 != (void *)0x0) {
            free(pvVar1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar5 + 4));
      }
      free((void *)param_1[2]);
      if ((void *)param_1[3] != (void *)0x0) {
        free((void *)param_1[3]);
      }
    }
    if (local_c != 0) {
      iVar5 = 0;
      if (0 < *(int *)(local_c + 8)) {
        piVar3 = (int *)(local_c + 0x24);
        do {
          if ((_Memory != (undefined4 *)0x0) && (_Memory[0xe] != 0)) {
            (**(code **)((&PTR_PTR_00452c60)
                         [*(int *)(local_c + 0x124 + *(int *)(*piVar3 + 0xc) * 4)] + 0x14))
                      (*(undefined4 *)(_Memory[0xe] + iVar5 * 4));
          }
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar5 < *(int *)(local_c + 8));
      }
      iVar5 = 0;
      if (0 < *(int *)(local_c + 0x1c)) {
        iVar2 = 0;
        do {
          if ((_Memory != (undefined4 *)0x0) && (_Memory[0xb] != 0)) {
            FUN_00435930((undefined4 *)(_Memory[0xb] + iVar2));
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x1c;
        } while (iVar5 < *(int *)(local_c + 0x1c));
      }
    }
    if (_Memory != (undefined4 *)0x0) {
      if ((void *)_Memory[0xe] != (void *)0x0) {
        free((void *)_Memory[0xe]);
      }
      if ((void *)_Memory[0xb] != (void *)0x0) {
        free((void *)_Memory[0xb]);
      }
      if ((void *)_Memory[0xf] != (void *)0x0) {
        free((void *)_Memory[0xf]);
      }
      if ((void *)_Memory[0x10] != (void *)0x0) {
        free((void *)_Memory[0x10]);
      }
      if ((void *)_Memory[0x11] != (void *)0x0) {
        free((void *)_Memory[0x11]);
      }
      free(_Memory);
    }
    for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


