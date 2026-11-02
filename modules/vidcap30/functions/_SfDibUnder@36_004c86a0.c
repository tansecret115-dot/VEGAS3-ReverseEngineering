/* Module: vidcap30.exe
   Function: _SfDibUnder@36
   Address: 004c86a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibUnder_36(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  
                    /* 0xc86a0  345  _SfDibUnder@36 */
  iVar4 = _SfDibPrepareCopy_52
                    (&param_5,&param_2,&param_8,&param_6,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,4);
  if ((-1 < iVar4) && (param_4 = 0, 0 < param_2)) {
    do {
      if (param_9 == 4) {
        iVar10 = 0;
        if (0 < param_5) {
          do {
            bVar2 = *(byte *)(param_8 + iVar10 * 4);
            pbVar1 = (byte *)(param_6 + iVar10 * 4);
            iVar7 = param_8 + iVar10 * 4;
            uVar5 = (uint)pbVar1[3];
            iVar6 = ((uint)*pbVar1 - (uint)bVar2) * uVar5;
            bVar3 = *(byte *)(iVar7 + 1);
            *pbVar1 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar2;
            iVar6 = ((uint)pbVar1[1] - (uint)bVar3) * uVar5;
            bVar2 = *(byte *)(iVar7 + 2);
            pbVar1[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar3;
            iVar6 = ((uint)pbVar1[2] - (uint)bVar2) * uVar5;
            bVar3 = *(byte *)(iVar7 + 3);
            pbVar1[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar2;
            iVar7 = (uVar5 - bVar3) * uVar5;
            iVar10 = iVar10 + 1;
            pbVar1[3] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar3;
          } while (iVar10 < param_5);
        }
      }
      else {
        iVar10 = 0;
        if (0 < param_5) {
          iVar7 = 0;
          do {
            pfVar8 = (float *)(param_6 + iVar7);
            pfVar9 = (float *)(param_8 + iVar7);
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + 0x10;
            *pfVar8 = (*pfVar8 - *pfVar9) * pfVar8[3] + *pfVar9;
            pfVar8[1] = (pfVar8[1] - pfVar9[1]) * pfVar8[3] + pfVar9[1];
            pfVar8[2] = (pfVar8[2] - pfVar9[2]) * pfVar8[3] + pfVar9[2];
            pfVar8[3] = (pfVar8[3] - pfVar9[3]) * pfVar8[3] + pfVar9[3];
          } while (iVar10 < param_5);
        }
      }
      param_6 = param_6 + param_3;
      param_8 = param_8 + param_7;
      param_4 = param_4 + 1;
    } while (param_4 < param_2);
  }
  return iVar4;
}


