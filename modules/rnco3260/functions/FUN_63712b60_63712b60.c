/* Module: rnco3260.dll
   Function: FUN_63712b60
   Address: 63712b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63712b60(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,uint *param_5,
            byte *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_20;
  byte *local_1c;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  if (param_6 != (byte *)0x0) {
    uVar4 = *param_5;
    puVar5 = param_5 + 1;
    local_8 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar4 & 0xf000 | uVar4 >> 0xc & 0xf00) >> 8 | (uVar4 & 0xf0) << 4];
    uVar3 = (uint)*param_1;
    pbVar9 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
    local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
    param_5 = &DAT_637956a0 + local_8;
    local_c = param_1 + 2;
    param_1 = param_6 + -1;
    pbVar8 = param_3 + 1;
    bVar1 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*local_10 & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*pbVar9) >> 4)
             >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)(byte)*param_5 & 0x1e0) << 3];
    uVar3 = (uint)bVar1;
    *param_3 = (&DAT_63795aa0)[(uVar4 & 0xf000 | uVar4 >> 0xc & 0xf00) >> 8 | (uVar4 & 0xf0) << 4];
    *param_2 = bVar1;
    pbVar7 = param_2 + 1;
    if (1 < (int)param_1) {
      param_2 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1);
      local_1c = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2);
      param_3 = (byte *)(&DAT_637956a0 + uVar3);
      local_20 = (uint)param_1 >> 1;
      param_6 = pbVar7;
      do {
        uVar4 = *puVar5;
        bVar1 = (&DAT_63795aa0)[(uVar4 & 0xf000 | uVar4 >> 0xc & 0xf00) >> 8 | (uVar4 & 0xf0) << 4];
        uVar3 = (uint)bVar1;
        *pbVar8 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*local_10 &
                         0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                                      (uint)*pbVar9) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)(byte)*param_5 & 0x1e0) << 3];
        pbVar8[1] = bVar1;
        uVar4 = (uint)*local_c;
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar3) &
                 0x1e0) << 3];
        uVar6 = (uint)bVar1;
        *param_6 = (&DAT_63795aa0)
                   [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) &
                          0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                                       (uint)*local_1c) >> 4) >> 1 |
                    ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar6) & 0x1e0) << 3];
        param_6[1] = bVar1;
        uVar4 = puVar5[1];
        bVar1 = (&DAT_63795aa0)[(uVar4 & 0xf000 | uVar4 >> 0xc & 0xf00) >> 8 | (uVar4 & 0xf0) << 4];
        local_8 = (uint)bVar1;
        pbVar9 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
        local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
        param_5 = &DAT_637956a0 + local_8;
        pbVar8[2] = (&DAT_63795aa0)
                    [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) & 0x1e0 |
                          (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*pbVar9)
                          >> 4) >> 1 |
                     ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)(byte)*param_5 & 0x1e0) << 3];
        pbVar8[3] = bVar1;
        uVar4 = (uint)local_c[2];
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*pbVar9) >>
                       4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*local_10 &
                           0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)(byte)*param_5 & 0x1e0) << 3];
        uVar3 = (uint)bVar1;
        param_3 = (byte *)(&DAT_637956a0 + uVar3);
        param_2 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1);
        local_1c = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2);
        param_1 = param_1 + -2;
        pbVar7 = param_6 + 4;
        local_c = local_c + 4;
        param_6[2] = (&DAT_63795aa0)
                     [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) &
                            0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                                         (uint)*local_1c) >> 4) >> 1 |
                      ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar6) & 0x1e0) << 3];
        param_6[3] = bVar1;
        puVar5 = puVar5 + 2;
        pbVar8 = pbVar8 + 4;
        local_20 = local_20 - 1;
        param_6 = pbVar7;
      } while (local_20 != 0);
    }
    if (param_1 != (byte *)0x0) {
      uVar4 = *puVar5;
      bVar1 = (&DAT_63795aa0)[(uVar4 & 0xf000 | uVar4 >> 0xc & 0xf00) >> 8 | (uVar4 & 0xf0) << 4];
      uVar4 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4 |
                    (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                    (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
      pbVar8[1] = bVar1;
      *pbVar8 = bVar2;
      pbVar8[2] = bVar1;
      uVar6 = (uint)*local_c;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
      uVar4 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
      pbVar7[1] = bVar1;
      *pbVar7 = bVar2;
      pbVar7[2] = bVar1;
      return;
    }
    *pbVar8 = (byte)local_8;
    *pbVar7 = (byte)uVar3;
  }
  return;
}


