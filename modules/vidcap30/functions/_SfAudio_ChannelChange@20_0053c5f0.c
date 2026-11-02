/* Module: vidcap30.exe
   Function: _SfAudio_ChannelChange@20
   Address: 0053c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfAudio_ChannelChange_20(double *param_1,uint param_2,double *param_3,int param_4,uint param_5)

{
  float fVar1;
  double dVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
                    /* 0x13c5f0  222  _SfAudio_ChannelChange@20 */
  uVar5 = _SfAudio_GetSampleType_4(param_4);
  uVar10 = (uint)*(ushort *)(param_4 + 0xc);
  uVar9 = (uint)*(ushort *)(param_4 + 2);
  iVar6 = (int)((ulonglong)uVar10 / (ulonglong)(longlong)(int)uVar9);
  iVar7 = iVar6 * param_2;
  if (uVar9 == param_2) {
    uVar5 = _SfAudio_Copy_24(param_4,param_1,param_4,param_3,param_5,0x3f800000);
    return uVar5;
  }
  if ((int)uVar9 < (int)param_2) {
    if (*(ushort *)(param_4 + 2) == 1) {
      param_3 = (double *)(uVar10 * param_5 + (int)param_3);
      param_1 = (double *)(iVar7 * param_5 + (int)param_1);
      if ((int)param_5 < 1) {
        return 0;
      }
      param_4 = param_5;
      do {
        param_3 = (double *)((int)param_3 - uVar10);
        if (0 < (int)param_2) {
          param_5 = param_2;
          do {
            param_1 = (double *)((int)param_1 - iVar6);
            switch(uVar5) {
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
    switch(uVar5) {
    case 0x10:
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar6 = ftol();
          if (iVar6 < -0x80) {
            bVar4 = 0;
          }
          else if (iVar6 < 0x80) {
            bVar4 = (byte)iVar6 ^ 0x80;
          }
          else {
            bVar4 = 0xff;
          }
          *(byte *)param_1 = bVar4;
          param_1 = (double *)((int)param_1 + iVar7);
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
          iVar6 = ftol();
          if (iVar6 < -0x8000) {
            iVar6 = -0x8000;
          }
          else if (0x7fff < iVar6) {
            iVar6 = 0x7fff;
          }
          *(short *)param_1 = (short)iVar6;
          param_1 = (double *)((int)param_1 + iVar7);
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
          iVar6 = ftol();
          if (iVar6 < -0x800000) {
            iVar8 = -0x800000;
          }
          else {
            iVar8 = 0x7fffff;
            if (iVar6 < 0x800000) {
              iVar8 = iVar6;
            }
          }
          *(short *)param_1 = (short)iVar8;
          param_5 = param_5 + -1;
          *(char *)((int)param_1 + 2) = (char)((uint)iVar8 >> 0x10);
          param_1 = (double *)((int)param_1 + iVar7);
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x13:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_00589f10;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar1 = *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
            dVar2 = (double)(int)fVar1 * _DAT_0059a198 + dVar2;
          }
          if (_DAT_0059a1b8 <= dVar2 * _DAT_0059a1c0) {
            if (dVar2 * _DAT_0059a1c0 <= _DAT_0059a1b0) {
              uVar5 = ftol();
            }
            else {
              uVar5 = 0x7fffffff;
            }
          }
          else {
            uVar5 = 0x80000000;
          }
          *(undefined4 *)param_1 = uVar5;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    default:
      goto switchD_0053c73a_caseD_14;
    case 0x20:
      if (0 < (int)param_5) {
        do {
          fVar1 = (float)_DAT_00589f10;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar1 = fVar1 + *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
          }
          *(float *)param_1 = fVar1;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x21:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_00589f10;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            dVar2 = dVar2 + *param_3;
            param_3 = (double *)((int)param_3 + iVar6);
          }
          *param_1 = dVar2;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      break;
    case 0x31:
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar6 = ftol();
          if (iVar6 < -0x80) {
            uVar3 = 0x80;
          }
          else if (iVar6 < 0x80) {
            uVar3 = ftol();
          }
          else {
            uVar3 = 0x7f;
          }
          *(undefined1 *)param_1 = uVar3;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x40:
      iVar6 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar8 = ftol();
          if (iVar8 < -0x8000) {
            param_5 = -0x8000;
          }
          else {
            param_5 = 0x7fff;
            if (iVar8 < 0x8000) {
              param_5 = iVar8;
            }
          }
          param_5._0_2_ = CONCAT11((undefined1)param_5,param_5._1_1_);
          *(undefined2 *)param_1 = (undefined2)param_5;
          param_1 = (double *)((int)param_1 + iVar7);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return 0;
      }
      break;
    case 0x41:
      iVar6 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
          }
          iVar8 = ftol();
          if (iVar8 < -0x800000) {
            iVar8 = -0x800000;
          }
          else if (0x7fffff < iVar8) {
            iVar8 = 0x7fffff;
          }
          param_5._1_1_ = (undefined1)((uint)iVar8 >> 0x10);
          *(ushort *)param_1 = CONCAT11((char)((uint)iVar8 >> 8),param_5._1_1_);
          *(char *)((int)param_1 + 2) = (char)iVar8;
          param_1 = (double *)((int)param_1 + iVar7);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return 0;
      }
      break;
    case 0x42:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_00589f10;
          for (uVar9 = (uint)*(ushort *)(param_4 + 2); uVar9 != 0; uVar9 = uVar9 - 1) {
            fVar1 = *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
            dVar2 = (double)CONCAT31(CONCAT21(CONCAT11(SUB41(fVar1,0),(char)((uint)fVar1 >> 8)),
                                              (char)((uint)fVar1 >> 0x10)),
                                     (char)((uint)fVar1 >> 0x18)) * _DAT_0059a198 + dVar2;
          }
          if (_DAT_0059a1b8 <= dVar2 * _DAT_0059a1c0) {
            if (dVar2 * _DAT_0059a1c0 <= _DAT_0059a1b0) {
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
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    return 0;
  }
switchD_0053c73a_caseD_14:
  return 0x80004005;
}


