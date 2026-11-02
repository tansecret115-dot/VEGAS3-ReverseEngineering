/* Module: vegas30k.dll
   Function: FUN_0119ef50
   Address: 0119ef50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119ef50(int param_1,int *param_2)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_8;
  
  local_8 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x14) == 1) {
    return -0x7fffbffb;
  }
  _Memory = *(int **)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  pvVar3 = calloc(1,iVar2 * 4);
  *(void **)(param_1 + 0x18) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar4 = 0;
      piVar6 = _Memory;
      do {
        piVar1 = (int *)*piVar6;
        if (param_2 == piVar1) {
          (**(code **)(*piVar1 + 8))(piVar1);
          local_8 = 0;
        }
        else {
          iVar4 = iVar4 + 4;
          *(int **)(*(int *)(param_1 + 0x18) + -4 + iVar4) = piVar1;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x14));
      if (-1 < local_8) {
        *(int *)(param_1 + 0x14) = iVar2;
        if (_Memory == (int *)0x0) {
          return local_8;
        }
        free(_Memory);
        return local_8;
      }
    }
    free(*(void **)(param_1 + 0x18));
    *(int **)(param_1 + 0x18) = _Memory;
    return local_8;
  }
  return -0x7ff8fff2;
}


