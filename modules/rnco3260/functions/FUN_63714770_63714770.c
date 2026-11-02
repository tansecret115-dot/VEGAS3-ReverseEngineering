/* Module: rnco3260.dll
   Function: FUN_63714770
   Address: 63714770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63714770(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  pbVar3 = param_3;
  for (param_3 = (byte *)param_4;
      ((((uint)pbVar3 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_3 != (byte *)0x0));
      param_3 = param_3 + -1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
    *pbVar3 = (&DAT_63795aa0)
              [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
    uVar4 = (uint)*param_1;
    param_1 = param_1 + 1;
    *param_2 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar2) &
                0x1e0) << 3];
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  puVar5 = param_2;
  if (3 < (int)param_3) {
    param_4 = (uint)param_3 >> 2;
    do {
      uVar1 = *param_5;
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      *pbVar3 = (&DAT_63795aa0)
                [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      uVar4 = (uint)*param_1;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar2) &
                  0x1e0) << 3];
      uVar1 = param_5[1];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      pbVar3[1] = (&DAT_63795aa0)
                  [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      uVar4 = (uint)param_1[1];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      uVar1 = param_5[2];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      pbVar3[2] = (&DAT_63795aa0)
                  [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      uVar4 = (uint)param_1[2];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      uVar1 = param_5[3];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar1 & 0x1e | uVar1 >> 2 & 0x1e0) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      pbVar3[3] = (&DAT_63795aa0)
                  [(uVar1 & 0x1e | uVar1 >> 2 & 0x1e0) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
      param_5 = param_5 + 4;
      uVar4 = (uint)param_1[3];
      pbVar3 = pbVar3 + 4;
      puVar5 = param_2 + 4;
      param_2[3] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar2)
                    & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_3 = param_3 + -4;
      param_4 = param_4 - 1;
      param_2 = puVar5;
    } while (param_4 != 0);
  }
  for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar1 & 0x1e | uVar1 >> 2 & 0x1e0) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
    *pbVar3 = (&DAT_63795aa0)
              [(uVar1 & 0x1e | uVar1 >> 2 & 0x1e0) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
    uVar4 = (uint)*param_1;
    param_1 = param_1 + 1;
    *puVar5 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
    pbVar3 = pbVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


