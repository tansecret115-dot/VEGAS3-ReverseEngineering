/* Module: vegas30.exe
   Function: FUN_004f9990
   Address: 004f9990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f9990(undefined4 *param_1)

{
  bool bVar1;
  SHORT SVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  
  SVar2 = GetAsyncKeyState(0x10);
  if (SVar2 < 0) {
    SVar2 = GetAsyncKeyState(0x11);
    bVar1 = true;
    if (SVar2 < 0) goto LAB_004f99bf;
  }
  bVar1 = false;
LAB_004f99bf:
  puVar11 = &DAT_0063f2b0;
  puVar10 = param_1;
  for (iVar5 = 0xe9a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[1] = 0;
  puVar9 = &DAT_00614520;
  do {
    uVar8 = puVar9[-1];
    uVar7 = puVar9[3];
    puVar11 = (undefined4 *)(uVar8 + (int)param_1);
    if (((9999 < (int)uVar7) && ((int)uVar7 < 0x2967)) && (((ushort)puVar9[1] & 0x1000) == 0)) {
      if ((char)(ushort)puVar9[1] == '\x01') {
        iVar5 = _SfDoesMetricExist_12(DAT_00647200,uVar7,1);
        if (iVar5 == 0) {
          _SfGetMetricStringEx_24(DAT_00647200,uVar7,puVar11,*puVar9,0,1);
        }
      }
      else if (*puVar9 == 4) {
        iVar5 = _SfDoesMetricExist_12(DAT_00647200,uVar7,4);
        if (iVar5 == 0) {
          uVar3 = _SfGetMetric_8(DAT_00647200,uVar7);
          *puVar11 = uVar3;
        }
      }
      else {
        iVar5 = _SfDoesMetricExist_12(DAT_00647200,uVar7,3);
        if (iVar5 == 0) {
          uVar6 = *puVar9;
          uVar7 = _SfGetMetricBinary_16(DAT_00647200,uVar7,puVar11,uVar6);
          if (uVar6 != uVar7) {
            puVar10 = (undefined4 *)((int)&DAT_0063f2b0 + uVar8);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
          }
        }
      }
    }
    puVar9 = puVar9 + 6;
  } while (puVar9 < (uint *)0x617c40);
  piVar4 = param_1 + 2;
  FUN_0057c190(0,piVar4,(int)param_1 + (0x1134 - (int)piVar4));
  if (((*piVar4 != 0) || (bVar1)) || (param_1[1] != 100)) {
    *piVar4 = 0;
    piVar4 = &DAT_0061451c;
    do {
      if ((*(ushort *)(piVar4 + 2) & 0x8000) == 0) {
        uVar8 = piVar4[1];
        puVar11 = (undefined4 *)((int)&DAT_0063f2b0 + *piVar4);
        puVar10 = (undefined4 *)(*piVar4 + (int)param_1);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 < (int *)0x617c3c);
    ppuVar12 = (undefined **)&DAT_00619c34;
    do {
      puVar13 = ppuVar12[-1];
      if (puVar13 <= *ppuVar12) {
        do {
          _SfDeleteMetric_12(DAT_00647200,puVar13,ppuVar12[1]);
          puVar13 = puVar13 + 1;
        } while (puVar13 <= *ppuVar12);
      }
      ppuVar12 = ppuVar12 + 3;
    } while (ppuVar12 < &PTR_LAB_00619c7c);
  }
  if (DAT_0064b524 != 0) {
    param_1[0x393] = DAT_0064b524;
  }
  FUN_004f0c10(param_1);
  if (param_1[0x7e] != 0) {
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  _SfSetMetric_12(DAT_00647200,0x2715,1);
  return 1;
}


