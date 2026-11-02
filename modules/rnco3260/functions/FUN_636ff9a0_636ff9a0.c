/* Module: rnco3260.dll
   Function: FUN_636ff9a0
   Address: 636ff9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ff9a0(byte *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_8;
  
  if (param_4 != 0) {
    pbVar6 = param_3 + 3;
    param_4 = param_4 - 1;
    pbVar7 = param_1 + 1;
    uVar4 = (uint)(byte)(&DAT_63795aa0)
                        [(uint)(*param_3 >> 4) | param_3[1] & 0xf0 | (param_3[2] & 0xf0) << 4];
    *param_1 = (&DAT_63795aa0)[(uint)(*param_3 >> 4) | param_3[1] & 0xf0 | (param_3[2] & 0xf0) << 4]
    ;
    if (1 < (int)param_4) {
      param_3 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
      pbVar8 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
      local_8 = param_4 >> 1;
      pbVar5 = (byte *)(&DAT_637956a0 + uVar4);
      param_1 = pbVar7;
      do {
        uVar3 = (uint)(byte)(&DAT_63795aa0)
                            [(uint)(*pbVar6 >> 4) | pbVar6[1] & 0xf0 | (pbVar6[2] & 0xf0) << 4];
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar8 & 0x1e0 |
                      (int)((uint)*param_3 + (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >>
                      4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*pbVar5 & 0x1e0) << 3];
        param_1[1] = (&DAT_63795aa0)
                     [(uint)(*pbVar6 >> 4) | pbVar6[1] & 0xf0 | (pbVar6[2] & 0xf0) << 4];
        *param_1 = bVar1;
        bVar1 = (&DAT_63795aa0)[pbVar6[4] & 0xf0 | (uint)(pbVar6[3] >> 4) | (pbVar6[5] & 0xf0) << 4]
        ;
        uVar4 = (uint)bVar1;
        param_3 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
        pbVar8 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
        pbVar5 = (byte *)(&DAT_637956a0 + uVar4);
        pbVar6 = pbVar6 + 6;
        pbVar7 = param_1 + 4;
        param_1[2] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) + (uint)*pbVar8 &
                            0x1e0 | (int)((uint)*param_3 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*pbVar5 & 0x1e0) << 3];
        param_1[3] = bVar1;
        param_4 = param_4 - 2;
        local_8 = local_8 - 1;
        param_1 = pbVar7;
      } while (local_8 != 0);
    }
    if (param_4 != 0) {
      bVar1 = (&DAT_63795aa0)[(uint)(*pbVar6 >> 4) | pbVar6[1] & 0xf0 | (pbVar6[2] & 0xf0) << 4];
      uVar3 = (uint)bVar1;
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
    *pbVar7 = (byte)uVar4;
  }
  return;
}


