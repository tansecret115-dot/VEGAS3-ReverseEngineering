/* Module: vidcap30.exe
   Function: _SfAudio_MonoChannel@16
   Address: 0053d790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfAudio_MonoChannel_16(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint local_10;
  float *local_8;
  
                    /* 0x13d790  238  _SfAudio_MonoChannel@16 */
  pfVar11 = param_1;
  uVar2 = _SfAudio_GetSampleType_4(param_3);
  uVar8 = (uint)*(ushort *)(param_3 + 2);
  iVar3 = (int)((ulonglong)*(ushort *)(param_3 + 0xc) / (ulonglong)(longlong)(int)uVar8);
  local_8 = param_2;
  iVar4 = (int)(uVar8 * iVar3) / (int)uVar8;
  if (*(ushort *)(param_3 + 2) == 1) {
    uVar2 = _SfAudio_Copy_24(param_3,param_1,param_3,param_2,param_4,0x3f800000);
    return uVar2;
  }
  switch(uVar2) {
  case 0x10:
    if (0 < param_4) {
      do {
        iVar6 = 0;
        for (uVar5 = uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
          iVar6 = iVar6 + (uint)*(byte *)local_8;
          local_8 = (float *)((int)local_8 + iVar3);
        }
        iVar6 = iVar6 / (int)uVar8;
        iVar9 = 0;
        if (uVar8 != 0) {
          do {
            *(char *)param_1 = (char)iVar6;
            param_1 = (float *)((int)param_1 + iVar4);
            uVar8 = (uint)*(ushort *)(param_3 + 2);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar8);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_4) {
      do {
        iVar6 = 0;
        for (uVar5 = uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
          iVar6 = iVar6 + *(short *)param_2;
          param_2 = (float *)((int)param_2 + iVar3);
        }
        iVar6 = iVar6 / (int)uVar8;
        iVar9 = 0;
        if (uVar8 != 0) {
          do {
            *(short *)param_1 = (short)iVar6;
            param_1 = (float *)((int)param_1 + iVar4);
            uVar8 = (uint)*(ushort *)(param_3 + 2);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar8);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_4) {
      param_1 = (float *)param_4;
      uVar5 = uVar8;
      do {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        }
        iVar3 = 0;
        if (uVar8 != 0) {
          iVar6 = ftol();
          pfVar10 = pfVar11;
          do {
            if (iVar6 < -0x800000) {
              iVar9 = -0x800000;
            }
            else {
              iVar9 = 0x7fffff;
              if (iVar6 < 0x800000) {
                iVar9 = iVar6;
              }
            }
            *(short *)pfVar10 = (short)iVar9;
            pfVar11 = (float *)((int)pfVar10 + iVar4);
            iVar3 = iVar3 + 1;
            *(char *)((int)pfVar10 + 2) = (char)((uint)iVar9 >> 0x10);
            uVar8 = (uint)*(ushort *)(param_3 + 2);
            pfVar10 = pfVar11;
          } while (iVar3 < (int)uVar8);
        }
        param_1 = (float *)((int)param_1 + -1);
        uVar5 = uVar8;
      } while (param_1 != (float *)0x0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_4) {
      do {
        iVar6 = 0;
        for (uVar5 = uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
          iVar6 = iVar6 + (int)*param_2;
          param_2 = (float *)((int)param_2 + iVar3);
        }
        fVar7 = (float)(iVar6 / (int)uVar8);
        iVar6 = 0;
        if (uVar8 != 0) {
          do {
            *param_1 = fVar7;
            param_1 = (float *)((int)param_1 + iVar4);
            uVar8 = (uint)*(ushort *)(param_3 + 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar8);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    local_10 = uVar8;
    if (0 < param_4) {
      do {
        fVar7 = (float)_DAT_00589f10;
        for (uVar5 = uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
          fVar7 = fVar7 + *param_2;
          param_2 = (float *)((int)param_2 + iVar3);
        }
        fVar1 = (float)local_10;
        iVar6 = 0;
        if (uVar8 != 0) {
          do {
            *param_1 = fVar7 / fVar1;
            param_1 = (float *)((int)param_1 + iVar4);
            uVar8 = (uint)*(ushort *)(param_3 + 2);
            iVar6 = iVar6 + 1;
            local_10 = uVar8;
          } while (iVar6 < (int)uVar8);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
  }
  return 0;
}


