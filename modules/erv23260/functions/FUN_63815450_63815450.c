/* Module: erv23260.dll
   Function: FUN_63815450
   Address: 63815450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63815450(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint local_10;
  uint local_8;
  
  iVar7 = param_2 + *(int *)((int)this + 0xfc) * -8;
  iVar8 = param_1 + param_6 * -0x10;
  if (-0x10 < param_5) {
    local_8 = param_5 + 0x13U >> 2;
    param_2 = iVar8;
    do {
      iVar9 = -0x10;
      if (-0x10 < param_4) {
        do {
          pbVar10 = (byte *)(iVar9 + 1 + param_2);
          iVar6 = 0x10;
          iVar4 = iVar9 / 2;
          sVar3 = 0;
          do {
            sVar3 = sVar3 + (ushort)*pbVar10;
            pbVar10 = pbVar10 + param_6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar9 = iVar9 + 2;
          *(short *)(iVar7 + iVar4 * 2) = sVar3;
        } while (iVar9 < param_4);
      }
      param_2 = param_2 + param_6 * 4;
      iVar7 = iVar7 + *(int *)((int)this + 0xfc) * 2;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  iVar7 = param_3 + *(int *)((int)this + 0x100) * -0x10;
  if (-0x10 < param_5) {
    local_10 = param_5 + 0x11U >> 1;
    do {
      iVar9 = -0x10;
      if (-0x10 < param_4) {
        pbVar10 = (byte *)(iVar8 + -0x10 + param_6);
        do {
          param_3 = 8;
          iVar4 = iVar9 + (iVar9 >> 0x1f & 3U);
          sVar3 = 0;
          pbVar5 = pbVar10;
          do {
            bVar2 = *pbVar5;
            pbVar1 = pbVar5 + ((iVar8 + iVar9) - (int)pbVar10);
            pbVar5 = pbVar5 + 2;
            sVar3 = (ushort)bVar2 + sVar3 + (ushort)*pbVar1;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
          iVar9 = iVar9 + 4;
          pbVar10 = pbVar10 + 4;
          *(short *)(iVar7 + (iVar4 >> 2) * 2) = sVar3;
        } while (iVar9 < param_4);
      }
      iVar8 = iVar8 + param_6 * 2;
      iVar7 = iVar7 + *(int *)((int)this + 0x100) * 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return;
}


