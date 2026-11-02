/* Module: mp3plug.dll
   Function: FUN_5f6a6cf0
   Address: 5f6a6cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f6a6cf0(double *param_1,uint param_2,double *param_3,ushort *param_4,uint param_5)

{
  byte bVar1;
  double dVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  double *pdVar9;
  int iVar10;
  uint uVar11;
  double *pdVar12;
  uint uVar13;
  
  cVar4 = FUN_5f6a5fd0(param_4);
  uVar13 = (uint)param_4[6];
  uVar11 = (uint)param_4[1];
  iVar6 = (int)((ulonglong)uVar13 / (ulonglong)(longlong)(int)uVar11);
  iVar7 = iVar6 * param_2;
  if (uVar11 == param_2) {
    uVar8 = FUN_5f6aea60(param_4,param_1,param_4,param_3,param_5,0x3f800000);
    return uVar8;
  }
  if ((int)uVar11 < (int)param_2) {
    if (param_4[1] == 1) {
      pdVar9 = (double *)(uVar13 * param_5 + (int)param_3);
      pdVar12 = (double *)(iVar7 * param_5 + (int)param_1);
      if ((int)param_5 < 1) {
        return 0;
      }
      param_4 = (ushort *)param_5;
      do {
        pdVar9 = (double *)((int)pdVar9 - uVar13);
        if (0 < (int)param_2) {
          param_5 = param_2;
          do {
            pdVar12 = (double *)((int)pdVar12 - iVar6);
            switch(CONCAT31(extraout_var,cVar4)) {
            case 0x10:
            case 0x31:
              *(undefined1 *)pdVar12 = *(undefined1 *)pdVar9;
              break;
            case 0x11:
            case 0x40:
              *(undefined2 *)pdVar12 = *(undefined2 *)pdVar9;
              break;
            case 0x12:
            case 0x41:
              *(undefined2 *)pdVar12 = *(undefined2 *)pdVar9;
              *(undefined1 *)((int)pdVar12 + 2) = *(undefined1 *)((int)pdVar9 + 2);
              break;
            case 0x13:
            case 0x20:
            case 0x30:
            case 0x42:
              *(undefined4 *)pdVar12 = *(undefined4 *)pdVar9;
              break;
            case 0x21:
              *(undefined4 *)pdVar12 = *(undefined4 *)pdVar9;
              *(undefined4 *)((int)pdVar12 + 4) = *(undefined4 *)((int)pdVar9 + 4);
            }
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
        param_4 = (ushort *)((int)param_4 + -1);
      } while (param_4 != (ushort *)0x0);
      return 0;
    }
  }
  else if (param_2 == 1) {
    switch(CONCAT31(extraout_var,cVar4)) {
    case 0x10:
      if (0 < (int)param_5) {
        do {
          iVar10 = 0;
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
            bVar1 = *(byte *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
            iVar10 = iVar10 + (short)((ushort)bVar1 << 8 ^ 0x8000);
          }
          iVar10 = iVar10 / (int)(uint)param_4[1];
          if (iVar10 < -0x8000) {
            iVar10 = -0x8000;
          }
          else if (0x7fff < iVar10) {
            iVar10 = 0x7fff;
          }
          *(byte *)param_1 = (byte)((uint)iVar10 >> 8) ^ 0x80;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x11:
      if (0 < (int)param_5) {
        do {
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
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
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x12:
      if (0 < (int)param_5) {
        do {
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
          }
          iVar6 = ftol();
          if (iVar6 < -0x800000) {
            iVar10 = -0x800000;
          }
          else {
            iVar10 = 0x7fffff;
            if (iVar6 < 0x800000) {
              iVar10 = iVar6;
            }
          }
          *(short *)param_1 = (short)iVar10;
          param_5 = param_5 - 1;
          *(char *)((int)param_1 + 2) = (char)((uint)iVar10 >> 0x10);
          param_1 = (double *)((int)param_1 + iVar7);
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x13:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_5f7349d0;
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
            iVar10 = *(int *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
            dVar2 = (double)iVar10 * _DAT_5f734ae8 + dVar2;
          }
          dVar2 = (dVar2 / (double)param_4[1]) * _DAT_5f734ab8;
          if (_DAT_5f734ae0 <= dVar2) {
            if (dVar2 <= _DAT_5f734ad8) {
              uVar8 = ftol();
            }
            else {
              uVar8 = 0x7fffffff;
            }
          }
          else {
            uVar8 = 0x80000000;
          }
          *(undefined4 *)param_1 = uVar8;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    default:
      goto switchD_5f6a6e3a_caseD_14;
    case 0x20:
      if (0 < (int)param_5) {
        do {
          fVar3 = (float)_DAT_5f7349d0;
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
            fVar3 = fVar3 + *(float *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
          }
          *(float *)param_1 = fVar3 / (float)param_4[1];
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x21:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_5f7349d0;
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
            dVar2 = dVar2 + *param_3;
            param_3 = (double *)((int)param_3 + iVar6);
          }
          *param_1 = dVar2 / (double)param_4[1];
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
      }
      break;
    case 0x31:
      if (0 < (int)param_5) {
        do {
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
          }
          iVar6 = ftol();
          if (iVar6 < -0x80) {
            uVar5 = 0x80;
          }
          else if (iVar6 < 0x80) {
            uVar5 = ftol();
          }
          else {
            uVar5 = 0x7f;
          }
          *(undefined1 *)param_1 = uVar5;
          param_1 = (double *)((int)param_1 + iVar7);
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
      break;
    case 0x40:
      uVar11 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar13 = (uint)param_4[1]; uVar13 != 0; uVar13 = uVar13 - 1) {
          }
          uVar13 = ftol();
          if ((int)uVar13 < -0x8000) {
            param_5 = 0xffff8000;
          }
          else {
            param_5 = 0x7fff;
            if ((int)uVar13 < 0x8000) {
              param_5 = uVar13;
            }
          }
          param_5._0_2_ = CONCAT11((undefined1)param_5,param_5._1_1_);
          *(undefined2 *)param_1 = (undefined2)param_5;
          param_1 = (double *)((int)param_1 + iVar7);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        return 0;
      }
      break;
    case 0x41:
      uVar11 = param_5;
      if (0 < (int)param_5) {
        do {
          for (uVar13 = (uint)param_4[1]; uVar13 != 0; uVar13 = uVar13 - 1) {
          }
          iVar6 = ftol();
          if (iVar6 < -0x800000) {
            iVar6 = -0x800000;
          }
          else if (0x7fffff < iVar6) {
            iVar6 = 0x7fffff;
          }
          param_5._1_1_ = (undefined1)((uint)iVar6 >> 0x10);
          *(ushort *)param_1 = CONCAT11((char)((uint)iVar6 >> 8),param_5._1_1_);
          *(char *)((int)param_1 + 2) = (char)iVar6;
          param_1 = (double *)((int)param_1 + iVar7);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        return 0;
      }
      break;
    case 0x42:
      if (0 < (int)param_5) {
        do {
          dVar2 = _DAT_5f7349d0;
          for (uVar11 = (uint)param_4[1]; uVar11 != 0; uVar11 = uVar11 - 1) {
            uVar8 = *(undefined4 *)param_3;
            param_3 = (double *)((int)param_3 + iVar6);
            dVar2 = (double)CONCAT31(CONCAT21(CONCAT11((char)uVar8,(char)((uint)uVar8 >> 8)),
                                              (char)((uint)uVar8 >> 0x10)),
                                     (char)((uint)uVar8 >> 0x18)) * _DAT_5f734ae8 + dVar2;
          }
          dVar2 = (dVar2 / (double)param_4[1]) * _DAT_5f734ab8;
          if (_DAT_5f734ae0 <= dVar2) {
            if (dVar2 <= _DAT_5f734ad8) {
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
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
    }
    return 0;
  }
switchD_5f6a6e3a_caseD_14:
  return 0x80004005;
}


