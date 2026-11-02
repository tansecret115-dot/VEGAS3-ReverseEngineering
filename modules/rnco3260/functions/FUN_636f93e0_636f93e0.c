/* Module: rnco3260.dll
   Function: FUN_636f93e0
   Address: 636f93e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f93e0(undefined1 *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint local_28;
  uint local_1c;
  uint *local_14;
  uint local_c;
  byte local_8;
  
  iVar2 = param_4;
  iVar13 = param_2 >> 1;
  iVar4 = (param_2 * 2 - iVar13) / (param_4 * 2);
  if (param_2 != 0) {
    uVar1 = *param_3;
    local_14 = param_3 + 1;
    uVar9 = uVar1 >> 8;
    uVar12 = uVar1 >> 0x10;
    param_4 = param_2 - iVar4;
    local_c = uVar1 & 0xff;
    bVar7 = (byte)(uVar1 >> 8);
    local_1c = (uint)bVar7;
    bVar10 = (byte)(uVar1 >> 0x10);
    uVar5 = uVar1 & 0xff;
    puVar6 = param_1;
    local_8 = bVar10;
    uVar3 = (char)uVar1;
    if (param_4 != 0) {
      while( true ) {
        *puVar6 = (char)uVar5;
        puVar6[1] = (byte)uVar9;
        puVar6[2] = (byte)uVar12;
        puVar6 = puVar6 + 3;
        param_4 = param_4 + -1;
        local_8 = (byte)uVar12;
        bVar7 = (byte)uVar9;
        uVar3 = (char)uVar5;
        if (param_4 == 0) break;
        iVar13 = iVar13 + iVar2 * -2;
        if (iVar13 < 0) {
          param_3 = (uint *)(iVar13 + param_2);
          uVar1 = *local_14;
          param_1._3_1_ = (undefined1)uVar1;
          iVar13 = local_c + (uVar1 & 0xff);
          bVar8 = (byte)(uVar1 >> 0x10);
          bVar11 = (byte)(uVar1 >> 8);
          local_28 = (uint)bVar11;
          bVar7 = (byte)((int)(local_1c + local_28) >> 1);
          do {
            local_c._0_1_ = (undefined1)(iVar13 >> 1);
            puVar6[1] = bVar7;
            *puVar6 = (undefined1)local_c;
            local_8 = (byte)((int)((uint)bVar10 + (uint)bVar8) >> 1);
            puVar6[2] = local_8;
            puVar6 = puVar6 + 3;
            param_4 = param_4 + -1;
            uVar3 = (undefined1)local_c;
            if (param_4 == 0) goto joined_r0x636f95b7;
            param_3 = (uint *)((int)param_3 + iVar2 * -2);
          } while (-1 < (int)param_3);
          iVar13 = (int)param_3 + param_2;
          do {
            puVar6[1] = bVar11;
            *puVar6 = param_1._3_1_;
            puVar6[2] = bVar8;
            puVar6 = puVar6 + 3;
            param_4 = param_4 + -1;
            local_8 = bVar8;
            bVar7 = bVar11;
            uVar3 = param_1._3_1_;
            if (param_4 == 0) goto joined_r0x636f95b7;
            iVar13 = iVar13 + iVar2 * -2;
          } while (-1 < iVar13);
          iVar13 = iVar13 + param_2;
          uVar5 = local_14[1];
          bVar10 = (byte)(uVar5 >> 0x10);
          local_c = uVar5 & 0xff;
          uVar9 = uVar5 >> 8;
          local_14 = local_14 + 2;
          local_1c = uVar5 >> 8 & 0xff;
          param_1._3_1_ = (undefined1)((int)((uVar5 & 0xff) + (uVar1 & 0xff)) >> 1);
          bVar7 = (byte)((int)(local_1c + local_28) >> 1);
          local_8 = (byte)((int)((uint)bVar10 + (uint)bVar8) >> 1);
          do {
            puVar6[1] = bVar7;
            *puVar6 = param_1._3_1_;
            puVar6[2] = local_8;
            puVar6 = puVar6 + 3;
            param_4 = param_4 + -1;
            uVar3 = param_1._3_1_;
            if (param_4 == 0) goto joined_r0x636f95b7;
            iVar13 = iVar13 + iVar2 * -2;
          } while (-1 < iVar13);
          uVar12 = (uint)bVar10;
          iVar13 = iVar13 + param_2;
          uVar5 = local_c;
        }
      }
    }
joined_r0x636f95b7:
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = uVar3;
      puVar6[1] = bVar7;
      puVar6[2] = local_8;
      puVar6 = puVar6 + 3;
    }
  }
  return;
}


