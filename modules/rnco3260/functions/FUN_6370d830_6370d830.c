/* Module: rnco3260.dll
   Function: FUN_6370d830
   Address: 6370d830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370d830(ushort *param_1,short *param_2,ushort *param_3,int param_4,ushort *param_5,int param_6)

{
  short *psVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  short *psVar9;
  short sVar10;
  ushort *puVar11;
  uint uVar8;
  
  iVar3 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 != 0) {
    uVar4 = *param_5;
    param_5 = param_5 + 1;
    uVar5 = (uVar4 & 0x7fe0) << 1 | uVar4 & 0x1f;
    psVar9 = param_2;
    puVar11 = param_3;
    psVar1 = (short *)(param_4 >> 1);
    puVar2 = (ushort *)(param_4 - iVar3);
    if ((ushort *)(param_4 - iVar3) != (ushort *)0x0) {
      do {
        param_3 = puVar2;
        param_2 = psVar1;
        uVar4 = (ushort)uVar5;
        sVar10 = ((ushort)((*param_1 ^ uVar5) >> 1) & 0x7bef) + (*param_1 & uVar4);
        do {
          *puVar11 = uVar4;
          *psVar9 = sVar10;
          param_1 = param_1 + 1;
          puVar11 = puVar11 + 1;
          psVar9 = psVar9 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370da4a;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        param_2 = (short *)((int)param_2 + param_4);
        uVar8 = (*param_5 & 0x7fe0) << 1 | *param_5 & 0x1f;
        uVar7 = (ushort)uVar8;
        uVar5 = ((uVar8 ^ uVar5) >> 1 & 0x7bef) + (uVar8 & uVar5);
        uVar4 = (ushort)uVar5;
        sVar10 = ((ushort)((*param_1 ^ uVar5) >> 1) & 0x7bef) + (*param_1 & uVar4);
        do {
          *puVar11 = uVar4;
          param_1 = param_1 + 1;
          *psVar9 = sVar10;
          puVar11 = puVar11 + 1;
          psVar9 = psVar9 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370da4a;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        iVar6 = (int)param_2 + param_4;
        sVar10 = ((ushort)((*param_1 ^ uVar8) >> 1) & 0x7bef) + (*param_1 & uVar7);
        do {
          *puVar11 = uVar7;
          param_1 = param_1 + 1;
          *psVar9 = sVar10;
          puVar11 = puVar11 + 1;
          psVar9 = psVar9 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          uVar4 = uVar7;
          if (param_3 == (ushort *)0x0) goto joined_r0x6370da4a;
          iVar6 = iVar6 + param_6 * -2;
        } while (-1 < iVar6);
        param_2 = (short *)(iVar6 + param_4);
        puVar2 = param_5 + 1;
        param_5 = param_5 + 2;
        uVar5 = (*puVar2 & 0x7fe0) << 1 | *puVar2 & 0x1f;
        uVar8 = (uVar8 & uVar5) + ((uVar8 ^ uVar5) >> 1 & 0x7bef);
        uVar4 = (ushort)uVar8;
        sVar10 = ((ushort)((*param_1 ^ uVar8) >> 1) & 0x7bef) + (*param_1 & uVar4);
        do {
          *puVar11 = uVar4;
          param_1 = param_1 + 1;
          *psVar9 = sVar10;
          puVar11 = puVar11 + 1;
          psVar9 = psVar9 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370da4a;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        psVar1 = (short *)((int)param_2 + param_4);
        puVar2 = param_3;
      } while( true );
    }
    sVar10 = (short)param_4;
    uVar4 = (ushort)uVar5;
joined_r0x6370da4a:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = uVar4;
      *psVar9 = sVar10;
      psVar9 = psVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}


