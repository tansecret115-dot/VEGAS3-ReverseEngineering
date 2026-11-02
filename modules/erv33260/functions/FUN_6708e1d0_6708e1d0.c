/* Module: erv33260.dll
   Function: FUN_6708e1d0
   Address: 6708e1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708e1d0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 byte *param_7,int param_8)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint local_8;
  
  iVar4 = param_1 + param_6 * -0x10;
  iVar7 = param_2 + (int)param_7 * -8;
  if (-0x10 < param_5) {
    local_8 = param_5 + 0x13U >> 2;
    param_2 = iVar4;
    do {
      iVar6 = -0x10;
      if (-0x10 < param_4) {
        do {
          iVar9 = 0x10;
          pbVar8 = (byte *)(iVar6 + 1 + param_2);
          iVar5 = iVar6 / 2;
          sVar3 = 0;
          do {
            sVar3 = sVar3 + (ushort)*pbVar8;
            pbVar8 = pbVar8 + param_6;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          iVar6 = iVar6 + 2;
          *(short *)(iVar7 + iVar5 * 2) = sVar3;
        } while (iVar6 < param_4);
      }
      param_2 = param_2 + param_6 * 4;
      iVar7 = iVar7 + (int)param_7 * 2;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  iVar7 = param_3 + param_8 * -0x10;
  if (-0x10 < param_5) {
    param_3 = param_5 + 0x11U >> 1;
    do {
      iVar6 = -0x10;
      if (-0x10 < param_4) {
        param_7 = (byte *)(iVar4 + -0x10);
        do {
          iVar9 = 8;
          iVar5 = iVar6 + (iVar6 >> 0x1f & 3U);
          sVar3 = 0;
          pbVar8 = param_7;
          do {
            pbVar1 = pbVar8 + param_6;
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 2;
            iVar9 = iVar9 + -1;
            sVar3 = (ushort)bVar2 + sVar3 + (ushort)*pbVar1;
          } while (iVar9 != 0);
          iVar6 = iVar6 + 4;
          *(short *)(iVar7 + (iVar5 >> 2) * 2) = sVar3;
          param_7 = param_7 + 4;
        } while (iVar6 < param_4);
      }
      iVar4 = iVar4 + param_6 * 2;
      iVar7 = iVar7 + param_8 * 2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}


