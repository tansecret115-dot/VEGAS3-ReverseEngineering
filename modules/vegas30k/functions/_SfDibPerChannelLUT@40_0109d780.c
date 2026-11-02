/* Module: vegas30k.dll
   Function: _SfDibPerChannelLUT@40
   Address: 0109d780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibPerChannelLUT_40
              (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
              uint param_8,int param_9,int param_10)

{
  byte *pbVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
                    /* 0x9d780  869  _SfDibPerChannelLUT@40 */
  iVar4 = _SfDibPrepareSet_32(&param_4,&local_4,&param_2,param_1,param_2,param_3,param_4,param_5);
  uVar3 = param_8;
  if (-1 < iVar4) {
    param_1 = 0;
    if (0 < local_4) {
      do {
        if (param_5 == 4) {
          iVar4 = 0;
          if (0 < param_4) {
            do {
              pbVar1 = (byte *)(param_2 + iVar4 * 4);
              if (uVar3 != 0) {
                *pbVar1 = *(byte *)(*pbVar1 + uVar3);
              }
              if (param_7 != 0) {
                pbVar1[1] = *(byte *)((uint)pbVar1[1] + param_7);
              }
              if (param_6 != 0) {
                pbVar1[2] = *(byte *)((uint)pbVar1[2] + param_6);
              }
              if (param_9 != 0) {
                pbVar1[3] = *(byte *)((uint)pbVar1[3] + param_9);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_4);
          }
        }
        else if (param_10 == 0) {
          iVar4 = 0;
          if (0 < param_4) {
            iVar6 = 0;
            do {
              pfVar2 = (float *)(iVar6 + param_2);
              if (uVar3 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(ushort *)(uVar3 + iVar5 * -2);
                *pfVar2 = (float)param_8 * _DAT_011e2968;
              }
              if (param_7 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(ushort *)(param_7 + iVar5 * -2);
                pfVar2[1] = (float)param_8 * _DAT_011e2968;
              }
              if (param_6 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(ushort *)(param_6 + iVar5 * -2);
                pfVar2[2] = (float)param_8 * _DAT_011e2968;
              }
              if (param_9 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(ushort *)(param_9 + iVar5 * -2);
                pfVar2[3] = (float)param_8 * _DAT_011e2968;
              }
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + 0x10;
            } while (iVar4 < param_4);
          }
        }
        else {
          iVar4 = 0;
          if (0 < param_4) {
            iVar6 = 0;
            do {
              pfVar2 = (float *)(iVar6 + param_2);
              if (uVar3 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(byte *)(uVar3 - iVar5);
                *pfVar2 = (float)param_8 * _DAT_011e2970;
              }
              if (param_7 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(byte *)(param_7 - iVar5);
                pfVar2[1] = (float)param_8 * _DAT_011e2970;
              }
              if (param_6 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(byte *)(param_6 - iVar5);
                pfVar2[2] = (float)param_8 * _DAT_011e2970;
              }
              if (param_9 != 0) {
                iVar5 = ftol();
                param_8 = (uint)*(byte *)(param_9 - iVar5);
                pfVar2[3] = (float)param_8 * _DAT_011e2970;
              }
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + 0x10;
            } while (iVar4 < param_4);
          }
        }
        param_2 = param_2 + param_3;
        param_1 = param_1 + 1;
      } while (param_1 < local_4);
    }
    iVar4 = 0;
  }
  return iVar4;
}


