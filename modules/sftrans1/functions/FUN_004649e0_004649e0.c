/* Module: sftrans1.dll
   Function: FUN_004649e0
   Address: 004649e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004649e0(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte local_1c [8];
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  local_1c[0] = 200;
  local_1c[1] = 200;
  local_1c[2] = 200;
  local_1c[4] = 0x80;
  local_1c[5] = 0x80;
  local_1c[6] = 0x80;
  local_1c[3] = 0xff;
  local_1c[7] = 0xff;
  local_4 = 0;
  local_c = 0;
  local_10 = iVar3;
  local_14 = param_2;
  iVar5 = iVar4;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    local_8 = iVar5;
    FUN_00464980(&local_14,param_3,iVar3,iVar4);
    iVar9 = 0;
    if (0 < local_10) {
      pbVar7 = (byte *)(local_14 + 3);
      do {
        if (*pbVar7 != 0xff) {
          uVar8 = (int)(iVar9 + (iVar9 >> 0x1f & 7U) ^ iVar5 + (iVar5 >> 0x1f & 7U)) >> 3 & 1;
          iVar6 = ((uint)pbVar7[-1] - (uint)local_1c[uVar8 * 4 + 2]) * (uint)*pbVar7;
          bVar1 = local_1c[uVar8 * 4 + 1];
          pbVar7[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + local_1c[uVar8 * 4 + 2];
          iVar6 = ((uint)pbVar7[-2] - (uint)bVar1) * (uint)*pbVar7;
          bVar2 = local_1c[uVar8 * 4];
          pbVar7[-2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
          iVar6 = ((uint)pbVar7[-3] - (uint)bVar2) * (uint)*pbVar7;
          pbVar7[-3] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar2;
          *pbVar7 = 0;
        }
        iVar9 = iVar9 + 1;
        pbVar7 = pbVar7 + 4;
      } while (iVar9 < local_10);
    }
    local_14 = local_14 + iVar3 * 4;
  }
  return;
}


