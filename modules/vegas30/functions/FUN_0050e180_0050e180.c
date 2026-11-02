/* Module: vegas30.exe
   Function: FUN_0050e180
   Address: 0050e180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_88;
  float local_80;
  int local_74;
  double dStack_70;
  undefined1 local_64 [64];
  float local_24;
  float local_20;
  double local_14;
  
  piVar4 = (int *)FUN_00522a00(param_5);
  if ((piVar4 != (int *)0x0) && (0 < *piVar4)) {
    local_74 = 0;
    iVar5 = FUN_0050c410(piVar4,&local_74,param_3,param_4);
    if ((-1 < iVar5) && (local_74 != 0)) {
      if (param_5 != 1) {
        if (param_5 == 2) {
          FUN_0050db20(local_64,param_2,param_3,param_4,0,DAT_00647e50,0,0,0,0);
          iVar5 = local_74;
          *(float *)(local_74 + 0x28) =
               (float)((float10)*(double *)(param_1 + 0x14) - (float10)local_14);
          FUN_005a6120(local_64,local_64,-local_14,0);
          FUN_005a6120(param_1,param_1,-*(double *)(param_1 + 0x14),0);
          fVar7 = (float10)_CIpow();
          dStack_70 = (double)fVar7;
          FUN_005a5f80(local_64);
          lVar2 = ftol();
          dVar3 = dStack_70;
          local_88 = (float)((float10)lVar2 / (float10)(double)fVar7);
          FUN_005a5ff0(local_64);
          dStack_70 = (double)ftol();
          local_80 = (float)((float10)(longlong)dStack_70 / (float10)dVar3);
          fVar1 = local_80;
          if (local_80 < local_88) {
            fVar1 = local_88;
          }
          if (_DAT_00610f20 == fVar1) {
            fVar1 = _DAT_00619ab0;
          }
          if (_DAT_00610f20 == local_88) {
            local_88 = 1.0;
          }
          if (_DAT_00610f20 == local_80) {
            local_80 = 1.0;
          }
          *(float *)(iVar5 + 0x18) = ((float)param_1[0x10] - local_24) / fVar1;
          *(float *)(iVar5 + 0x1c) = ((float)param_1[0x11] - local_20) / fVar1;
          fVar7 = (float10)FUN_005a5f80(param_1);
          *(float *)(iVar5 + 0x20) =
               (float)(fVar7 / (float10)local_88 - (float10)*(float *)(iVar5 + 0x3c));
          fVar7 = (float10)FUN_005a5ff0(param_1);
          *(float *)(iVar5 + 0x24) =
               (float)(fVar7 / (float10)local_80 - (float10)*(float *)(iVar5 + 0x3c));
          return;
        }
        puVar6 = (undefined4 *)(local_74 + 0x18);
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *param_1;
          param_1 = param_1 + 1;
          puVar6 = puVar6 + 1;
        }
        return;
      }
      FUN_0050db20(local_64,param_2,param_3,param_4,0,DAT_00647e50,0,0,0,0);
      iVar5 = local_74;
      *(float *)(local_74 + 0x5c) =
           (float)((float10)*(double *)(param_1 + 0x14) - (float10)local_14);
      FUN_005a6120(local_64,local_64,-local_14,0);
      FUN_005a6120(param_1,param_1,-*(double *)(param_1 + 0x14),0);
      fVar7 = (float10)FUN_005a5f80(local_64);
      local_80 = (float)fVar7;
      fVar7 = (float10)FUN_005a5ff0(local_64);
      local_88 = (float)fVar7;
      fVar1 = local_88;
      if (local_88 < local_80) {
        fVar1 = local_80;
      }
      if (_DAT_00610f20 == fVar1) {
        fVar1 = _DAT_00619ab0;
      }
      if (_DAT_00610f20 == local_80) {
        local_80 = 1.0;
      }
      if (_DAT_00610f20 == local_88) {
        local_88 = 1.0;
      }
      *(float *)(iVar5 + 0x4c) = ((float)param_1[0x10] - local_24) / fVar1;
      *(float *)(iVar5 + 0x50) = ((float)param_1[0x11] - local_20) / fVar1;
      fVar7 = (float10)FUN_005a5f80(param_1);
      *(float *)(iVar5 + 0x54) =
           (float)(fVar7 / (float10)local_80 - (float10)*(float *)(iVar5 + 0x70));
      fVar7 = (float10)FUN_005a5ff0(param_1);
      *(float *)(iVar5 + 0x58) =
           (float)(fVar7 / (float10)local_88 - (float10)*(float *)(iVar5 + 0x70));
    }
  }
  return;
}


