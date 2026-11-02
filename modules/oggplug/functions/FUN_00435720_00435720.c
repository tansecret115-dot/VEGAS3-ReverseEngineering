/* Module: oggplug.dll
   Function: FUN_00435720
   Address: 00435720
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_00435720(int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  piVar2 = param_1;
  if ((param_1[3] != 1) && (param_1[3] != 2)) {
    return (void *)0x0;
  }
  fVar9 = FUN_00435330(param_1[4]);
  fVar10 = FUN_00435330(param_1[5]);
  pvVar3 = calloc(param_1[1] * *param_1,4);
  if (param_1[3] == 1) {
    iVar6 = FUN_004356b0(param_1);
    iVar4 = 0;
    if (0 < param_1[1]) {
      do {
        iVar5 = *piVar2;
        iVar7 = 0;
        param_1 = (int *)0x0;
        iVar8 = 1;
        if (0 < iVar5) {
          do {
            piVar1 = (int *)(ABS((float)*(int *)(piVar2[8] + ((iVar4 / iVar8) % iVar6) * 4)) *
                             (float)fVar10 + (float)param_1 + (float)fVar9);
            if (piVar2[7] != 0) {
              param_1 = piVar1;
            }
            iVar8 = iVar8 * iVar6;
            iVar5 = iVar5 * iVar4 + iVar7;
            iVar7 = iVar7 + 1;
            *(int **)((int)pvVar3 + iVar5 * 4) = piVar1;
            iVar5 = *piVar2;
          } while (iVar7 < iVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < piVar2[1]);
    }
  }
  else if ((param_1[3] == 2) && (iVar6 = 0, 0 < param_1[1])) {
    do {
      iVar4 = *piVar2;
      iVar5 = 0;
      param_1 = (int *)0x0;
      if (0 < iVar4) {
        do {
          iVar4 = (iVar4 * iVar6 + iVar5) * 4;
          piVar1 = (int *)(ABS((float)*(int *)(piVar2[8] + iVar4)) * (float)fVar10 + (float)param_1
                          + (float)fVar9);
          if (piVar2[7] != 0) {
            param_1 = piVar1;
          }
          *(int **)(iVar4 + (int)pvVar3) = piVar1;
          iVar4 = *piVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar2[1]);
    return pvVar3;
  }
  return pvVar3;
}


