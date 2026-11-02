/* Module: mpgaout.dll
   Function: FUN_10009020
   Address: 10009020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10009020(int param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = 0.0;
  iVar5 = 1;
  if (1 < *(int *)(param_1 + 0x44da4)) {
    do {
      iVar4 = iVar5 * 0x20;
      iVar5 = iVar5 + 1;
      *(undefined8 *)(param_3 + 0x18 + iVar4) = _DAT_10008f98;
      for (iVar2 = *param_4; iVar2 != -1; iVar2 = *(int *)(param_2 + 0xc + iVar2 * 0x18)) {
        dVar7 = *(double *)(param_3 + 8 + *(int *)(param_2 + 0x10 + iVar2 * 0x18) * 0x20);
        dVar6 = *(double *)(param_3 + 8 + iVar4) - dVar7;
        if (((byte)(dVar6 < _DAT_10008fa0 |
                    (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fa0)) << 10) >> 8) |
                   (byte)((ushort)((ushort)(dVar6 == _DAT_10008fa0) << 0xe) >> 8)) != 1) &&
           (0x3f < (byte)((_DAT_10008fa8 < dVar6 |
                           (byte)((ushort)((ushort)(NAN(_DAT_10008fa8) || NAN(dVar6)) << 10) >> 8) |
                          (byte)((ushort)((ushort)(_DAT_10008fa8 == dVar6) << 0xe) >> 8)) - 1))) {
          dVar1 = *(double *)(param_2 + iVar2 * 0x18);
          dVar7 = (_DAT_10008fb8 - dVar7 * _DAT_10008fb0) - _DAT_10008fc0;
          if ((byte)(dVar6 < _DAT_10008fa0 |
                     (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fa0)) << 10) >> 8) |
                    (byte)((ushort)((ushort)(dVar6 == _DAT_10008fa0) << 0xe) >> 8)) == 1) {
            if ((byte)(dVar6 < _DAT_10008fc8 |
                       (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fc8)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar6 == _DAT_10008fc8) << 0xe) >> 8)) != 1)
            goto LAB_10009155;
            if (0.0 <= dVar6) goto LAB_10009195;
            if ((byte)(dVar6 < 1.0 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar6 == 1.0) << 0xe) >> 8)) == 1) goto LAB_10009202;
LAB_100091bc:
            if (dVar6 < _DAT_10008fa8) {
              dVar3 = (1.0 - dVar6) *
                      (_DAT_10008fd0 - *(double *)(param_2 + iVar2 * 0x18) * _DAT_10008ff0) -
                      _DAT_10008fd0;
            }
          }
          else if (_DAT_10008fc8 <= dVar6) {
LAB_10009155:
            if ((byte)((0.0 < dVar6 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                       (byte)((ushort)((ushort)(dVar6 == 0.0) << 0xe) >> 8)) - 1) < 0x40) {
LAB_10009195:
              if (1.0 <= dVar6) goto LAB_100091bc;
              dVar3 = dVar6 * _DAT_10008fe8;
            }
            else {
              dVar3 = (*(double *)(param_2 + iVar2 * 0x18) * _DAT_10008fd8 + _DAT_10008fe0) * dVar6;
            }
          }
          else {
            dVar3 = (dVar6 + 1.0) * _DAT_10008fd0 - (dVar1 * _DAT_10008fd8 + _DAT_10008fe0);
          }
LAB_10009202:
          dVar6 = exp(_DAT_10008ff8 * *(double *)(param_3 + 0x18 + iVar4));
          dVar7 = exp((dVar7 + dVar1 + dVar3) * _DAT_10008ff8);
          dVar7 = log10(dVar6 + dVar7);
          *(double *)(param_3 + 0x18 + iVar4) = dVar7 * _DAT_10009000;
        }
      }
      for (iVar2 = *param_5; iVar2 != -1; iVar2 = *(int *)(param_2 + 0xc + iVar2 * 0x18)) {
        dVar7 = *(double *)(param_3 + 8 + *(int *)(param_2 + 0x10 + iVar2 * 0x18) * 0x20);
        dVar6 = *(double *)(param_3 + 8 + iVar4) - dVar7;
        if (((byte)(dVar6 < _DAT_10008fa0 |
                    (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fa0)) << 10) >> 8) |
                   (byte)((ushort)((ushort)(dVar6 == _DAT_10008fa0) << 0xe) >> 8)) != 1) &&
           (0x3f < (byte)((_DAT_10008fa8 < dVar6 |
                           (byte)((ushort)((ushort)(NAN(_DAT_10008fa8) || NAN(dVar6)) << 10) >> 8) |
                          (byte)((ushort)((ushort)(_DAT_10008fa8 == dVar6) << 0xe) >> 8)) - 1))) {
          dVar1 = *(double *)(param_2 + iVar2 * 0x18);
          dVar7 = (_DAT_10008fb8 - dVar7 * _DAT_10009008) - _DAT_10009010;
          if ((byte)(dVar6 < _DAT_10008fa0 |
                     (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fa0)) << 10) >> 8) |
                    (byte)((ushort)((ushort)(dVar6 == _DAT_10008fa0) << 0xe) >> 8)) == 1) {
            if ((byte)(dVar6 < _DAT_10008fc8 |
                       (byte)((ushort)((ushort)(NAN(dVar6) || NAN(_DAT_10008fc8)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar6 == _DAT_10008fc8) << 0xe) >> 8)) != 1)
            goto LAB_1000939d;
            if (0.0 <= dVar6) goto LAB_100093dd;
            if ((byte)(dVar6 < 1.0 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar6 == 1.0) << 0xe) >> 8)) == 1) goto LAB_10009442;
LAB_10009402:
            if (dVar6 < _DAT_10008fa8) {
              dVar3 = (1.0 - dVar6) *
                      (_DAT_10008fd0 - *(double *)(param_2 + iVar2 * 0x18) * _DAT_10008ff0) -
                      _DAT_10008fd0;
            }
          }
          else if (_DAT_10008fc8 <= dVar6) {
LAB_1000939d:
            if ((byte)((0.0 < dVar6 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                       (byte)((ushort)((ushort)(dVar6 == 0.0) << 0xe) >> 8)) - 1) < 0x40) {
LAB_100093dd:
              if (1.0 <= dVar6) goto LAB_10009402;
              dVar3 = dVar6 * _DAT_10008fe8;
            }
            else {
              dVar3 = (*(double *)(param_2 + iVar2 * 0x18) * _DAT_10008fd8 + _DAT_10008fe0) * dVar6;
            }
          }
          else {
            dVar3 = (dVar6 + 1.0) * _DAT_10008fd0 - (dVar1 * _DAT_10008fd8 + _DAT_10008fe0);
          }
LAB_10009442:
          dVar6 = exp(_DAT_10008ff8 * *(double *)(param_3 + 0x18 + iVar4));
          dVar7 = exp((dVar7 + dVar1 + dVar3) * _DAT_10008ff8);
          dVar7 = log10(dVar6 + dVar7);
          *(double *)(param_3 + 0x18 + iVar4) = dVar7 * _DAT_10009000;
        }
      }
      if (param_6 < 0x60) {
        dVar7 = *(double *)(param_3 + 0x10 + iVar4);
        dVar6 = *(double *)(param_3 + 0x18 + iVar4);
      }
      else {
        dVar7 = *(double *)(param_3 + 0x10 + iVar4) - _DAT_10009018;
        dVar6 = *(double *)(param_3 + 0x18 + iVar4);
      }
      dVar7 = exp(_DAT_10008ff8 * dVar7);
      dVar6 = exp(dVar6 * _DAT_10008ff8);
      dVar7 = log10(dVar7 + dVar6);
      *(double *)(param_3 + 0x18 + iVar4) = dVar7 * _DAT_10009000;
    } while (iVar5 < *(int *)(param_1 + 0x44da4));
  }
  return;
}


