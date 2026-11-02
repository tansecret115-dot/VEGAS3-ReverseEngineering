/* Module: rnco3260.dll
   Function: FUN_63715e40
   Address: 63715e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63715e40(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,ushort *param_5,
            byte *param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_c;
  uint local_8;
  
  if (param_6 != (byte *)0x0) {
    uVar5 = (uint)*param_5;
    puVar6 = param_5 + 1;
    local_8 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar5 & 0x1e | (uVar5 & 0x3c0) >> 1) >> 1 | ((uVar5 & 0x7800) >> 7) << 4
                          ];
    uVar4 = (uint)*param_1;
    pbVar10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
    local_18 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
    param_5 = (ushort *)(&DAT_637956a0 + local_8);
    local_c = param_1 + 2;
    param_1 = param_6 + -1;
    pbVar9 = param_3 + 1;
    bVar1 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) + (uint)*pbVar10 & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*local_18) >> 4)
             >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)(byte)*param_5 & 0x1e0) << 3];
    uVar4 = (uint)bVar1;
    *param_3 = (&DAT_63795aa0)
               [(uVar5 & 0x1e | (uVar5 & 0x3c0) >> 1) >> 1 | ((uVar5 & 0x7800) >> 7) << 4];
    *param_2 = bVar1;
    pbVar8 = param_2 + 1;
    if (1 < (int)param_1) {
      local_1c = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
      local_20 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
      param_3 = (byte *)(&DAT_637956a0 + uVar4);
      local_24 = (uint)param_1 >> 1;
      param_6 = pbVar8;
      do {
        uVar5 = (uint)*puVar6;
        bVar1 = (&DAT_63795aa0)
                [(uVar5 & 0x1e | (uVar5 & 0x3c0) >> 1) >> 1 | ((uVar5 & 0x7800) >> 7) << 4];
        uVar5 = (uint)bVar1;
        *pbVar9 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) + (uint)*pbVar10 &
                         0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                                      (uint)*local_18) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)(byte)*param_5 & 0x1e0) << 3];
        pbVar9[1] = bVar1;
        uVar4 = (uint)*local_c;
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
                 0x1e0) << 3];
        uVar7 = (uint)bVar1;
        *param_6 = (&DAT_63795aa0)
                   [(int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) &
                          0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                                       (uint)*local_20) >> 4) >> 1 |
                    ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar7) & 0x1e0) << 3];
        param_6[1] = bVar1;
        uVar3 = puVar6[1];
        bVar1 = (&DAT_63795aa0)
                [(uVar3 & 0x1e | (uVar3 & 0x3c0) >> 1) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
        local_8 = (uint)bVar1;
        pbVar10 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
        local_18 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
        param_5 = (ushort *)(&DAT_637956a0 + local_8);
        pbVar9[2] = (&DAT_63795aa0)
                    [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) & 0x1e0 |
                          (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                               (uint)*local_18) >> 4) >> 1 |
                     ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)(byte)*param_5 & 0x1e0) << 3];
        pbVar9[3] = bVar1;
        uVar5 = (uint)local_c[2];
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) + (uint)*local_18)
                       >> 4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) + (uint)*pbVar10 &
                              0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)(byte)*param_5 & 0x1e0) << 3];
        uVar4 = (uint)bVar1;
        param_3 = (byte *)(&DAT_637956a0 + uVar4);
        local_1c = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
        local_20 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
        param_1 = param_1 + -2;
        pbVar8 = param_6 + 4;
        local_c = local_c + 4;
        param_6[2] = (&DAT_63795aa0)
                     [(int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) &
                            0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                                         (uint)*local_20) >> 4) >> 1 |
                      ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar7) & 0x1e0) << 3];
        param_6[3] = bVar1;
        puVar6 = puVar6 + 2;
        pbVar9 = pbVar9 + 4;
        local_24 = local_24 - 1;
        param_6 = pbVar8;
      } while (local_24 != 0);
    }
    if (param_1 != (byte *)0x0) {
      uVar5 = (uint)*puVar6;
      bVar1 = (&DAT_63795aa0)
              [(uVar5 & 0x1e | (uVar5 & 0x3c0) >> 1) >> 1 | ((uVar5 & 0x7800) >> 7) << 4];
      uVar5 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4 |
                    (uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                    (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
      pbVar9[1] = bVar1;
      *pbVar9 = bVar2;
      pbVar9[2] = bVar1;
      uVar7 = (uint)*local_c;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
      uVar5 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
      pbVar8[1] = bVar1;
      *pbVar8 = bVar2;
      pbVar8[2] = bVar1;
      return;
    }
    *pbVar9 = (byte)local_8;
    *pbVar8 = (byte)uVar4;
  }
  return;
}


