/* Module: vidcap30.exe
   Function: _SfAudio_ExtractChannel@20
   Address: 0053d590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_ExtractChannel_20(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
                    /* 0x13d590  226  _SfAudio_ExtractChannel@20 */
  uVar3 = _SfAudio_GetSampleType_4(param_4);
  uVar7 = (uint)*(ushort *)(param_4 + 0xc);
  iVar4 = (int)((ulonglong)uVar7 / (ulonglong)(longlong)(int)(uint)*(ushort *)(param_4 + 2));
  if (*(ushort *)(param_4 + 2) == 1) {
    uVar3 = _SfAudio_Copy_24(param_4,param_1,param_4,param_3,param_5,0x3f800000);
    return uVar3;
  }
  pbVar8 = (byte *)(iVar4 * param_2 + param_3);
  switch(uVar3) {
  case 0x10:
    if (0 < param_5) {
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + uVar7;
        iVar5 = (int)(short)((ushort)bVar1 << 8 ^ 0x8000);
        if (iVar5 < -0x8000) {
          iVar5 = -0x8000;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        *param_1 = (byte)((uint)iVar5 >> 8) ^ 0x80;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_5) {
      do {
        sVar2 = *(short *)pbVar8;
        pbVar8 = pbVar8 + uVar7;
        if (sVar2 < -0x8000) {
          sVar2 = -0x8000;
        }
        else if (0x7fff < sVar2) {
          sVar2 = 0x7fff;
        }
        *(short *)param_1 = sVar2;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_5) {
      param_4 = param_5;
      do {
        iVar5 = ftol();
        if (iVar5 < -0x800000) {
          iVar6 = -0x800000;
        }
        else {
          iVar6 = 0x7fffff;
          if (iVar5 < 0x800000) {
            iVar6 = iVar5;
          }
        }
        *(short *)param_1 = (short)iVar6;
        param_1[2] = (byte)((uint)iVar6 >> 0x10);
        param_4 = param_4 + -1;
        param_1 = param_1 + iVar4;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_5) {
      do {
        uVar3 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + uVar7;
        *(undefined4 *)param_1 = uVar3;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_5) {
      do {
        uVar3 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + uVar7;
        *(undefined4 *)param_1 = uVar3;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return 0;
}


