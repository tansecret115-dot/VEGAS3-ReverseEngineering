/* Module: vegas30k.dll
   Function: FUN_011a4000
   Address: 011a4000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a4000(undefined4 *param_1)

{
  int iVar1;
  void *_Memory;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int local_10;
  int local_c;
  
  *param_1 = &PTR_LAB_011eae7c;
  if ((int *)param_1[3] != (int *)0x0) {
    iVar1 = *(int *)param_1[3];
    local_c = 0;
    if (0 < iVar1) {
      do {
        iVar5 = 0;
        iVar4 = *(int *)(*(int *)(param_1[3] + 8) + local_c * 4);
        param_1[7] = iVar4;
        if (iVar4 != 0) {
          if (*(int **)(iVar4 + 0x118) == (int *)0x0) {
            if (*(int **)(iVar4 + 0x120) != (int *)0x0) {
              iVar4 = **(int **)(iVar4 + 0x120);
              if (0 < iVar4) {
                do {
                  pvVar6 = *(void **)(*(int *)(*(int *)(param_1[7] + 0x120) + 8) + iVar5 * 4);
                  if (pvVar6 != (void *)0x0) {
                    free(*(void **)((int)pvVar6 + 8));
                    free(pvVar6);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar4);
              }
              _SfList_Destroy_4(*(undefined4 *)(param_1[7] + 0x120));
            }
          }
          else {
            iVar4 = **(int **)(iVar4 + 0x118);
            local_10 = 0;
            if (0 < iVar4) {
              do {
                pvVar6 = *(void **)(*(int *)(*(int *)(param_1[7] + 0x118) + 8) + local_10 * 4);
                (**(code **)(**(int **)((int)pvVar6 + 0x108) + 8))(*(int **)((int)pvVar6 + 0x108));
                if (*(int **)((int)pvVar6 + 0x118) != (int *)0x0) {
                  iVar5 = **(int **)((int)pvVar6 + 0x118);
                  iVar3 = 0;
                  if (0 < iVar5) {
                    do {
                      _Memory = *(void **)(*(int *)(*(int *)((int)pvVar6 + 0x118) + 8) + iVar3 * 4);
                      if (_Memory != (void *)0x0) {
                        free(*(void **)((int)_Memory + 8));
                        free(_Memory);
                      }
                      iVar3 = iVar3 + 1;
                    } while (iVar3 < iVar5);
                  }
                  _SfList_Destroy_4(*(undefined4 *)((int)pvVar6 + 0x118));
                }
                free(pvVar6);
                local_10 = local_10 + 1;
              } while (local_10 < iVar4);
            }
            _SfList_Destroy_4(*(undefined4 *)(param_1[7] + 0x118));
            *(undefined4 *)(param_1[7] + 0x118) = 0;
          }
          (**(code **)(**(int **)(param_1[7] + 0x114) + 8))(*(int **)(param_1[7] + 0x114));
          free((void *)param_1[7]);
        }
        local_c = local_c + 1;
      } while (local_c < iVar1);
    }
    _SfList_Destroy_4(param_1[3]);
  }
  piVar2 = (int *)param_1[10];
  param_1[7] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  param_1[10] = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    iVar1 = *(int *)param_1[4];
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = *(int *)(*(int *)(param_1[4] + 8) + iVar4 * 4);
        param_1[9] = iVar5;
        if (iVar5 != 0) {
          (**(code **)(**(int **)(iVar5 + 0x114) + 8))(*(int **)(iVar5 + 0x114));
          *(undefined4 *)(param_1[9] + 0x114) = 0;
          pvVar6 = *(void **)(param_1[9] + 0x118);
          if ((pvVar6 != (void *)0x0) ||
             (pvVar6 = *(void **)(param_1[9] + 0x11c), pvVar6 != (void *)0x0)) {
            free(pvVar6);
          }
          free((void *)param_1[9]);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    _SfList_Destroy_4(param_1[4]);
  }
  piVar2 = (int *)param_1[0xb];
  param_1[9] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0xc];
  param_1[0xb] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0xd];
  param_1[0xc] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  param_1[0xd] = 0;
  return;
}


