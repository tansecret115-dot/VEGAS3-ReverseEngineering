/* Module: rnco3260.dll
   Function: FUN_636fab10
   Address: 636fab10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fab10(byte *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  uint local_28;
  uint local_1c;
  uint local_18;
  ushort *local_14;
  int local_c;
  byte local_8;
  
  iVar2 = param_4;
  local_c = param_2 >> 1;
  iVar7 = (param_2 * 2 - local_c) / (param_4 * 2);
  if (param_2 != 0) {
    uVar1 = *param_3;
    local_14 = param_3 + 1;
    bVar4 = (char)uVar1 << 3;
    bVar8 = (byte)(uVar1 >> 2) & 0xf8;
    bVar10 = (byte)(uVar1 >> 7) & 0xf8;
    local_18 = (uint)bVar4;
    local_1c = (uint)bVar8;
    param_4 = (int)bVar10;
    pbVar11 = param_1;
    pbVar3 = (byte *)(param_2 - iVar7);
    bVar6 = bVar4;
    local_8 = bVar10;
    bVar9 = bVar8;
    if ((byte *)(param_2 - iVar7) != (byte *)0x0) {
      while( true ) {
        param_1 = pbVar3;
        *pbVar11 = bVar4;
        pbVar11[1] = bVar8;
        pbVar11[2] = bVar10;
        pbVar11 = pbVar11 + 3;
        param_1 = param_1 + -1;
        bVar6 = bVar4;
        local_8 = bVar10;
        bVar9 = bVar8;
        if (param_1 == (byte *)0x0) break;
        local_c = local_c + iVar2 * -2;
        pbVar3 = param_1;
        if (local_c < 0) {
          uVar1 = *local_14;
          local_c = local_c + param_2;
          bVar4 = (char)uVar1 << 3;
          bVar5 = (byte)(uVar1 >> 7) & 0xf8;
          param_3 = (ushort *)(uint)bVar4;
          bVar8 = (byte)(uVar1 >> 2) & 0xf8;
          local_28 = (uint)bVar8;
          bVar6 = (byte)((int)(local_18 + (int)param_3) >> 1);
          bVar9 = (byte)((int)(local_1c + local_28) >> 1);
          do {
            *pbVar11 = bVar6;
            pbVar11[1] = bVar9;
            local_8 = (byte)((int)(param_4 + (uint)bVar5) >> 1);
            pbVar11[2] = local_8;
            pbVar11 = pbVar11 + 3;
            param_1 = param_1 + -1;
            if (param_1 == (byte *)0x0) goto joined_r0x636fad07;
            local_c = local_c + iVar2 * -2;
          } while (-1 < local_c);
          local_c = local_c + param_2;
          do {
            *pbVar11 = bVar4;
            pbVar11[1] = bVar8;
            pbVar11[2] = bVar5;
            pbVar11 = pbVar11 + 3;
            param_1 = param_1 + -1;
            bVar6 = bVar4;
            local_8 = bVar5;
            bVar9 = bVar8;
            if (param_1 == (byte *)0x0) goto joined_r0x636fad07;
            local_c = local_c + iVar2 * -2;
          } while (-1 < local_c);
          local_c = local_c + param_2;
          uVar1 = local_14[1];
          local_14 = local_14 + 2;
          bVar4 = (char)uVar1 << 3;
          bVar10 = (byte)(uVar1 >> 7) & 0xf8;
          local_18 = (uint)bVar4;
          param_4 = (int)bVar10;
          bVar8 = (byte)(uVar1 >> 2) & 0xf8;
          bVar6 = (byte)((int)(local_18 + (int)param_3) >> 1);
          local_1c = (uint)bVar8;
          bVar9 = (byte)((int)(local_1c + local_28) >> 1);
          do {
            pbVar11[1] = bVar9;
            *pbVar11 = bVar6;
            local_8 = (byte)((int)(param_4 + (uint)bVar5) >> 1);
            pbVar11[2] = local_8;
            pbVar11 = pbVar11 + 3;
            param_1 = param_1 + -1;
            if (param_1 == (byte *)0x0) goto joined_r0x636fad07;
            local_c = local_c + iVar2 * -2;
          } while (-1 < local_c);
          local_c = local_c + param_2;
          pbVar3 = param_1;
        }
      }
    }
joined_r0x636fad07:
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pbVar11 = bVar6;
      pbVar11[1] = bVar9;
      pbVar11[2] = local_8;
      pbVar11 = pbVar11 + 3;
    }
  }
  return;
}


