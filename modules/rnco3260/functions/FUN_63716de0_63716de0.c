/* Module: rnco3260.dll
   Function: FUN_63716de0
   Address: 63716de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63716de0(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,byte *param_5,
            byte *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_20;
  byte *local_18;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  if (param_6 != (byte *)0x0) {
    local_8 = (uint)*param_5;
    uVar3 = (uint)*param_1;
    pbVar9 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
    local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
    pbVar4 = param_5 + 1;
    local_c = param_1 + 2;
    param_1 = param_6 + -1;
    pbVar8 = param_3 + 1;
    bVar1 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar9 & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*local_10) >> 4)
             >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar3) +
                     (uint)*(byte *)(&DAT_637956a0 + local_8) & 0x1e0) << 3];
    uVar3 = (uint)bVar1;
    *param_3 = *param_5;
    *param_2 = bVar1;
    pbVar6 = param_2 + 1;
    if (1 < (int)param_1) {
      param_2 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1);
      local_18 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2);
      param_3 = (byte *)(&DAT_637956a0 + uVar3);
      local_20 = (uint)param_1 >> 1;
      param_5 = (byte *)(&DAT_637956a0 + local_8);
      param_6 = pbVar6;
      do {
        bVar1 = *pbVar4;
        uVar3 = (uint)bVar1;
        *pbVar8 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*local_10
                              ) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar9 & 0x1e0)
                   >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*param_5 & 0x1e0) << 3];
        pbVar8[1] = bVar1;
        uVar5 = (uint)*local_c;
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar3) &
                 0x1e0) << 3];
        uVar5 = (uint)bVar1;
        *param_6 = (&DAT_63795aa0)
                   [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_18 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >>
                    1 | ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*param_3 & 0x1e0) << 3];
        param_6[1] = bVar1;
        local_8 = (uint)pbVar4[1];
        pbVar9 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
        local_10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
        param_5 = (byte *)(&DAT_637956a0 + local_8);
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar9 & 0x1e0)
                 >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*param_5 & 0x1e0) << 3];
        pbVar8[3] = pbVar4[1];
        pbVar8[2] = bVar1;
        uVar3 = (uint)local_c[2];
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*local_10)
                       >> 4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar9 &
                              0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*param_5 & 0x1e0) << 3];
        uVar3 = (uint)bVar1;
        param_3 = (byte *)(&DAT_637956a0 + uVar3);
        param_2 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1);
        local_18 = (byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2);
        pbVar8 = pbVar8 + 4;
        param_1 = param_1 + -2;
        pbVar6 = param_6 + 4;
        local_c = local_c + 4;
        param_6[2] = (&DAT_63795aa0)
                     [(int)((uint)*param_2 + (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) &
                            0x1e0 | (int)((uint)*local_18 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*param_3 & 0x1e0) << 3]
        ;
        param_6[3] = bVar1;
        pbVar4 = pbVar4 + 2;
        local_20 = local_20 - 1;
        param_6 = pbVar6;
      } while (local_20 != 0);
    }
    if (param_1 != (byte *)0x0) {
      bVar1 = *pbVar4;
      uVar7 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4 |
                    (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                    (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) & 0x1e0) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar7) &
               0x1e0) << 3];
      pbVar8[1] = bVar1;
      *pbVar8 = bVar2;
      pbVar8[2] = bVar1;
      uVar5 = (uint)*local_c;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar7) &
               0x1e0) << 3];
      uVar5 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
      pbVar6[1] = bVar1;
      *pbVar6 = bVar2;
      pbVar6[2] = bVar1;
      return;
    }
    *pbVar8 = (byte)local_8;
    *pbVar6 = (byte)uVar3;
  }
  return;
}


