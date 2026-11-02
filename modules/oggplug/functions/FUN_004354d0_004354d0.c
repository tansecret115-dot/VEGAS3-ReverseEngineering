/* Module: oggplug.dll
   Function: FUN_004354d0
   Address: 004354d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_004354d0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  uint *_Memory;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  
  local_18 = 0;
  iVar4 = *(int *)(param_1 + 8);
  piVar1 = malloc(0x18);
  pvVar2 = calloc(*(int *)(param_1 + 4) << 1,4);
  piVar1[3] = (int)pvVar2;
  pvVar3 = calloc(*(int *)(param_1 + 4) << 1,4);
  piVar1[4] = (int)pvVar3;
  _Memory = FUN_00435380(*(int *)(iVar4 + 8),*(int *)(iVar4 + 4));
  if (_Memory == (uint *)0x0) {
    return (int *)0x0;
  }
  piVar1[5] = *(int *)(param_1 + 4) << 1;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    local_14 = 0;
    do {
      iVar6 = *(int *)(*(int *)(iVar4 + 8) + iVar10 * 4);
      if (0 < iVar6) {
        iVar7 = 0;
        iVar9 = 0;
        if (iVar6 != 1 && -1 < iVar6 + -1) {
          do {
            if (((int)_Memory[iVar10] >> ((byte)iVar9 & 0x1f) & 1U) == 0) {
              if (*(int *)((int)pvVar2 + iVar7 * 4) == 0) {
                local_18 = local_18 + 1;
                *(int *)((int)pvVar2 + iVar7 * 4) = local_18;
              }
              iVar7 = *(int *)((int)pvVar2 + iVar7 * 4);
            }
            else {
              if (*(int *)((int)pvVar3 + iVar7 * 4) == 0) {
                local_18 = local_18 + 1;
                *(int *)((int)pvVar3 + iVar7 * 4) = local_18;
              }
              iVar7 = *(int *)((int)pvVar3 + iVar7 * 4);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(*(int *)(iVar4 + 8) + iVar10 * 4) + -1);
        }
        if (((int)_Memory[iVar10] >> ((byte)iVar9 & 0x1f) & 1U) == 0) {
          *(int *)((int)pvVar2 + iVar7 * 4) = local_14;
        }
        else {
          *(int *)((int)pvVar3 + iVar7 * 4) = local_14;
        }
      }
      iVar10 = iVar10 + 1;
      local_14 = local_14 + -1;
    } while (iVar10 < *(int *)(param_1 + 4));
  }
  free(_Memory);
  iVar4 = FUN_00435290(*(uint *)(param_1 + 4));
  piVar1[2] = iVar4 + -4;
  if (iVar4 + -4 < 5) {
    piVar1[2] = 5;
  }
  iVar4 = 1 << ((byte)piVar1[2] & 0x1f);
  pvVar5 = malloc(iVar4 * 4);
  *piVar1 = (int)pvVar5;
  pvVar5 = malloc(iVar4 * 4);
  uVar8 = 0;
  piVar1[1] = (int)pvVar5;
  if (0 < iVar4) {
    do {
      iVar10 = 0;
      iVar6 = 0;
      if (0 < piVar1[2]) {
        do {
          if ((iVar10 < 1) && (iVar6 != 0)) break;
          pvVar5 = pvVar3;
          if ((uVar8 & 1 << ((byte)iVar6 & 0x1f)) == 0) {
            pvVar5 = pvVar2;
          }
          iVar10 = *(int *)((int)pvVar5 + iVar10 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < piVar1[2]);
      }
      uVar8 = uVar8 + 1;
      *(int *)(*piVar1 + -4 + uVar8 * 4) = iVar10;
      *(int *)(piVar1[1] + -4 + uVar8 * 4) = iVar6;
    } while ((int)uVar8 < iVar4);
  }
  return piVar1;
}


