/* Module: mcmpgdec.dll
   Function: FUN_100256b8
   Address: 100256b8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_100256b8(uint *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *local_48;
  int local_30;
  byte *local_10;
  
  iVar8 = param_3 >> 1;
  iVar5 = param_5 >> 1;
  iVar1 = iVar8 * 2 - iVar5;
  pbVar2 = (byte *)*param_4;
  pbVar3 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  iVar11 = 2;
  pbVar9 = pbVar2;
  pbVar10 = pbVar4;
  puVar13 = param_1;
  local_10 = pbVar3;
  do {
    iVar6 = 0;
    iVar11 = iVar11 + -1;
    if (0 < param_6 >> 2) {
      do {
        iVar6 = iVar6 + 1;
        local_30 = 0;
        if (0 < iVar5 + -7) {
          local_48 = (uint *)((int)puVar13 + param_2 * 2);
          pbVar12 = pbVar9 + param_3 * 2;
          do {
            uVar7 = (uint)*local_10 << 0x18 | (uint)*pbVar10 << 8;
            *puVar13 = *pbVar9 | uVar7 | (uint)pbVar9[1] << 0x10;
            *local_48 = uVar7 | *pbVar12 | (uint)pbVar12[1] << 0x10;
            uVar7 = (uint)local_10[1] << 0x18 | (uint)pbVar10[1] << 8;
            puVar13[1] = pbVar9[2] | uVar7 | (uint)pbVar9[3] << 0x10;
            local_48[1] = uVar7 | pbVar12[2] | (uint)pbVar12[3] << 0x10;
            uVar7 = (uint)local_10[2] << 0x18 | (uint)pbVar10[2] << 8;
            puVar13[2] = pbVar9[4] | uVar7 | (uint)pbVar9[5] << 0x10;
            local_48[2] = uVar7 | pbVar12[4] | (uint)pbVar12[5] << 0x10;
            uVar7 = (uint)local_10[3] << 0x18 | (uint)pbVar10[3] << 8;
            puVar13[3] = pbVar9[6] | uVar7 | (uint)pbVar9[7] << 0x10;
            local_48[3] = uVar7 | pbVar12[6] | (uint)pbVar12[7] << 0x10;
            uVar7 = (uint)local_10[4] << 0x18 | (uint)pbVar10[4] << 8;
            puVar13[4] = pbVar9[8] | uVar7 | (uint)pbVar9[9] << 0x10;
            local_48[4] = uVar7 | pbVar12[8] | (uint)pbVar12[9] << 0x10;
            uVar7 = (uint)local_10[5] << 0x18 | (uint)pbVar10[5] << 8;
            puVar13[5] = pbVar9[10] | uVar7 | (uint)pbVar9[0xb] << 0x10;
            local_48[5] = uVar7 | pbVar12[10] | (uint)pbVar12[0xb] << 0x10;
            uVar7 = (uint)local_10[6] << 0x18 | (uint)pbVar10[6] << 8;
            puVar13[6] = pbVar9[0xc] | uVar7 | (uint)pbVar9[0xd] << 0x10;
            local_48[6] = uVar7 | pbVar12[0xc] | (uint)pbVar12[0xd] << 0x10;
            uVar7 = (uint)local_10[7] << 0x18 | (uint)pbVar10[7] << 8;
            puVar13[7] = pbVar9[0xe] | uVar7 | (uint)pbVar9[0xf] << 0x10;
            local_48[7] = uVar7 | pbVar12[0xe] | (uint)pbVar12[0xf] << 0x10;
            pbVar12 = pbVar12 + 0x10;
            pbVar9 = pbVar9 + 0x10;
            local_10 = local_10 + 8;
            pbVar10 = pbVar10 + 8;
            local_48 = local_48 + 8;
            puVar13 = puVar13 + 8;
            local_30 = local_30 + 8;
          } while (local_30 < iVar5 + -7);
        }
        if (local_30 < iVar5) {
          local_30 = iVar5 - local_30;
          do {
            uVar7 = (uint)*local_10 << 0x18 | (uint)*pbVar10 << 8;
            *puVar13 = *pbVar9 | uVar7 | (uint)pbVar9[1] << 0x10;
            pbVar10 = pbVar10 + 1;
            *(uint *)((int)puVar13 + param_2 * 2) =
                 uVar7 | pbVar9[param_3 * 2] | (uint)pbVar9[param_3 * 2 + 1] << 0x10;
            pbVar9 = pbVar9 + 2;
            local_10 = local_10 + 1;
            puVar13 = puVar13 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        local_10 = local_10 + iVar1;
        pbVar10 = pbVar10 + iVar1;
        pbVar9 = pbVar9 + (param_3 * 4 - param_5);
        puVar13 = (uint *)((int)puVar13 + param_2 * 4 + param_5 * -2);
      } while (iVar6 < param_6 >> 2);
    }
    pbVar9 = pbVar2 + param_3;
    pbVar10 = pbVar4 + iVar8;
    puVar13 = (uint *)(param_2 + (int)param_1);
    local_10 = pbVar3 + iVar8;
  } while (iVar11 != 0);
  return;
}


