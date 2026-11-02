/* Module: rnco3260.dll
   Function: FUN_636f99c0
   Address: 636f99c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f99c0(byte *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_c;
  int local_8;
  
  iVar2 = param_4;
  iVar10 = param_2 >> 1;
  iVar6 = (param_2 * 2 - iVar10) / (param_4 * 2);
  if (param_2 == 0) {
    return;
  }
  uVar12 = *param_3;
  local_c = param_3 + 1;
  uVar11 = uVar12 >> 0x10;
  uVar7 = uVar12 >> 8;
  local_8 = param_2 - iVar6;
  bVar9 = (byte)(uVar12 >> 0x10);
  local_14 = (uint)bVar9;
  bVar3 = (byte)(uVar12 >> 8);
  local_18 = (uint)bVar3;
  local_1c = uVar12 & 0xff;
  pbVar8 = param_1;
  if (local_8 != 0) {
    while( true ) {
      bVar9 = (byte)uVar11;
      *param_1 = bVar9;
      bVar3 = (byte)uVar7;
      param_1[1] = bVar3;
      param_1[2] = (byte)uVar12;
      param_1 = param_1 + 3;
      local_8 = local_8 + -1;
      pbVar8 = param_1;
      if (local_8 == 0) break;
      iVar10 = iVar10 + iVar2 * -2;
      if (iVar10 < 0) {
        iVar10 = iVar10 + param_2;
        uVar1 = *local_c;
        bVar4 = (byte)(uVar1 >> 0x10);
        param_4 = (int)bVar4;
        bVar5 = (byte)(uVar1 >> 8);
        param_3 = (uint *)(uint)bVar5;
        bVar9 = (byte)((int)(local_14 + param_4) >> 1);
        bVar3 = (byte)((int)(local_18 + (int)param_3) >> 1);
        uVar12 = (int)(local_1c + (uVar1 & 0xff)) >> 1;
        do {
          *pbVar8 = bVar9;
          pbVar8[1] = bVar3;
          pbVar8[2] = (byte)uVar12;
          pbVar8 = pbVar8 + 3;
          local_8 = local_8 + -1;
          if (local_8 == 0) goto joined_r0x636f9b82;
          iVar10 = iVar10 + iVar2 * -2;
        } while (-1 < iVar10);
        iVar10 = iVar10 + param_2;
        do {
          *pbVar8 = bVar4;
          pbVar8[1] = bVar5;
          pbVar8[2] = (byte)uVar1;
          pbVar8 = pbVar8 + 3;
          local_8 = local_8 + -1;
          bVar3 = bVar5;
          bVar9 = bVar4;
          param_1._3_1_ = (byte)uVar1;
          if (local_8 == 0) goto LAB_636f9b77;
          iVar10 = iVar10 + iVar2 * -2;
        } while (-1 < iVar10);
        iVar10 = iVar10 + param_2;
        uVar12 = local_c[1];
        local_1c = uVar12 & 0xff;
        uVar11 = uVar12 >> 0x10;
        local_c = local_c + 2;
        local_14 = uVar12 >> 0x10 & 0xff;
        iVar13 = local_14 + param_4;
        uVar7 = uVar12 >> 8;
        local_18 = uVar12 >> 8 & 0xff;
        iVar14 = local_18 + (int)param_3;
        param_1._3_1_ = (byte)((int)((uVar12 & 0xff) + (uVar1 & 0xff)) >> 1);
        do {
          param_4._0_1_ = (byte)(iVar13 >> 1);
          *pbVar8 = (byte)param_4;
          param_3._0_1_ = (byte)(iVar14 >> 1);
          pbVar8[1] = (byte)param_3;
          pbVar8[2] = param_1._3_1_;
          pbVar8 = pbVar8 + 3;
          local_8 = local_8 + -1;
          bVar3 = (byte)param_3;
          bVar9 = (byte)param_4;
          if (local_8 == 0) goto LAB_636f9b77;
          iVar10 = iVar10 + iVar2 * -2;
        } while (-1 < iVar10);
        iVar10 = iVar10 + param_2;
        param_1 = pbVar8;
        uVar12 = local_1c;
      }
    }
  }
joined_r0x636f9b82:
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pbVar8 = bVar9;
    pbVar8[1] = bVar3;
    pbVar8[2] = (byte)uVar12;
    pbVar8 = pbVar8 + 3;
  }
  return;
LAB_636f9b77:
  uVar12 = (uint)param_1._3_1_;
  goto joined_r0x636f9b82;
}


