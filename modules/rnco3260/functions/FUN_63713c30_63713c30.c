/* Module: rnco3260.dll
   Function: FUN_63713c30
   Address: 63713c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63713c30(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,byte *param_5,
            byte *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_20;
  byte *local_18;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  if (param_6 != (byte *)0x0) {
    bVar2 = *param_5;
    pbVar5 = param_5 + 3;
    pbVar7 = param_5 + 1;
    pbVar1 = param_5 + 2;
    local_8 = (uint)(byte)(&DAT_63795aa0)
                          [(uint)(bVar2 >> 4) | *pbVar7 & 0xf0 | (*pbVar1 & 0xf0) << 4];
    uVar4 = (uint)*param_1;
    pbVar10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
    local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
    param_5 = (byte *)(&DAT_637956a0 + local_8);
    local_c = param_1 + 2;
    param_1 = param_6 + -1;
    pbVar9 = param_3 + 1;
    bVar3 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*pbVar10 & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_10) >> 4)
             >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
    uVar4 = (uint)bVar3;
    *param_3 = (&DAT_63795aa0)[(uint)(bVar2 >> 4) | *pbVar7 & 0xf0 | (*pbVar1 & 0xf0) << 4];
    *param_2 = bVar3;
    pbVar7 = param_2 + 1;
    if (1 < (int)param_1) {
      param_2 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
      local_18 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
      param_3 = (byte *)(&DAT_637956a0 + uVar4);
      local_20 = (uint)param_1 >> 1;
      param_6 = pbVar7;
      do {
        bVar2 = (&DAT_63795aa0)[(uint)(*pbVar5 >> 4) | pbVar5[1] & 0xf0 | (pbVar5[2] & 0xf0) << 4];
        uVar4 = (uint)bVar2;
        *pbVar9 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_10
                              ) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*pbVar10 & 0x1e0
                        ) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        pbVar9[1] = bVar2;
        uVar6 = (uint)*local_c;
        bVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
                 0x1e0) << 3];
        uVar6 = (uint)bVar2;
        *param_6 = (&DAT_63795aa0)
                   [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_18 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >>
                    1 | ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_3 & 0x1e0) << 3];
        param_6[1] = bVar2;
        local_8 = (uint)(byte)(&DAT_63795aa0)
                              [pbVar5[4] & 0xf0 | (uint)(pbVar5[3] >> 4) | (pbVar5[5] & 0xf0) << 4];
        pbVar10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
        local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
        param_5 = (byte *)(&DAT_637956a0 + local_8);
        bVar2 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*pbVar10 & 0x1e0)
                 >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        pbVar9[3] = (&DAT_63795aa0)
                    [pbVar5[4] & 0xf0 | (uint)(pbVar5[3] >> 4) | (pbVar5[5] & 0xf0) << 4];
        pbVar9[2] = bVar2;
        uVar4 = (uint)local_c[2];
        pbVar9 = pbVar9 + 4;
        bVar2 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_10)
                       >> 4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*pbVar10 &
                              0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*param_5 & 0x1e0) << 3];
        uVar4 = (uint)bVar2;
        param_3 = (byte *)(&DAT_637956a0 + uVar4);
        param_2 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
        local_18 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
        param_1 = param_1 + -2;
        pbVar7 = param_6 + 4;
        local_c = local_c + 4;
        param_6[2] = (&DAT_63795aa0)
                     [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) &
                            0x1e0 | (int)((uint)*local_18 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_3 & 0x1e0) << 3]
        ;
        param_6[3] = bVar2;
        pbVar5 = pbVar5 + 6;
        local_20 = local_20 - 1;
        param_6 = pbVar7;
      } while (local_20 != 0);
    }
    if (param_1 != (byte *)0x0) {
      bVar2 = (&DAT_63795aa0)[(uint)(*pbVar5 >> 4) | pbVar5[1] & 0xf0 | (pbVar5[2] & 0xf0) << 4];
      uVar6 = (uint)bVar2;
      bVar3 = (&DAT_63795aa0)
              [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                    (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                    (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
               0x1e0) << 3];
      pbVar9[1] = bVar2;
      *pbVar9 = bVar3;
      pbVar9[2] = bVar2;
      uVar8 = (uint)*local_c;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar8) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
               0x1e0) << 3];
      uVar6 = (uint)bVar2;
      bVar3 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
               0x1e0) << 3];
      pbVar7[1] = bVar2;
      *pbVar7 = bVar3;
      pbVar7[2] = bVar2;
      return;
    }
    *pbVar9 = (byte)local_8;
    *pbVar7 = (byte)uVar4;
  }
  return;
}


