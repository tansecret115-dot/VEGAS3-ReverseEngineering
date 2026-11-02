/* Module: vegas30k.dll
   Function: _SfAudio_ResampleReset@24
   Address: 0102eee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfAudio_ResampleReset_24(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_e0 [16];
  int local_a0 [16];
  undefined4 local_60 [24];
  
                    /* 0x2eee0  768  _SfAudio_ResampleReset@24 */
  piVar4 = param_1 + 0x4c;
  piVar7 = local_e0;
  for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  if (param_2 != 0) {
    *param_1 = param_2;
  }
  if ((0 < param_5) && (param_1[1] != param_5)) {
    if (param_1[0x758] == 3) {
      iVar5 = 0;
      if (0 < param_1[1]) {
        do {
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1[0x75a] + iVar5 * 4));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(param_1[0x75a] + iVar5 * 4));
          GlobalFree(pvVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[1]);
      }
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x75a]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x75a]);
      GlobalFree(pvVar2);
      pvVar2 = GlobalAlloc(0x40,param_5 * 4);
      pvVar3 = GlobalLock(pvVar2);
      param_1[0x75a] = (int)pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        _SfAudio_ResampleClose_4(param_1);
        return 0x8007000e;
      }
      iVar5 = 0;
      if (0 < param_5) {
        do {
          pvVar2 = GlobalAlloc(0x40,200);
          pvVar3 = GlobalLock(pvVar2);
          *(LPVOID *)(param_1[0x75a] + iVar5 * 4) = pvVar3;
          if (pvVar3 == (LPVOID)0x0) {
            param_1[1] = param_5;
            _SfAudio_ResampleClose_4(param_1);
            return 0x8007000e;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_5);
      }
    }
    param_6 = 1;
    param_1[1] = param_5;
  }
  if (0 < param_3) {
    param_1[2] = param_3;
  }
  if (param_4 < 1) {
    if (0 >= param_3) goto LAB_0102f0cd;
  }
  else {
    param_1[3] = param_4;
  }
  dVar1 = (double)param_1[3] / (double)param_1[2];
  *(double *)(param_1 + 6) = dVar1;
  *(double *)(param_1 + 10) = _DAT_011dad58 / dVar1;
  if ((*param_1 == 0x20) || (*param_1 == 0x21)) {
    FUN_0102ead0(param_1[0x757],dVar1,local_e0);
  }
  param_1[0x74e] = 0;
  param_1[0x750] = 0;
  param_1[0x74f] = 0;
  param_1[0x751] = 0;
LAB_0102f0cd:
  iVar5 = 0;
  if (param_6 == 0) {
    if (0 < param_1[1]) {
      piVar4 = param_1 + 0x5c;
      do {
        iVar5 = iVar5 + 1;
        piVar7 = local_e0;
        piVar9 = piVar4 + -0x10;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        piVar7 = local_a0;
        piVar9 = piVar4;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        piVar4 = piVar4 + 0x38;
      } while (iVar5 < param_1[1]);
    }
    return 0;
  }
  iVar6 = 0;
  puVar8 = local_60;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (0 < param_1[1]) {
    piVar4 = param_1 + 0x4c;
    do {
      piVar7 = local_e0;
      piVar9 = piVar4;
      for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      if (param_1[0x75a] != 0) {
        puVar8 = (undefined4 *)(param_1[0x75a] + iVar6 * 4);
        for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 0x38;
    } while (iVar6 < param_1[1]);
  }
  param_1[0x75b] = 1;
  piVar4 = param_1 + 0xc;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  param_1[8] = 0;
  param_1[0x74e] = 0;
  param_1[0x750] = 0;
  param_1[0x752] = 0;
  param_1[0x754] = 0;
  param_1[9] = 0;
  param_1[0x74f] = 0;
  param_1[0x751] = 0;
  param_1[0x753] = 0;
  param_1[0x755] = 0;
  return 0;
}


