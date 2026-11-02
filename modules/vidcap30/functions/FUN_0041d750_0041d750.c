/* Module: vidcap30.exe
   Function: FUN_0041d750
   Address: 0041d750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d750(undefined4 *param_1)

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
  
  SVar2 = GetAsyncKeyState(0x10);
  if (SVar2 < 0) {
    SVar2 = GetAsyncKeyState(0x11);
    bVar1 = true;
    if (SVar2 < 0) goto LAB_0041d77f;
  }
  bVar1 = false;
LAB_0041d77f:
  puVar11 = &DAT_005b2b00;
  puVar10 = param_1;
  for (iVar5 = 0x4b6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[1] = 0;
  puVar9 = &DAT_00587b00;
  do {
    uVar8 = puVar9[-1];
    uVar7 = puVar9[3];
    puVar11 = (undefined4 *)(uVar8 + (int)param_1);
    if ((9999 < (int)uVar7) && ((int)uVar7 < 0x27db)) {
      if ((char)puVar9[1] == '\x01') {
        iVar5 = _SfDoesMetricExist_12(DAT_005ba29c,uVar7,1);
        if (iVar5 == 0) {
          _SfGetMetricStringEx_24(DAT_005ba29c,uVar7,puVar11,*puVar9,0,1);
        }
      }
      else if (*puVar9 == 4) {
        iVar5 = _SfDoesMetricExist_12(DAT_005ba29c,uVar7,4);
        if (iVar5 == 0) {
          uVar3 = _SfGetMetric_8(DAT_005ba29c,uVar7);
          *puVar11 = uVar3;
        }
      }
      else {
        iVar5 = _SfDoesMetricExist_12(DAT_005ba29c,uVar7,3);
        if (iVar5 == 0) {
          uVar6 = *puVar9;
          uVar7 = _SfGetMetricBinary_16(DAT_005ba29c,uVar7,puVar11,uVar6);
          if (uVar6 != uVar7) {
            puVar10 = (undefined4 *)((int)&DAT_005b2b00 + uVar8);
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
  } while (puVar9 <= &UNK_00588c3f);
  FUN_0041d940(0,param_1 + 2,(int)param_1 + (8 - (int)(param_1 + 2)));
  if (((param_1[3] != 0) || (bVar1)) || (param_1[1] != 0x68)) {
    param_1[3] = 0;
    piVar4 = &DAT_00587afc;
    do {
      if ((*(ushort *)(piVar4 + 2) & 0x8000) == 0) {
        uVar8 = piVar4[1];
        puVar11 = (undefined4 *)((int)&DAT_005b2b00 + *piVar4);
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
    } while (piVar4 < &DAT_00588c3c);
    puVar9 = &DAT_00589fac;
    do {
      uVar8 = puVar9[-1];
      if (uVar8 <= *puVar9) {
        do {
          _SfDeleteMetric_12(DAT_005ba29c,uVar8,puVar9[1]);
          uVar8 = uVar8 + 1;
        } while (uVar8 <= *puVar9);
      }
      puVar9 = puVar9 + 3;
    } while (puVar9 < (uint *)0x58a018);
  }
  FUN_00418370(0xffffffff,param_1);
  _SfSetMetric_12(DAT_005ba29c,0x2721,1);
  return 1;
}


