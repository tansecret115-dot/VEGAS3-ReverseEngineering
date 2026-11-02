/* Module: vegas30k.dll
   Function: _SfAudio_ChannelChangeAvg@20
   Address: 010b8350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfAudio_ChannelChangeAvg_20(double *param_1,uint param_2,double *param_3,int param_4,uint param_5)

{
  byte bVar1;
  double dVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  
                    /* 0xb8350  728  _SfAudio_ChannelChangeAvg@20 */
  uVar4 = _SfAudio_GetSampleType_4(param_4);
  uVar10 = (uint)*(ushort *)(param_4 + 0xc);
  uVar9 = (uint)*(ushort *)(param_4 + 2);
  iVar5 = (int)((ulonglong)uVar10 / (ulonglong)(longlong)(int)uVar9);
  iVar6 = iVar5 * param_2;
  if (uVar9 == param_2) {
    uVar4 = _SfAudio_Copy_24(param_4,param_1,param_4,param_3,param_5,0x3f800000);
    return uVar4;
  }
  if ((int)uVar9 < (int)param_2) {
    if (*(ushort *)(param_4 + 2) == 1) {
      param_3 = (double *)(uVar10 * param_5 + (int)param_3);
      param_1 = (double *)(iVar6 * param_5 + (int)param_1);
      if ((int)param_5 < 1) {
        return 0;
      }
      param_4 = param_5;
      do {
        param_3 = (double *)((int)param_3 - uVar10);
        if (0 < (int)param_2) {
          param_5 = param_2;
          do {
            param_1 = (double *)((int)param_1 - iVar5);
            switch(uVar4) {
            case 0x10:
            case 0x31:
              *(undefined1 *)param_1 = *(undefined1 *)param_3;
              break;
            case 0x11:
            case 0x40:
              *(undefined2 *)param_1 = *(undefined2 *)param_3;
              break;
            case 0x12:
            case 0x41:
              *(undefined2 *)param_1 = *(undefined2 *)param_3;
              *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_3 + 2);
              break;
            case 0x13:
            case 0x20:
            case 0x30:
            case 0x42:
              *(float *)param_1 = *(float *)param_3;
              break;
            case 0x21:
              *(float *)param_1 = *(float *)param_3;
              *(float *)((int)param_1 + 4) = *(float *)((int)param_3 + 4);
            }
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
  }
  else if (param_2 == 1) {
    switch(uVar4) {
    case 0x10:
      if (0 < (int)param_5) {
        do {
          iVar7 = 0;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            bVar1 = *(byte *)param_3;
            param_3 = (double *)((int)param_3 + iVar5);
            iVar7 = iVar7 + (short)((ushort)bVar1 << 8 ^ 0x8000);
          }
          iVar7 = iVar7 / (int)(uint)*(ushort *)(param_4 + 2);
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *(byte *)param_1 = (byte)((uint)iVar7 >> 8) ^ 0x80;
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x11:
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar5 = ftol();
          if (iVar5 < -0x8000) {
            iVar5 = -0x8000;
          }
          else if (0x7fff < iVar5) {
            iVar5 = 0x7fff;
          }
          *(short *)param_1 = (short)iVar5;
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x12:
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar5 = ftol();
          if (iVar5 < -0x800000) {
            iVar7 = -0x800000;
          }
          else {
            iVar7 = 0x7fffff;
            if (iVar5 < 0x800000) {
              iVar7 = iVar5;
            }
          }
          *(short *)param_1 = (short)iVar7;
          param_5 = param_5 + -1;
          *(char *)((int)param_1 + 2) = (char)((uint)iVar7 >> 0x10);
          param_1 = (double *)((int)param_1 + iVar6);
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x13:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_011db3f0;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar8 = *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar5);
            dVar2 = (double)(int)fVar8 * _DAT_011db2c8 + dVar2;
          }
          dVar2 = (dVar2 / (double)*(ushort *)(param_4 + 2)) * _DAT_011db2a8;
          if (_DAT_011db2a0 <= dVar2) {
            if (dVar2 <= _DAT_011db298) {
              fVar8 = (float)ftol();
            }
            else {
              fVar8 = NAN;
            }
          }
          else {
            fVar8 = -0.0;
          }
          *(float *)param_1 = fVar8;
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    default:
      goto switchD_010b849a_caseD_14;
    case 0x20:
      if (0 < (int)param_5) {
        do {
          fVar8 = (float)_DAT_011db3f0;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar8 = fVar8 + *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar5);
          }
          *(float *)param_1 = fVar8 / (float)*(ushort *)(param_4 + 2);
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x21:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_011db3f0;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            dVar2 = dVar2 + *param_3;
            param_3 = (double *)((int)param_3 + iVar5);
          }
          *param_1 = dVar2 / (double)*(ushort *)(param_4 + 2);
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      break;
    case 0x31:
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar5 = ftol();
          if (iVar5 < -0x80) {
            uVar3 = 0x80;
          }
          else if (iVar5 < 0x80) {
            uVar3 = ftol();
          }
          else {
            uVar3 = 0x7f;
          }
          *(undefined1 *)param_1 = uVar3;
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x40:
      iVar5 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            param_5 = -0x8000;
          }
          else {
            param_5 = 0x7fff;
            if (iVar7 < 0x8000) {
              param_5 = iVar7;
            }
          }
          param_5._0_2_ = CONCAT11((undefined1)param_5,param_5._1_1_);
          *(undefined2 *)param_1 = (undefined2)param_5;
          param_1 = (double *)((int)param_1 + iVar6);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return 0;
      }
      break;
    case 0x41:
      iVar5 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar7 = ftol();
          if (iVar7 < -0x800000) {
            iVar7 = -0x800000;
          }
          else if (0x7fffff < iVar7) {
            iVar7 = 0x7fffff;
          }
          param_5._1_1_ = (undefined1)((uint)iVar7 >> 0x10);
          *(ushort *)param_1 = CONCAT11((char)((uint)iVar7 >> 8),param_5._1_1_);
          *(char *)((int)param_1 + 2) = (char)iVar7;
          param_1 = (double *)((int)param_1 + iVar6);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return 0;
      }
      break;
    case 0x42:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_011db3f0;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar8 = *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar5);
            dVar2 = (double)CONCAT31(CONCAT21(CONCAT11(SUB41(fVar8,0),(char)((uint)fVar8 >> 8)),
                                              (char)((uint)fVar8 >> 0x10)),
                                     (char)((uint)fVar8 >> 0x18)) * _DAT_011db2c8 + dVar2;
          }
          dVar2 = (dVar2 / (double)*(ushort *)(param_4 + 2)) * _DAT_011db2a8;
          if (_DAT_011db2a0 <= dVar2) {
            if (dVar2 <= _DAT_011db298) {
              param_2 = ftol();
            }
            else {
              param_2 = 0x7fffffff;
            }
          }
          else {
            param_2 = 0x80000000;
          }
          *(uint *)param_1 =
               CONCAT31(CONCAT21(CONCAT11((char)param_2,(char)(param_2 >> 8)),
                                 (char)(param_2 >> 0x10)),(char)(param_2 >> 0x18));
          param_1 = (double *)((int)param_1 + iVar6);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    return 0;
  }
switchD_010b849a_caseD_14:
  return 0x80004005;
}


