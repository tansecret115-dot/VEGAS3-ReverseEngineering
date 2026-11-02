/* Module: erv13260.dll
   Function: FUN_635fe010
   Address: 635fe010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fe010(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *local_10;
  int local_c;
  
  pbVar11 = (byte *)(param_3 + -2);
  local_10 = (byte *)(param_3 + param_4 * -2);
  if (param_1 != 0) {
    iVar2 = *(int *)(&DAT_636042b8 + param_1 * 4);
    local_c = 0;
    iVar3 = iVar2 * 2;
    do {
      bVar1 = pbVar11[3];
      bVar8 = *pbVar11;
      iVar4 = (((uint)pbVar11[2] - (uint)pbVar11[1]) * 4 - (uint)bVar1) + (uint)bVar8;
      iVar6 = iVar4 + 4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + -4;
      }
      iVar6 = iVar6 >> 3;
      if ((iVar2 * -2 < iVar6) && (iVar6 < iVar3)) {
        if (-iVar2 < iVar6) {
          if (iVar2 < iVar6) {
            iVar6 = iVar3 - iVar6;
          }
        }
        else {
          iVar6 = -(iVar3 + iVar6);
        }
        if (iVar6 == 0) break;
        uVar9 = (uint)pbVar11[1] + iVar6;
        if ((int)(((int)uVar9 < 0) - 1 & uVar9) < 0xff) {
          bVar5 = ((int)uVar9 < 0) - 1U & (byte)uVar9;
        }
        else {
          bVar5 = 0xff;
        }
        pbVar11[1] = bVar5;
        uVar9 = (uint)pbVar11[2] - iVar6;
        if ((int)(((int)uVar9 < 0) - 1 & uVar9) < 0xff) {
          bVar5 = ((int)uVar9 < 0) - 1U & (byte)uVar9;
        }
        else {
          bVar5 = 0xff;
        }
        iVar4 = (uint)bVar8 - (uint)bVar1;
        pbVar11[2] = bVar5;
        if (iVar4 < 1) {
          iVar4 = iVar4 + -2;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        iVar4 = iVar4 >> 2;
        if (iVar6 < 1) {
          iVar6 = -(iVar6 / 2);
        }
        else {
          iVar6 = iVar6 / 2;
        }
        iVar10 = -iVar6;
        if ((iVar10 < iVar4) && (iVar10 = iVar6, iVar4 <= iVar6)) {
          iVar10 = iVar4;
        }
        if (iVar10 == 0) break;
        *pbVar11 = bVar8 - (char)iVar10;
        pbVar11[3] = bVar1 + (char)iVar10;
      }
      pbVar11 = pbVar11 + param_4;
      local_c = local_c + 1;
    } while (local_c < 8);
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(&DAT_63604238 + param_2 * 4);
    iVar3 = iVar2 * 2;
    local_c = 0;
    do {
      bVar1 = *local_10;
      bVar8 = local_10[param_4 * 2];
      bVar5 = local_10[param_4 * 3];
      iVar4 = (((uint)bVar8 - (uint)local_10[param_4]) * 4 - (uint)bVar5) + (uint)bVar1;
      iVar6 = iVar4 + 4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + -4;
      }
      iVar6 = iVar6 >> 3;
      if ((iVar2 * -2 < iVar6) && (iVar6 < iVar3)) {
        if (-iVar2 < iVar6) {
          if (iVar2 < iVar6) {
            iVar6 = iVar3 - iVar6;
          }
        }
        else {
          iVar6 = -(iVar3 + iVar6);
        }
        if (iVar6 == 0) {
          return;
        }
        uVar9 = (uint)local_10[param_4] + iVar6;
        if ((int)(((int)uVar9 < 0) - 1 & uVar9) < 0xff) {
          bVar7 = ((int)uVar9 < 0) - 1U & (byte)uVar9;
        }
        else {
          bVar7 = 0xff;
        }
        local_10[param_4] = bVar7;
        uVar9 = (uint)bVar8 - iVar6;
        if ((int)(((int)uVar9 < 0) - 1 & uVar9) < 0xff) {
          bVar8 = ((int)uVar9 < 0) - 1U & (byte)uVar9;
        }
        else {
          bVar8 = 0xff;
        }
        local_10[param_4 * 2] = bVar8;
        iVar4 = (uint)bVar1 - (uint)bVar5;
        if (iVar4 < 1) {
          iVar4 = iVar4 + -2;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        iVar4 = iVar4 >> 2;
        if (iVar6 < 1) {
          iVar6 = -(iVar6 / 2);
        }
        else {
          iVar6 = iVar6 / 2;
        }
        iVar10 = -iVar6;
        if ((iVar10 < iVar4) && (iVar10 = iVar6, iVar4 <= iVar6)) {
          iVar10 = iVar4;
        }
        if (iVar10 == 0) {
          return;
        }
        *local_10 = bVar1 - (char)iVar10;
        local_10[param_4 * 3] = bVar5 + (char)iVar10;
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    } while (local_c < 8);
  }
  return;
}


