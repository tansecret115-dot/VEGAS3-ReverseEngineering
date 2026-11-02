/* Module: rnco3260.dll
   Function: FUN_637000e0
   Address: 637000e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_637000e0(byte *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_c;
  
  if (param_4 != 0) {
    uVar3 = *param_3;
    puVar6 = param_3 + 1;
    param_4 = param_4 - 1;
    uVar5 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar3 >> 2 & 0x1e0 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0xf000) >> 8) << 4];
    *param_1 = (&DAT_63795aa0)
               [(uVar3 >> 2 & 0x1e0 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0xf000) >> 8) << 4];
    pbVar8 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (ushort *)(&DAT_637956a0 + uVar5);
      pbVar7 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
      local_c = param_4 >> 1;
      pbVar9 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
      do {
        uVar3 = *puVar6;
        bVar1 = (&DAT_63795aa0)
                [(uVar3 >> 2 & 0x1e0 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0xf000) >> 8) << 4];
        uVar4 = (uint)bVar1;
        *pbVar8 = (&DAT_63795aa0)
                  [(int)((uint)*pbVar7 + (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0
                        | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) + (uint)*pbVar9)
                          >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)(byte)*param_3 & 0x1e0) << 3];
        pbVar8[1] = bVar1;
        uVar3 = puVar6[1];
        bVar1 = (&DAT_63795aa0)
                [(uVar3 >> 2 & 0x1e0 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0xf000) >> 8) << 4];
        uVar5 = (uint)bVar1;
        param_3 = (ushort *)(&DAT_637956a0 + uVar5);
        pbVar7 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
        pbVar9 = (byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
        param_4 = param_4 - 2;
        puVar6 = puVar6 + 2;
        pbVar8[2] = (&DAT_63795aa0)
                    [(int)((uint)*pbVar7 + (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) &
                           0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                                        (uint)*pbVar9) >> 4) >> 1 |
                     ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)(byte)*param_3 & 0x1e0) << 3];
        pbVar8[3] = bVar1;
        pbVar8 = pbVar8 + 4;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (param_4 != 0) {
      uVar3 = *puVar6;
      bVar1 = (&DAT_63795aa0)
              [(uVar3 >> 2 & 0x1e0 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0xf000) >> 8) << 4];
      uVar4 = (uint)bVar1;
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
    *pbVar8 = (byte)uVar5;
  }
  return;
}


