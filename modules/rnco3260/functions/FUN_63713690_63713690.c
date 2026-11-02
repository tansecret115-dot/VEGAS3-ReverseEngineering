/* Module: rnco3260.dll
   Function: FUN_63713690
   Address: 63713690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63713690(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  pbVar5 = param_3;
  pbVar4 = param_5;
  for (param_3 = (byte *)param_4;
      ((((uint)pbVar5 & 3) != 0 && (((uint)pbVar4 & 3) != 0)) && (param_3 != (byte *)0x0));
      param_3 = param_3 + -1) {
    uVar6 = (uint)(byte)(&DAT_63795aa0)
                        [(uint)(*pbVar4 >> 4) | pbVar4[1] & 0xf0 | (pbVar4[2] & 0xf0) << 4];
    *pbVar5 = (&DAT_63795aa0)[(uint)(*pbVar4 >> 4) | pbVar4[1] & 0xf0 | (pbVar4[2] & 0xf0) << 4];
    uVar7 = (uint)*param_1;
    param_1 = param_1 + 1;
    *param_2 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar7) &
                0x1e0) << 3];
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 3;
  }
  puVar8 = param_2;
  if (3 < (int)param_3) {
    param_5 = (byte *)((uint)param_3 >> 2);
    do {
      uVar6 = (uint)(byte)(&DAT_63795aa0)
                          [pbVar4[1] & 0xf0 | (uint)(*pbVar4 >> 4) | (pbVar4[2] & 0xf0) << 4];
      *pbVar5 = (&DAT_63795aa0)[pbVar4[1] & 0xf0 | (uint)(*pbVar4 >> 4) | (pbVar4[2] & 0xf0) << 4];
      uVar7 = (uint)*param_1;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar7) &
                  0x1e0) << 3];
      uVar6 = (uint)(byte)(&DAT_63795aa0)
                          [pbVar4[4] & 0xf0 | (uint)(pbVar4[3] >> 4) | (pbVar4[5] & 0xf0) << 4];
      pbVar5[1] = (&DAT_63795aa0)
                  [pbVar4[4] & 0xf0 | (uint)(pbVar4[3] >> 4) | (pbVar4[5] & 0xf0) << 4];
      uVar7 = (uint)param_1[1];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar6)
                    & 0x1e0) << 3];
      uVar6 = (uint)(byte)(&DAT_63795aa0)
                          [pbVar4[7] & 0xf0 | (uint)(pbVar4[6] >> 4) | (pbVar4[8] & 0xf0) << 4];
      pbVar5[2] = (&DAT_63795aa0)
                  [pbVar4[7] & 0xf0 | (uint)(pbVar4[6] >> 4) | (pbVar4[8] & 0xf0) << 4];
      uVar7 = (uint)param_1[2];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar6)
                    & 0x1e0) << 3];
      uVar6 = (uint)(byte)(&DAT_63795aa0)
                          [pbVar4[10] & 0xf0 | (uint)(pbVar4[9] >> 4) | (pbVar4[0xb] & 0xf0) << 4];
      pbVar5[3] = (&DAT_63795aa0)
                  [pbVar4[10] & 0xf0 | (uint)(pbVar4[9] >> 4) | (pbVar4[0xb] & 0xf0) << 4];
      uVar7 = (uint)param_1[3];
      pbVar4 = pbVar4 + 0xc;
      pbVar5 = pbVar5 + 4;
      puVar8 = param_2 + 4;
      param_2[3] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar6)
                    & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_3 = param_3 + -4;
      param_5 = param_5 + -1;
      param_2 = puVar8;
    } while (param_5 != (byte *)0x0);
  }
  for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
    pbVar1 = pbVar4 + 1;
    bVar3 = *pbVar4;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    uVar6 = (uint)(byte)(&DAT_63795aa0)[*pbVar1 & 0xf0 | (uint)(bVar3 >> 4) | (*pbVar2 & 0xf0) << 4]
    ;
    *pbVar5 = (&DAT_63795aa0)[*pbVar1 & 0xf0 | (uint)(bVar3 >> 4) | (*pbVar2 & 0xf0) << 4];
    uVar7 = (uint)*param_1;
    param_1 = param_1 + 1;
    *puVar8 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar7) &
               0x1e0) << 3];
    pbVar5 = pbVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}


