/* Module: rnco3260.dll
   Function: FUN_637141f0
   Address: 637141f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637141f0(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  undefined1 *local_8;
  
  iVar3 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  local_8 = param_2;
  if (param_4 != 0) {
    local_c = param_5 + 3;
    uVar5 = (uint)(byte)(&DAT_63795aa0)
                        [param_5[1] & 0xf0 | (uint)(*param_5 >> 4) | (param_5[2] & 0xf0) << 4];
    pbVar8 = param_3;
    if ((byte *)(param_4 - iVar3) != (byte *)0x0) {
      local_10 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
      param_5 = (byte *)(&DAT_637956a0 + uVar5);
      param_2 = (undefined1 *)(param_4 >> 1);
      param_3 = (byte *)(param_4 - iVar3);
      do {
        local_14 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
        uVar4 = (uint)*param_1;
        uVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*local_10 & 0x1e0
                      | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_14)
                        >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        do {
          *pbVar8 = (byte)uVar5;
          param_1 = param_1 + 1;
          pbVar8 = pbVar8 + 1;
          *local_8 = uVar2;
          local_8 = local_8 + 1;
          param_3 = param_3 + -1;
          bVar7 = (byte)uVar5;
          if (param_3 == (byte *)0x0) goto joined_r0x63714640;
          param_2 = param_2 + param_6 * -2;
        } while (-1 < (int)param_2);
        param_2 = param_2 + param_4;
        bVar1 = (&DAT_63795aa0)
                [local_c[1] & 0xf0 | (uint)(*local_c >> 4) | (local_c[2] & 0xf0) << 4];
        uVar4 = (uint)bVar1;
        bVar7 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_14)
                       >> 4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*local_10
                              & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        uVar6 = (uint)bVar7;
        uVar5 = (uint)*param_1;
        uVar2 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
                 0x1e0) << 3];
        do {
          param_1 = param_1 + 1;
          *pbVar8 = bVar7;
          pbVar8 = pbVar8 + 1;
          *local_8 = uVar2;
          local_8 = local_8 + 1;
          param_3 = param_3 + -1;
          if (param_3 == (byte *)0x0) goto joined_r0x63714640;
          param_2 = param_2 + param_6 * -2;
        } while (-1 < (int)param_2);
        puVar9 = param_2 + param_4;
        uVar5 = (uint)*param_1;
        uVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
                 0x1e0) << 3];
        do {
          *pbVar8 = bVar1;
          param_1 = param_1 + 1;
          pbVar8 = pbVar8 + 1;
          *local_8 = uVar2;
          local_8 = local_8 + 1;
          param_3 = param_3 + -1;
          bVar7 = bVar1;
          if (param_3 == (byte *)0x0) goto joined_r0x63714640;
          puVar9 = puVar9 + param_6 * -2;
        } while (-1 < (int)puVar9);
        param_2 = puVar9 + param_4;
        uVar5 = (uint)(byte)(&DAT_63795aa0)
                            [(uint)(local_c[3] >> 4) | local_c[4] & 0xf0 | (local_c[5] & 0xf0) << 4]
        ;
        param_5 = (byte *)(&DAT_637956a0 + uVar5);
        local_10 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
        bVar7 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*local_10 & 0x1e0)
                 >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        uVar6 = (uint)bVar7;
        uVar4 = (uint)*param_1;
        uVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
                 0x1e0) << 3];
        do {
          param_1 = param_1 + 1;
          *pbVar8 = bVar7;
          pbVar8 = pbVar8 + 1;
          *local_8 = uVar2;
          local_8 = local_8 + 1;
          param_3 = param_3 + -1;
          if (param_3 == (byte *)0x0) goto joined_r0x63714640;
          param_2 = param_2 + param_6 * -2;
        } while (-1 < (int)param_2);
        param_2 = param_2 + param_4;
        local_c = local_c + 6;
      } while( true );
    }
    uVar2 = (undefined1)param_4;
    bVar7 = (&DAT_63795aa0)[param_5[1] & 0xf0 | (uint)(*param_5 >> 4) | (param_5[2] & 0xf0) << 4];
joined_r0x63714640:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pbVar8 = bVar7;
      *local_8 = uVar2;
      pbVar8 = pbVar8 + 1;
      local_8 = local_8 + 1;
    }
  }
  return;
}


