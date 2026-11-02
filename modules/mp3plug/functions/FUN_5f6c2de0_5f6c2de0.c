/* Module: mp3plug.dll
   Function: FUN_5f6c2de0
   Address: 5f6c2de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6c2de0(double *param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  double local_18 [2];
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((ulonglong)param_1[0x5b] & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x52);
    iVar7 = (int)(uVar4 * uVar4 + ((int)(uVar4 * uVar4) >> 0x1f & 3U)) >> 2;
    if ((uVar4 & 1) != 0) {
      iVar2 = iVar7 * 0x10;
      iVar7 = iVar7 + 1;
      FUN_5f6c3100((int)param_1,*(undefined4 *)(&DAT_5f73e598 + iVar2),
                   *(undefined4 *)(&DAT_5f73e59c + iVar2),*(undefined4 *)(&DAT_5f73e5a0 + iVar2),
                   *(undefined4 *)(&DAT_5f73e5a4 + iVar2));
    }
    if (0 < *(int *)(param_1 + 0x52) / 2) {
      puVar8 = (undefined4 *)(&DAT_5f73e598 + iVar7 * 0x10);
      do {
        FUN_5f6c3100((int)param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        puVar3 = (undefined4 *)
                 FUN_5f6c30b0((undefined4 *)local_18,*puVar8,puVar8[1],*(double *)(puVar8 + 2));
        FUN_5f6c3100((int)param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
        puVar8 = puVar8 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x52) / 2);
    }
  }
  if (((ulonglong)param_1[0x5b] & 6) != 0) {
    uVar4 = *(uint *)(param_1 + 0x52);
    iVar6 = 0;
    if (0 < (int)(uVar4 * 2)) {
      do {
        dVar1 = (double)iVar6;
        if ((uVar4 & 1) == 0) {
          dVar1 = dVar1 + _DAT_5f72c7b8;
        }
        puVar8 = (undefined4 *)FUN_5f6c1c10(local_18,(dVar1 * _DAT_5f734a88) / (double)(int)uVar4);
        FUN_5f6c3100((int)param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        uVar4 = *(uint *)(param_1 + 0x52);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uVar4 * 2));
    }
  }
  if (((ulonglong)param_1[0x5b] & 4) != 0) {
    if (_DAT_5f7349d0 <= param_1[0x5e]) {
      *(undefined4 *)(param_1 + 0x5e) = 0;
      *(undefined4 *)((int)param_1 + 0x2f4) = 0xbfe00000;
    }
    fVar9 = (float10)_CIpow();
    FUN_5f6c30e0((double)((float10)_DAT_5f72c7c8 / SQRT(fVar9 - (float10)_DAT_5f72c7c8)));
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      fVar9 = (float10)_CIsinh();
      fVar10 = (float10)_CIcosh();
      pdVar5 = param_1;
      do {
        iVar6 = iVar6 + 1;
        *pdVar5 = (double)fVar9 * *pdVar5;
        pdVar5[1] = (double)(fVar10 * (float10)pdVar5[1]);
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
  }
  return;
}


