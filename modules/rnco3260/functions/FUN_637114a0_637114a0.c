/* Module: rnco3260.dll
   Function: FUN_637114a0
   Address: 637114a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637114a0(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = (uint *)param_4;
  puVar3 = param_5;
  while (((param_5 = puVar1, ((uint)param_3 & 3) != 0 && (((uint)puVar3 & 3) != 0)) &&
         (param_5 != (uint *)0x0))) {
    uVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
    *param_3 = (&DAT_63795aa0)
               [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
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
    param_3 = param_3 + 1;
    puVar1 = (uint *)((int)param_5 - 1);
  }
  puVar5 = param_2;
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    do {
      uVar4 = *puVar3;
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      *param_3 = (&DAT_63795aa0)
                 [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      uVar4 = (uint)*param_1;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar2) &
                  0x1e0) << 3];
      uVar4 = puVar3[1];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      param_3[1] = (&DAT_63795aa0)
                   [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      uVar4 = (uint)param_1[1];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      uVar4 = puVar3[2];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      param_3[2] = (&DAT_63795aa0)
                   [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      uVar4 = (uint)param_1[2];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      uVar4 = puVar3[3];
      uVar2 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      param_3[3] = (&DAT_63795aa0)
                   [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
      puVar3 = puVar3 + 4;
      param_3 = param_3 + 4;
      uVar4 = (uint)param_1[3];
      puVar5 = param_2 + 4;
      param_2[3] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_5 = param_5 + -1;
      param_4 = param_4 - 1;
      param_2 = puVar5;
    } while (param_4 != 0);
  }
  for (; param_5 != (uint *)0x0; param_5 = (uint *)((int)param_5 - 1)) {
    uVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
    *param_3 = (&DAT_63795aa0)
               [(uVar4 >> 4 & 0xf00 | uVar4 & 0xf0) >> 4 | (uVar4 >> 0x10 & 0xf0) << 4];
    uVar4 = (uint)*param_1;
    param_1 = param_1 + 1;
    *puVar5 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


