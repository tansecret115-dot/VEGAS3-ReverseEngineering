/* Module: rnco3260.dll
   Function: FUN_63716960
   Address: 63716960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63716960(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  pbVar1 = param_3;
  for (param_3 = (byte *)param_4;
      ((((uint)pbVar1 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_3 != (byte *)0x0));
      param_3 = param_3 + -1) {
    uVar4 = (uint)*param_5;
    *pbVar1 = *param_5;
    uVar5 = (uint)*param_1;
    param_5 = param_5 + 1;
    pbVar1 = pbVar1 + 1;
    param_1 = param_1 + 1;
    *param_2 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
                0x1e0) << 3];
    param_2 = param_2 + 1;
  }
  puVar6 = param_2;
  if (3 < (int)param_3) {
    param_4 = (uint)param_3 >> 2;
    pbVar2 = pbVar1;
    pbVar3 = param_5;
    do {
      uVar4 = (uint)*pbVar3;
      *pbVar2 = *pbVar3;
      uVar5 = (uint)*param_1;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
                  0x1e0) << 3];
      uVar4 = (uint)pbVar3[1];
      pbVar2[1] = pbVar3[1];
      uVar5 = (uint)param_1[1];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5)
                    & 0x1e0) << 3];
      uVar4 = (uint)pbVar3[2];
      pbVar2[2] = pbVar3[2];
      uVar5 = (uint)param_1[2];
      param_5 = pbVar3 + 4;
      pbVar1 = pbVar2 + 4;
      param_2[2] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      uVar4 = (uint)pbVar3[3];
      pbVar2[3] = pbVar3[3];
      uVar5 = (uint)param_1[3];
      puVar6 = param_2 + 4;
      param_2[3] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar4)
                    & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_3 = param_3 + -4;
      param_4 = param_4 - 1;
      pbVar2 = pbVar1;
      pbVar3 = param_5;
      param_2 = puVar6;
    } while (param_4 != 0);
  }
  for (; param_3 != (byte *)0x0; param_3 = param_3 + -1) {
    uVar4 = (uint)*param_5;
    *pbVar1 = *param_5;
    uVar5 = (uint)*param_1;
    param_5 = param_5 + 1;
    pbVar1 = pbVar1 + 1;
    param_1 = param_1 + 1;
    *puVar6 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
               0x1e0) << 3];
    puVar6 = puVar6 + 1;
  }
  return;
}


