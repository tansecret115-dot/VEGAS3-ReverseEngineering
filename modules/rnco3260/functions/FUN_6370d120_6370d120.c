/* Module: rnco3260.dll
   Function: FUN_6370d120
   Address: 6370d120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370d120(ushort *param_1,short *param_2,ushort *param_3,int param_4,ushort *param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  ushort uVar8;
  short *psVar10;
  ushort *puVar11;
  ushort *local_8;
  uint uVar9;
  
  iVar5 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 != 0) {
    uVar1 = *param_5;
    local_8 = param_5 + 1;
    psVar10 = param_2;
    puVar11 = param_3;
    psVar3 = (short *)(param_4 >> 1);
    puVar4 = (ushort *)(param_4 - iVar5);
    if ((ushort *)(param_4 - iVar5) != (ushort *)0x0) {
      do {
        param_3 = puVar4;
        param_2 = psVar3;
        sVar7 = ((*param_1 ^ uVar1) >> 1 & 0x7bef) + (*param_1 & uVar1);
        do {
          *puVar11 = uVar1;
          *psVar10 = sVar7;
          param_1 = param_1 + 1;
          puVar11 = puVar11 + 1;
          psVar10 = psVar10 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          uVar8 = uVar1;
          if (param_3 == (ushort *)0x0) goto joined_r0x6370d305;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        param_2 = (short *)((int)param_2 + param_4);
        uVar2 = *local_8;
        uVar9 = ((ushort)((uVar2 ^ uVar1) >> 1) & 0x7bef) + (uint)(uVar2 & uVar1);
        uVar8 = (ushort)uVar9;
        sVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x7bef) + (*param_1 & uVar8);
        do {
          *puVar11 = uVar8;
          param_1 = param_1 + 1;
          *psVar10 = sVar7;
          puVar11 = puVar11 + 1;
          psVar10 = psVar10 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370d305;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        iVar6 = (int)param_2 + param_4;
        sVar7 = ((*param_1 ^ uVar2) >> 1 & 0x7bef) + (*param_1 & uVar2);
        do {
          *puVar11 = uVar2;
          param_1 = param_1 + 1;
          *psVar10 = sVar7;
          puVar11 = puVar11 + 1;
          psVar10 = psVar10 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          uVar8 = uVar2;
          if (param_3 == (ushort *)0x0) goto joined_r0x6370d305;
          iVar6 = iVar6 + param_6 * -2;
        } while (-1 < iVar6);
        param_2 = (short *)(iVar6 + param_4);
        uVar1 = local_8[1];
        local_8 = local_8 + 2;
        uVar9 = (uint)(uVar2 & uVar1) + ((ushort)((uVar2 ^ uVar1) >> 1) & 0x7bef);
        uVar8 = (ushort)uVar9;
        sVar7 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x7bef) + (*param_1 & uVar8);
        do {
          *puVar11 = uVar8;
          param_1 = param_1 + 1;
          *psVar10 = sVar7;
          puVar11 = puVar11 + 1;
          psVar10 = psVar10 + 1;
          param_3 = (ushort *)((int)param_3 + -1);
          if (param_3 == (ushort *)0x0) goto joined_r0x6370d305;
          param_2 = param_2 + -param_6;
        } while (-1 < (int)param_2);
        psVar3 = (short *)((int)param_2 + param_4);
        puVar4 = param_3;
      } while( true );
    }
    sVar7 = (short)param_4;
    uVar8 = uVar1;
joined_r0x6370d305:
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = uVar8;
      *psVar10 = sVar7;
      psVar10 = psVar10 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}


