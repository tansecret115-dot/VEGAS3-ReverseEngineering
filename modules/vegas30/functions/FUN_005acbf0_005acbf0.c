/* Module: vegas30.exe
   Function: FUN_005acbf0
   Address: 005acbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005acbf0(int param_1,uint param_2,int param_3,int *param_4,undefined4 param_5,undefined4 param_6
            ,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar4 = -param_3;
  iVar2 = param_4[2];
  iVar3 = *param_4;
  iVar5 = ftol();
  iVar6 = ftol();
  if (param_8 != 4) {
    return 0x80004001;
  }
  iVar8 = param_4[1];
  iVar11 = param_4[3];
  if (iVar8 < iVar11) {
    param_2 = (uint)(param_7 == 0) + iVar8;
    iVar10 = iVar8 * iVar4;
    do {
      pbVar9 = (byte *)(iVar10 + *param_4 * 4 + (iVar1 + -1) * param_3 + param_1);
      pbVar13 = pbVar9;
      if (iVar8 != param_4[1]) {
        pbVar13 = pbVar9 + param_3;
      }
      pbVar14 = pbVar9;
      if (iVar8 != iVar11 + -1) {
        pbVar14 = pbVar9 + iVar4;
      }
      iVar11 = iVar6;
      if ((param_2 & 1) != 0) {
        iVar11 = iVar5;
      }
      iVar12 = 0x4000 - iVar11;
      param_8 = iVar2 - iVar3;
      if (0 < iVar2 - iVar3) {
        do {
          iVar7 = (int)(((uint)*pbVar14 + (uint)*pbVar13) * iVar12) / 2 + (uint)*pbVar9 * iVar11;
          *pbVar9 = (byte)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar7 = (int)(((uint)pbVar14[1] + (uint)pbVar13[1]) * iVar12) / 2 +
                  (uint)pbVar9[1] * iVar11;
          pbVar9[1] = (byte)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar7 = (int)(((uint)pbVar14[2] + (uint)pbVar13[2]) * iVar12) / 2 +
                  (uint)pbVar9[2] * iVar11;
          pbVar9[2] = (byte)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar7 = (int)(((uint)pbVar14[3] + (uint)pbVar13[3]) * iVar12) / 2 +
                  (uint)pbVar9[3] * iVar11;
          pbVar9[3] = (byte)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
          param_8 = param_8 + -1;
          pbVar9 = pbVar9 + 4;
          pbVar13 = pbVar13 + 4;
          pbVar14 = pbVar14 + 4;
        } while (param_8 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar11 = param_4[3];
      iVar10 = iVar10 + iVar4;
      param_2 = param_2 + 1;
    } while (iVar8 < iVar11);
  }
  return 0;
}


