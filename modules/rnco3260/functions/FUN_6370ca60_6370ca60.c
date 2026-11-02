/* Module: rnco3260.dll
   Function: FUN_6370ca60
   Address: 6370ca60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370ca60(ushort *param_1,short *param_2,ushort *param_3,int param_4,byte *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar9;
  
  iVar5 = param_6;
  iVar14 = param_4 >> 1;
  iVar6 = (param_4 * 2 - iVar14) / (param_6 * 2);
  if (param_4 != 0) {
    pbVar1 = param_5 + 2;
    pbVar2 = param_5 + 1;
    bVar4 = *param_5;
    param_5 = param_5 + 3;
    uVar11 = ((*pbVar1 & 0xf8) << 5 | *pbVar2 & 0xfc) << 3 | (uint)(bVar4 >> 3);
    param_6 = param_4 - iVar6;
    puVar12 = param_3;
    puVar13 = (ushort *)param_2;
    if (param_6 != 0) {
      do {
        uVar10 = (ushort)uVar11;
        uVar7 = ((ushort)((*param_1 ^ uVar11) >> 1) & 0x7bef) + (*param_1 & uVar10);
        do {
          *puVar12 = uVar10;
          param_1 = param_1 + 1;
          *puVar13 = uVar7;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
          param_6 = param_6 + -1;
          if (param_6 == 0) goto joined_r0x6370ccac;
          iVar14 = iVar14 + iVar5 * -2;
        } while (-1 < iVar14);
        param_2 = (short *)(iVar14 + param_4);
        uVar9 = (param_5[1] & 0xfc | (param_5[2] & 0xf8) << 5) << 3 | (uint)(*param_5 >> 3);
        uVar8 = (ushort)uVar9;
        uVar11 = ((uVar9 ^ uVar11) >> 1 & 0x7bef) + (uVar9 & uVar11);
        uVar10 = (ushort)uVar11;
        uVar7 = ((ushort)((*param_1 ^ uVar11) >> 1) & 0x7bef) + (*param_1 & uVar10);
        param_3 = puVar13;
        do {
          *puVar12 = uVar10;
          param_1 = param_1 + 1;
          *param_3 = uVar7;
          param_3 = param_3 + 1;
          puVar12 = puVar12 + 1;
          param_6 = param_6 + -1;
          puVar13 = param_3;
          if (param_6 == 0) goto joined_r0x6370ccac;
          param_2 = param_2 + -iVar5;
        } while (-1 < (int)param_2);
        iVar14 = (int)param_2 + param_4;
        uVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x7bef) + (*param_1 & uVar8);
        do {
          *puVar12 = uVar8;
          param_1 = param_1 + 1;
          puVar12 = puVar12 + 1;
          *param_3 = uVar7;
          param_3 = param_3 + 1;
          param_6 = param_6 + -1;
          puVar13 = param_3;
          uVar10 = uVar8;
          if (param_6 == 0) goto joined_r0x6370ccac;
          iVar14 = iVar14 + iVar5 * -2;
        } while (-1 < iVar14);
        param_2 = (short *)(iVar14 + param_4);
        pbVar1 = param_5 + 3;
        pbVar2 = param_5 + 5;
        pbVar3 = param_5 + 4;
        param_5 = param_5 + 6;
        uVar11 = ((*pbVar2 & 0xf8) << 5 | *pbVar3 & 0xfc) << 3 | (uint)(*pbVar1 >> 3);
        uVar9 = (uVar9 & uVar11) + ((uVar9 ^ uVar11) >> 1 & 0x7bef);
        uVar10 = (ushort)uVar9;
        uVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x7bef) + (*param_1 & uVar10);
        do {
          *puVar12 = uVar10;
          param_1 = param_1 + 1;
          puVar12 = puVar12 + 1;
          *param_3 = uVar7;
          puVar13 = param_3 + 1;
          param_6 = param_6 + -1;
          if (param_6 == 0) goto joined_r0x6370ccac;
          param_2 = param_2 + -iVar5;
          param_3 = puVar13;
        } while (-1 < (int)param_2);
        iVar14 = (int)param_2 + param_4;
      } while( true );
    }
    uVar7 = (ushort)param_4;
    uVar10 = (ushort)uVar11;
joined_r0x6370ccac:
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = uVar10;
      *puVar13 = uVar7;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  return;
}


