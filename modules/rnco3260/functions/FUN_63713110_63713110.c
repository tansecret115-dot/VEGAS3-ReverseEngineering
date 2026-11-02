/* Module: rnco3260.dll
   Function: FUN_63713110
   Address: 63713110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63713110(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,uint *param_5,byte *param_6
            )

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_14;
  byte *local_10;
  uint *local_c;
  
  pbVar2 = param_6;
  iVar4 = (param_4 * 2 - (param_4 >> 1)) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar5 = *param_5;
    local_c = param_5 + 1;
    uVar8 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar5 & 0xf000 | uVar5 >> 0xc & 0xf00) >> 8 | (uVar5 & 0xf0) << 4];
    param_5 = (uint *)(param_4 - iVar4);
    if (param_5 != (uint *)0x0) {
      local_14 = (byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      param_6 = (byte *)(&DAT_637956a0 + uVar8);
      pbVar9 = param_1;
      param_1 = (byte *)(param_4 >> 1);
      do {
        local_10 = (byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
        uVar5 = (uint)*pbVar9;
        uVar3 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) + (uint)*local_10 & 0x1e0
                      | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) + (uint)*local_14)
                        >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*param_6 & 0x1e0) << 3];
        do {
          pbVar9 = pbVar9 + 1;
          *param_3 = (byte)uVar8;
          param_3 = param_3 + 1;
          *param_2 = uVar3;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          bVar7 = (byte)uVar8;
          if (param_5 == (uint *)0x0) goto joined_r0x63713570;
          param_1 = param_1 + (int)pbVar2 * -2;
        } while (-1 < (int)param_1);
        param_1 = param_1 + param_4;
        uVar5 = *local_c;
        bVar1 = (&DAT_63795aa0)[(uVar5 & 0xf000 | uVar5 >> 0xc & 0xf00) >> 8 | (uVar5 & 0xf0) << 4];
        uVar6 = (uint)bVar1;
        bVar7 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) + (uint)*local_10 & 0x1e0
                      | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) + (uint)*local_14)
                        >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_6 & 0x1e0) << 3];
        uVar8 = (uint)bVar7;
        uVar5 = (uint)*pbVar9;
        uVar3 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
                 0x1e0) << 3];
        do {
          pbVar9 = pbVar9 + 1;
          *param_3 = bVar7;
          param_3 = param_3 + 1;
          *param_2 = uVar3;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          if (param_5 == (uint *)0x0) goto joined_r0x63713570;
          param_1 = param_1 + (int)pbVar2 * -2;
        } while (-1 < (int)param_1);
        pbVar10 = param_1 + param_4;
        uVar5 = (uint)*pbVar9;
        uVar3 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
                 0x1e0) << 3];
        do {
          pbVar9 = pbVar9 + 1;
          *param_3 = bVar1;
          param_3 = param_3 + 1;
          *param_2 = uVar3;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          bVar7 = bVar1;
          if (param_5 == (uint *)0x0) goto joined_r0x63713570;
          pbVar10 = pbVar10 + (int)pbVar2 * -2;
        } while (-1 < (int)pbVar10);
        param_1 = pbVar10 + param_4;
        uVar5 = local_c[1];
        local_c = local_c + 2;
        uVar8 = (uint)(byte)(&DAT_63795aa0)
                            [(uVar5 & 0xf000 | uVar5 >> 0xc & 0xf00) >> 8 | (uVar5 & 0xf0) << 4];
        param_6 = (byte *)(&DAT_637956a0 + uVar8);
        local_14 = (byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
        bVar7 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) + (uint)*local_14)
                      >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_6 & 0x1e0) << 3];
        uVar6 = (uint)bVar7;
        uVar5 = (uint)*pbVar9;
        uVar3 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
                 0x1e0) << 3];
        do {
          pbVar9 = pbVar9 + 1;
          *param_3 = bVar7;
          param_3 = param_3 + 1;
          *param_2 = uVar3;
          param_2 = param_2 + 1;
          param_5 = (uint *)((int)param_5 + -1);
          if (param_5 == (uint *)0x0) goto joined_r0x63713570;
          param_1 = param_1 + (int)pbVar2 * -2;
        } while (-1 < (int)param_1);
        param_1 = param_1 + param_4;
      } while( true );
    }
    uVar3 = (undefined1)param_4;
    bVar7 = (&DAT_63795aa0)[(uVar5 & 0xf000 | uVar5 >> 0xc & 0xf00) >> 8 | (uVar5 & 0xf0) << 4];
joined_r0x63713570:
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_3 = bVar7;
      param_3 = param_3 + 1;
      *param_2 = uVar3;
      param_2 = param_2 + 1;
    }
  }
  return;
}


