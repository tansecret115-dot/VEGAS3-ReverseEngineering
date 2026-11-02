/* Module: rnco3260.dll
   Function: FUN_6370fa50
   Address: 6370fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370fa50(ushort *param_1,short *param_2,ushort *param_3,int param_4,byte *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ushort *puVar5;
  int iVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar9;
  
  iVar13 = param_4 >> 1;
  iVar6 = (param_4 * 2 - iVar13) / (param_6 * 2);
  if (param_4 != 0) {
    pbVar1 = param_5 + 2;
    pbVar2 = param_5 + 1;
    bVar4 = *param_5;
    param_5 = param_5 + 3;
    uVar11 = (*pbVar2 & 0xf8 | (*pbVar1 & 0xf8) << 5) << 2 | (uint)(bVar4 >> 3);
    psVar12 = param_2;
    puVar14 = param_3;
    puVar5 = (ushort *)(param_4 - iVar6);
    if ((ushort *)(param_4 - iVar6) != (ushort *)0x0) {
      do {
        param_3 = puVar5;
        uVar10 = (ushort)uVar11;
        sVar7 = ((ushort)((*param_1 ^ uVar11) >> 1) & 0x3def) + (*param_1 & uVar10);
        do {
          *puVar14 = uVar10;
          param_1 = param_1 + 1;
          *psVar12 = sVar7;
          puVar14 = puVar14 + 1;
          psVar12 = psVar12 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370fca1;
          iVar13 = iVar13 + param_6 * -2;
        } while (-1 < iVar13);
        param_2 = (short *)(iVar13 + param_4);
        uVar9 = ((param_5[2] & 0xf8) << 5 | param_5[1] & 0xf8) << 2 | (uint)(*param_5 >> 3);
        uVar8 = (ushort)uVar9;
        uVar11 = ((uVar9 ^ uVar11) >> 1 & 0x3def) + (uVar9 & uVar11);
        uVar10 = (ushort)uVar11;
        sVar7 = ((ushort)((*param_1 ^ uVar11) >> 1) & 0x3def) + (*param_1 & uVar10);
        do {
          *puVar14 = uVar10;
          param_1 = param_1 + 1;
          *psVar12 = sVar7;
          puVar14 = puVar14 + 1;
          psVar12 = psVar12 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370fca1;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        iVar13 = (int)param_2 + param_4;
        sVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x3def) + (*param_1 & uVar8);
        do {
          *puVar14 = uVar8;
          param_1 = param_1 + 1;
          *psVar12 = sVar7;
          puVar14 = puVar14 + 1;
          psVar12 = psVar12 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          uVar10 = uVar8;
          if (param_3 == (ushort *)0x0) goto joined_r0x6370fca1;
          iVar13 = iVar13 + param_6 * -2;
        } while (-1 < iVar13);
        param_2 = (short *)(iVar13 + param_4);
        pbVar1 = param_5 + 3;
        pbVar2 = param_5 + 5;
        pbVar3 = param_5 + 4;
        param_5 = param_5 + 6;
        uVar11 = (*pbVar3 & 0xf8 | (*pbVar2 & 0xf8) << 5) << 2 | (uint)(*pbVar1 >> 3);
        uVar9 = (uVar9 & uVar11) + ((uVar9 ^ uVar11) >> 1 & 0x3def);
        uVar10 = (ushort)uVar9;
        sVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x3def) + (*param_1 & uVar10);
        do {
          *puVar14 = uVar10;
          param_1 = param_1 + 1;
          *psVar12 = sVar7;
          puVar14 = puVar14 + 1;
          psVar12 = psVar12 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370fca1;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        iVar13 = (int)param_2 + param_4;
        puVar5 = param_3;
      } while( true );
    }
    sVar7 = (short)param_4;
    uVar10 = (ushort)uVar11;
joined_r0x6370fca1:
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = uVar10;
      *psVar12 = sVar7;
      psVar12 = psVar12 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  return;
}


