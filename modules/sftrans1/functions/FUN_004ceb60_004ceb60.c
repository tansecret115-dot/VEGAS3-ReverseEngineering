/* Module: sftrans1.dll
   Function: FUN_004ceb60
   Address: 004ceb60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ceb60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9,float param_10)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float10 extraout_ST0;
  
  bVar5 = ftol();
  param_10 = (float)extraout_ST0;
  iVar6 = FUN_004cda40(&param_5,&param_2,&param_8,&param_6,param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,4);
  if ((-1 < iVar6) && (param_4 = 0, 0 < param_2)) {
    do {
      if (param_9 == 4) {
        iVar10 = 0;
        if (0 < param_5) {
          uVar4 = (uint)bVar5;
          do {
            bVar3 = *(byte *)(param_6 + iVar10 * 4);
            pcVar1 = (char *)(param_6 + iVar10 * 4);
            pbVar2 = (byte *)(param_8 + iVar10 * 4);
            iVar7 = ((uint)*pbVar2 - (uint)bVar3) * uVar4;
            *pcVar1 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar3;
            iVar7 = ((uint)pbVar2[1] - (uint)(byte)pcVar1[1]) * uVar4;
            pcVar1[1] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + pcVar1[1];
            iVar7 = ((uint)pbVar2[2] - (uint)(byte)pcVar1[2]) * uVar4;
            pcVar1[2] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + pcVar1[2];
            iVar7 = ((uint)pbVar2[3] - (uint)(byte)pcVar1[3]) * uVar4;
            iVar10 = iVar10 + 1;
            pcVar1[3] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + pcVar1[3];
          } while (iVar10 < param_5);
        }
      }
      else {
        iVar10 = 0;
        if (0 < param_5) {
          iVar7 = 0;
          do {
            pfVar9 = (float *)(param_8 + iVar7);
            pfVar8 = (float *)(param_6 + iVar7);
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + 0x10;
            *pfVar8 = (*pfVar9 - *pfVar8) * param_10 + *pfVar8;
            pfVar8[1] = (pfVar9[1] - pfVar8[1]) * param_10 + pfVar8[1];
            pfVar8[2] = (pfVar9[2] - pfVar8[2]) * param_10 + pfVar8[2];
            pfVar8[3] = (pfVar9[3] - pfVar8[3]) * param_10 + pfVar8[3];
          } while (iVar10 < param_5);
        }
      }
      param_6 = param_6 + param_3;
      param_8 = param_8 + param_7;
      param_4 = param_4 + 1;
    } while (param_4 < param_2);
  }
  return iVar6;
}


