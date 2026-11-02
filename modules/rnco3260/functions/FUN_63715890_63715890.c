/* Module: rnco3260.dll
   Function: FUN_63715890
   Address: 63715890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63715890(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  
  pbVar4 = param_3;
  for (param_3 = (byte *)param_4;
      ((((uint)pbVar4 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_3 != (byte *)0x0));
      param_3 = param_3 + -1) {
    uVar3 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
    *pbVar4 = (&DAT_63795aa0)
              [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
    uVar3 = (uint)*param_1;
    param_1 = param_1 + 1;
    *param_2 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar3) &
                0x1e0) << 3];
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  puVar5 = param_2;
  if (3 < (int)param_3) {
    param_4 = (uint)param_3 >> 2;
    do {
      uVar3 = (uint)*param_5;
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4
                          ];
      *pbVar4 = (&DAT_63795aa0)
                [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
      uVar3 = (uint)*param_1;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar2) &
                  0x1e0) << 3];
      uVar3 = (uint)param_5[1];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4
                          ];
      pbVar4[1] = (&DAT_63795aa0)
                  [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
      uVar3 = (uint)param_1[1];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar3)
                    & 0x1e0) << 3];
      uVar1 = param_5[2];
      uVar3 = (uint)(byte)(&DAT_63795aa0)
                          [((uVar1 & 0x3c0) >> 1 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0x7800) >> 7) << 4
                          ];
      pbVar4[2] = (&DAT_63795aa0)
                  [((uVar1 & 0x3c0) >> 1 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      uVar2 = (uint)param_1[2];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar2)
                    & 0x1e0) << 3];
      uVar1 = param_5[3];
      uVar3 = (uint)(byte)(&DAT_63795aa0)
                          [((uVar1 & 0x3c0) >> 1 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0x7800) >> 7) << 4
                          ];
      pbVar4[3] = (&DAT_63795aa0)
                  [((uVar1 & 0x3c0) >> 1 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
      param_5 = param_5 + 4;
      uVar2 = (uint)param_1[3];
      pbVar4 = pbVar4 + 4;
      puVar5 = param_2 + 4;
      param_2[3] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar3)
                    & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_3 = param_3 + -4;
      param_4 = param_4 - 1;
      param_2 = puVar5;
    } while (param_4 != 0);
  }
  for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
    uVar3 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
    *pbVar4 = (&DAT_63795aa0)
              [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
    uVar3 = (uint)*param_1;
    param_1 = param_1 + 1;
    *puVar5 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar2) &
               0x1e0) << 3];
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


