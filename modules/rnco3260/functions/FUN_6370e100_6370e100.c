/* Module: rnco3260.dll
   Function: FUN_6370e100
   Address: 6370e100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370e100(ushort *param_1,short *param_2,ushort *param_3,int param_4,byte *param_5,byte *param_6)

{
  byte *pbVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint uVar5;
  
  pbVar1 = param_6;
  iVar4 = (param_4 * 2 - (param_4 >> 1)) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar8 = (uint)*param_5;
    uVar8 = ((*(byte *)(&DAT_637956a0 + uVar8) & 0xf8) << 5 |
            *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0xfc) << 3 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2) >> 3);
    param_6 = param_5 + 1;
    param_5 = (byte *)(param_4 - iVar4);
    psVar10 = param_2;
    psVar2 = (short *)(param_4 >> 1);
    if (param_5 != (byte *)0x0) {
      do {
        param_2 = psVar2;
        uVar7 = (ushort)uVar8;
        sVar6 = ((ushort)((*param_1 ^ uVar8) >> 1) & 0x7bef) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          *psVar10 = sVar6;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
          psVar10 = psVar10 + 1;
          param_5 = param_5 + -1;
          if (param_5 == (byte *)0x0) goto joined_r0x6370e37e;
          param_2 = param_2 + -(int)pbVar1;
        } while (-1 < (int)param_2);
        param_2 = (short *)((int)param_2 + param_4);
        uVar5 = (uint)*param_6;
        uVar5 = ((*(byte *)(&DAT_637956a0 + uVar5) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0xfc) << 3 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) >> 3);
        uVar3 = (ushort)uVar5;
        uVar8 = ((uVar5 ^ uVar8) >> 1 & 0x7bef) + (uVar5 & uVar8);
        uVar7 = (ushort)uVar8;
        sVar6 = ((ushort)((*param_1 ^ uVar8) >> 1) & 0x7bef) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          param_1 = param_1 + 1;
          *psVar10 = sVar6;
          param_3 = param_3 + 1;
          psVar10 = psVar10 + 1;
          param_5 = param_5 + -1;
          if (param_5 == (byte *)0x0) goto joined_r0x6370e37e;
          param_2 = param_2 + -(int)pbVar1;
        } while (-1 < (int)param_2);
        iVar9 = (int)param_2 + param_4;
        sVar6 = ((ushort)((*param_1 ^ uVar5) >> 1) & 0x7bef) + (*param_1 & uVar3);
        do {
          *param_3 = uVar3;
          param_1 = param_1 + 1;
          *psVar10 = sVar6;
          param_3 = param_3 + 1;
          psVar10 = psVar10 + 1;
          param_5 = param_5 + -1;
          uVar7 = uVar3;
          if (param_5 == (byte *)0x0) goto joined_r0x6370e37e;
          iVar9 = iVar9 + (int)pbVar1 * -2;
        } while (-1 < iVar9);
        param_2 = (short *)(iVar9 + param_4);
        uVar8 = (uint)param_6[1];
        param_6 = param_6 + 2;
        uVar8 = ((*(byte *)(&DAT_637956a0 + uVar8) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1) & 0xfc) << 3 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2) >> 3);
        uVar5 = (uVar5 & uVar8) + ((uVar5 ^ uVar8) >> 1 & 0x7bef);
        uVar7 = (ushort)uVar5;
        sVar6 = ((ushort)((*param_1 ^ uVar5) >> 1) & 0x7bef) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          param_1 = param_1 + 1;
          *psVar10 = sVar6;
          param_3 = param_3 + 1;
          psVar10 = psVar10 + 1;
          param_5 = param_5 + -1;
          if (param_5 == (byte *)0x0) goto joined_r0x6370e37e;
          param_2 = param_2 + -(int)pbVar1;
        } while (-1 < (int)param_2);
        psVar2 = (short *)((int)param_2 + param_4);
      } while( true );
    }
    sVar6 = (short)param_4;
    uVar7 = (ushort)uVar8;
joined_r0x6370e37e:
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_3 = uVar7;
      *psVar10 = sVar6;
      param_3 = param_3 + 1;
      psVar10 = psVar10 + 1;
    }
  }
  return;
}


