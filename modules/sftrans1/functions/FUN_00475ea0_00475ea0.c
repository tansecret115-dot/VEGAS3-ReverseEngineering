/* Module: sftrans1.dll
   Function: FUN_00475ea0
   Address: 00475ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00475ea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;
  int local_2c;
  undefined **local_28;
  int iStack_20;
  undefined8 local_18;
  double local_10;
  
  local_2c = **(int **)(param_1 + 0x5e0);
  local_28 = (undefined **)0x0;
  if (0 < local_2c) {
    do {
      _Memory = *(void **)(*(int *)(*(int *)(param_1 + 0x5e0) + 8) + (int)local_28 * 4);
      if (_Memory != (void *)0x0) {
        fVar7 = (float10)FUN_00474340(*(undefined4 *)(param_1 + 0x5dc));
        local_18 = (double)(fVar7 * (float10)_DAT_005624e0 *
                           (float10)(double)CONCAT44(param_3,param_2));
        fVar7 = (float10)FUN_00474340(*(undefined4 *)(param_1 + 0x5dc));
        local_10 = (double)(fVar7 * (float10)_DAT_005624e0 *
                           (float10)(double)CONCAT44(param_3,param_2));
        FUN_00474440(_Memory,(int *)local_18,local_18._4_4_,local_10,0,0,0);
        iVar1 = FUN_004743a0(_Memory,param_2,param_3,*(undefined4 *)(param_1 + 0x5dc));
        if (iVar1 != 0) {
          (*(code *)(&PTR_FUN_00574508)[*(int *)((int)_Memory + 0x60)])
                    (iVar1,*(undefined4 *)(param_1 + 0x5dc));
          local_18 = (double)CONCAT44(local_18._4_4_,iVar1);
          FUN_004dc110(*(undefined4 *)(param_1 + 0x5e0),local_2c,&local_18,1);
        }
        if (*(double *)((int)_Memory + 0x30) <= _DAT_00555910) {
          free(_Memory);
          FUN_004dc400(*(undefined4 *)(param_1 + 0x5e0),local_28,1,1);
          local_28 = (undefined **)((int)local_28 + -1);
          local_2c = local_2c + -1;
        }
      }
      local_28 = (undefined **)((int)local_28 + 1);
    } while ((int)local_28 < local_2c);
  }
  pdVar4 = (double *)(param_1 + 0x5e8);
  piVar6 = (int *)(param_1 + 0x2c0);
  local_28 = &PTR_FUN_00574508;
  local_18 = (double)CONCAT44(local_18._4_4_,piVar6);
  do {
    if (*piVar6 != 0) {
      *pdVar4 = (double)CONCAT44(param_3,param_2) + *pdVar4;
    }
    fVar7 = (float10)FUN_00474340(*(undefined4 *)(param_1 + 0x5dc));
    fVar7 = (fVar7 + (float10)_DAT_00555908) * (float10)*(double *)(piVar6 + -2) *
            (float10)_DAT_00557838;
    if (((*piVar6 != 0) && ((float10)_DAT_00555910 < fVar7)) &&
       ((float10)_DAT_00555908 / fVar7 < (float10)*pdVar4)) {
      if (((local_28 == &PTR_FUN_0057450c) || (local_28 == &PTR_FUN_00574518)) ||
         (local_28 == &PTR_FUN_00574508)) {
        FUN_00474340(*(undefined4 *)(param_1 + 0x5dc));
      }
      else {
        FUN_00474340(*(undefined4 *)(param_1 + 0x5dc));
      }
      iVar1 = ftol();
      iStack_20 = 0;
      if (0 < iVar1) {
        do {
          puVar2 = calloc(1,0x68);
          if (puVar2 == (undefined4 *)0x0) {
            return 0x8007000e;
          }
          puVar5 = puVar2;
          for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          (*(code *)*local_28)(puVar2,*(undefined4 *)(param_1 + 0x5dc));
          local_10 = (double)CONCAT44(local_10._4_4_,puVar2);
          FUN_004dc110(*(undefined4 *)(param_1 + 0x5e0),iStack_20 + local_2c,&local_10,1);
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < iVar1);
        piVar6 = (int *)local_18;
      }
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
    }
    pdVar4 = pdVar4 + 1;
    local_28 = local_28 + 1;
    piVar6 = piVar6 + 8;
    local_18 = (double)CONCAT44(local_18._4_4_,piVar6);
  } while ((int)local_28 < 0x574524);
  return 0;
}


