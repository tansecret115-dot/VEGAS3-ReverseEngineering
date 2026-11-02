/* Module: vegas30k.dll
   Function: _SfDibRelativeAlphaValueBlend@44
   Address: 0109ca20
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibRelativeAlphaValueBlend_44
              (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
              int param_8,int param_9,int param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
                    /* 0x9ca20  879  _SfDibRelativeAlphaValueBlend@44 */
  bVar4 = ftol();
  iVar8 = _SfDibPrepareCopy_52
                    (&param_4,&param_10,&param_8,&param_6,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,4);
  if ((-1 < iVar8) && (param_1 = 0, iVar9 = param_4, 0 < param_10)) {
    do {
      if (param_9 == 4) {
        iVar12 = 0;
        if (0 < iVar9) {
          do {
            uVar11 = (uint)*(byte *)(param_8 + 3 + iVar12 * 4);
            pbVar1 = (byte *)(param_8 + iVar12 * 4);
            pbVar2 = (byte *)(param_6 + iVar12 * 4);
            uVar10 = bVar4 * uVar11 >> 8;
            iVar9 = ((uint)*pbVar1 - (uint)*pbVar2) * uVar10;
            *pbVar2 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + *pbVar2;
            iVar9 = ((uint)pbVar1[1] - (uint)pbVar2[1]) * uVar10;
            pbVar2[1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar2[1];
            iVar9 = ((uint)pbVar1[2] - (uint)pbVar2[2]) * uVar10;
            pbVar2[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar2[2];
            iVar9 = (uVar11 - pbVar2[3]) * uVar10;
            iVar12 = iVar12 + 1;
            pbVar2[3] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar2[3];
            iVar9 = param_4;
          } while (iVar12 < param_4);
        }
      }
      else {
        param_2 = 0;
        if (0 < iVar9) {
          param_5 = 0;
          do {
            pfVar3 = (float *)(param_5 + param_6);
            sVar6 = ftol();
            iVar9 = (int)sVar6;
            sVar6 = ftol();
            uVar10 = ftol();
            iVar12 = ((int)sVar6 - (uVar10 & 0xffff)) * iVar9;
            cVar5 = ftol();
            *pfVar3 = (float)(byte)((char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + cVar5);
            sVar6 = ftol();
            uVar10 = ftol();
            iVar12 = ((int)sVar6 - (uVar10 & 0xffff)) * iVar9;
            cVar5 = ftol();
            pfVar3[1] = (float)(byte)((char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + cVar5);
            sVar6 = ftol();
            uVar10 = ftol();
            iVar12 = ((int)sVar6 - (uVar10 & 0xffff)) * iVar9;
            cVar5 = ftol();
            pfVar3[2] = (float)(byte)((char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + cVar5);
            uVar7 = ftol();
            sVar6 = ftol();
            iVar9 = ((int)sVar6 - (uint)uVar7) * iVar9;
            cVar5 = ftol();
            param_2 = param_2 + 1;
            pfVar3[3] = (float)(byte)((char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + cVar5);
            param_5 = param_5 + 0x10;
            iVar9 = param_4;
          } while (param_2 < param_4);
        }
      }
      param_6 = param_6 + param_3;
      param_8 = param_8 + param_7;
      param_1 = param_1 + 1;
    } while (param_1 < param_10);
  }
  return iVar8;
}


