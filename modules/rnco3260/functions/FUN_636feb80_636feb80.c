/* Module: rnco3260.dll
   Function: FUN_636feb80
   Address: 636feb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636feb80(byte *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_c;
  
  if (param_4 != 0) {
    uVar4 = *param_3;
    puVar6 = param_3 + 1;
    param_4 = param_4 - 1;
    uVar5 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
    *param_1 = (&DAT_63795aa0)
               [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
    pbVar7 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (uint *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
      param_1 = (byte *)(&DAT_637956a0 + uVar5);
      local_c = param_4 >> 1;
      pbVar8 = pbVar7;
      do {
        uVar4 = *puVar6;
        uVar3 = (uint)(byte)(&DAT_63795aa0)
                            [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4]
        ;
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                      (int)((uint)(byte)*param_3 +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*param_1 + (uint)*(byte *)(&DAT_637956a0 + uVar3) & 0x1e0) << 3];
        pbVar8[1] = (&DAT_63795aa0)
                    [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
        *pbVar8 = bVar1;
        uVar4 = puVar6[1];
        bVar1 = (&DAT_63795aa0)
                [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
        uVar5 = (uint)bVar1;
        param_3 = (uint *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
        param_1 = (byte *)(&DAT_637956a0 + uVar5);
        pbVar7 = pbVar8 + 4;
        param_4 = param_4 - 2;
        pbVar8[2] = (&DAT_63795aa0)
                    [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                          (int)((uint)(byte)*param_3 +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                     ((uint)*param_1 + (uint)*(byte *)(&DAT_637956a0 + uVar3) & 0x1e0) << 3];
        pbVar8[3] = bVar1;
        puVar6 = puVar6 + 2;
        local_c = local_c - 1;
        pbVar8 = pbVar7;
      } while (local_c != 0);
    }
    if (param_4 != 0) {
      uVar4 = *puVar6;
      bVar1 = (&DAT_63795aa0)
              [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      uVar4 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
      pbVar7[1] = bVar1;
      *pbVar7 = bVar2;
      pbVar7[2] = bVar1;
      return;
    }
    *pbVar7 = (byte)uVar5;
  }
  return;
}


