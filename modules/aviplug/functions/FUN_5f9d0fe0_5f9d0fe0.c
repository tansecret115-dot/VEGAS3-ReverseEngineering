/* Module: aviplug.dll
   Function: FUN_5f9d0fe0
   Address: 5f9d0fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9d0fe0(double *param_1)

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
      FUN_5f9d1300((int)param_1,*(undefined4 *)(&DAT_5f9f3f08 + iVar2),
                   *(undefined4 *)(&DAT_5f9f3f0c + iVar2),*(undefined4 *)(&DAT_5f9f3f10 + iVar2),
                   *(undefined4 *)(&DAT_5f9f3f14 + iVar2));
    }
    if (0 < *(int *)(param_1 + 0x52) / 2) {
      puVar8 = (undefined4 *)(&DAT_5f9f3f08 + iVar7 * 0x10);
      do {
        FUN_5f9d1300((int)param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        puVar3 = (undefined4 *)
                 FUN_5f9d12b0((undefined4 *)local_18,*puVar8,puVar8[1],*(double *)(puVar8 + 2));
        FUN_5f9d1300((int)param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
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
          dVar1 = dVar1 + _DAT_5f9d7ca0;
        }
        puVar8 = (undefined4 *)FUN_5f9cfe10(local_18,(dVar1 * _DAT_5f9ec338) / (double)(int)uVar4);
        FUN_5f9d1300((int)param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        uVar4 = *(uint *)(param_1 + 0x52);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uVar4 * 2));
    }
  }
  if (((ulonglong)param_1[0x5b] & 4) != 0) {
    if (_DAT_5f9d78f0 <= param_1[0x5e]) {
      *(undefined4 *)(param_1 + 0x5e) = 0;
      *(undefined4 *)((int)param_1 + 0x2f4) = 0xbfe00000;
    }
    fVar9 = (float10)_CIpow();
    FUN_5f9d12e0((double)((float10)_DAT_5f9d7c98 / SQRT(fVar9 - (float10)_DAT_5f9d7c98)));
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


