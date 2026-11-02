/* Module: vegas30k.dll
   Function: FUN_010f7530
   Address: 010f7530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f7530(double *param_1)

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
  undefined1 local_18 [20];
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((ulonglong)param_1[0x5b] & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x52);
    iVar7 = (int)(uVar4 * uVar4 + ((int)(uVar4 * uVar4) >> 0x1f & 3U)) >> 2;
    if ((uVar4 & 1) != 0) {
      iVar2 = iVar7 * 0x10;
      iVar7 = iVar7 + 1;
      FUN_010f7850(param_1,*(undefined4 *)(&DAT_012066b8 + iVar2),
                   *(undefined4 *)(&DAT_012066bc + iVar2),*(undefined4 *)(&DAT_012066c0 + iVar2),
                   *(undefined4 *)(&DAT_012066c4 + iVar2));
    }
    if (0 < *(int *)(param_1 + 0x52) / 2) {
      puVar8 = (undefined4 *)(&DAT_012066b8 + iVar7 * 0x10);
      do {
        FUN_010f7850(param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        puVar3 = (undefined4 *)FUN_010f7800(local_18,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        FUN_010f7850(param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3]);
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
          dVar1 = dVar1 + _DAT_011db6e8;
        }
        puVar8 = (undefined4 *)FUN_010f6360(local_18,(dVar1 * _DAT_011dbdb8) / (double)(int)uVar4);
        FUN_010f7850(param_1,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        uVar4 = *(uint *)(param_1 + 0x52);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uVar4 * 2));
    }
  }
  if (((ulonglong)param_1[0x5b] & 4) != 0) {
    if (_DAT_011db3f0 <= param_1[0x5e]) {
      *(undefined4 *)(param_1 + 0x5e) = 0;
      *(undefined4 *)((int)param_1 + 0x2f4) = 0xbfe00000;
    }
    fVar9 = (float10)_CIpow();
    FUN_010f7830((double)((float10)_DAT_011dad58 / SQRT(fVar9 - (float10)_DAT_011dad58)));
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


