/* Module: rnco3260.dll
   Function: FUN_63715300
   Address: 63715300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63715300(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,ushort *param_5,
            byte *param_6)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *local_14;
  byte *local_10;
  ushort *local_c;
  
  pbVar3 = param_6;
  iVar5 = (param_4 * 2 - (param_4 >> 1)) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar2 = *param_5;
    local_c = param_5 + 1;
    uVar7 = (uint)(byte)(&DAT_63795aa0)
                        [(uVar2 & 0x1e | uVar2 >> 2 & 0x1e0) >> 1 | ((uVar2 & 0xf000) >> 8) << 4];
    param_5 = (ushort *)(param_4 - iVar5);
    if (param_5 != (ushort *)0x0) {
      local_10 = (byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
      param_6 = (byte *)(&DAT_637956a0 + uVar7);
      pbVar10 = param_1;
      param_1 = (byte *)(param_4 >> 1);
      do {
        local_14 = (byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
        uVar6 = (uint)*pbVar10;
        uVar4 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) + (uint)*local_10 & 0x1e0
                      | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) + (uint)*local_14)
                        >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_6 & 0x1e0) << 3];
        do {
          pbVar10 = pbVar10 + 1;
          *param_3 = (byte)uVar7;
          param_3 = param_3 + 1;
          *param_2 = uVar4;
          param_2 = param_2 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          bVar9 = (byte)uVar7;
          if (param_5 == (ushort *)0x0) goto joined_r0x63715768;
          param_1 = param_1 + (int)pbVar3 * -2;
        } while (-1 < (int)param_1);
        param_1 = param_1 + param_4;
        uVar2 = *local_c;
        bVar1 = (&DAT_63795aa0)
                [(uVar2 & 0x1e | uVar2 >> 2 & 0x1e0) >> 1 | ((uVar2 & 0xf000) >> 8) << 4];
        uVar6 = (uint)bVar1;
        bVar9 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) + (uint)*local_14)
                       >> 4 | (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) + (uint)*local_10
                              & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_6 & 0x1e0) << 3];
        uVar8 = (uint)bVar9;
        uVar7 = (uint)*pbVar10;
        uVar4 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
                 0x1e0) << 3];
        do {
          pbVar10 = pbVar10 + 1;
          *param_3 = bVar9;
          param_3 = param_3 + 1;
          *param_2 = uVar4;
          param_2 = param_2 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          if (param_5 == (ushort *)0x0) goto joined_r0x63715768;
          param_1 = param_1 + (int)pbVar3 * -2;
        } while (-1 < (int)param_1);
        pbVar11 = param_1 + param_4;
        uVar7 = (uint)*pbVar10;
        uVar4 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar7) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
                 0x1e0) << 3];
        do {
          pbVar10 = pbVar10 + 1;
          *param_3 = bVar1;
          param_3 = param_3 + 1;
          *param_2 = uVar4;
          param_2 = param_2 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          bVar9 = bVar1;
          if (param_5 == (ushort *)0x0) goto joined_r0x63715768;
          pbVar11 = pbVar11 + (int)pbVar3 * -2;
        } while (-1 < (int)pbVar11);
        param_1 = pbVar11 + param_4;
        uVar2 = local_c[1];
        local_c = local_c + 2;
        uVar7 = (uint)(byte)(&DAT_63795aa0)
                            [(uVar2 >> 2 & 0x1e0 | uVar2 & 0x1e) >> 1 | ((uVar2 & 0xf000) >> 8) << 4
                            ];
        param_6 = (byte *)(&DAT_637956a0 + uVar7);
        local_10 = (byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
        bVar9 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) + (uint)*local_10 & 0x1e0)
                 >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*param_6 & 0x1e0) << 3];
        uVar8 = (uint)bVar9;
        uVar6 = (uint)*pbVar10;
        uVar4 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar6) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
                 0x1e0) << 3];
        do {
          pbVar10 = pbVar10 + 1;
          *param_3 = bVar9;
          param_3 = param_3 + 1;
          *param_2 = uVar4;
          param_2 = param_2 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          if (param_5 == (ushort *)0x0) goto joined_r0x63715768;
          param_1 = param_1 + (int)pbVar3 * -2;
        } while (-1 < (int)param_1);
        param_1 = param_1 + param_4;
      } while( true );
    }
    uVar4 = (undefined1)param_4;
    bVar9 = (&DAT_63795aa0)[(uVar2 & 0x1e | uVar2 >> 2 & 0x1e0) >> 1 | ((uVar2 & 0xf000) >> 8) << 4]
    ;
joined_r0x63715768:
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_3 = bVar9;
      param_3 = param_3 + 1;
      *param_2 = uVar4;
      param_2 = param_2 + 1;
    }
  }
  return;
}


