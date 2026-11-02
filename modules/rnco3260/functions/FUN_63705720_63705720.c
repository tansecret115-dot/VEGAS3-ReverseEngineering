/* Module: rnco3260.dll
   Function: FUN_63705720
   Address: 63705720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63705720(uint *param_1,int *param_2,uint *param_3,int param_4,ushort *param_5,ushort *param_6)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  puVar1 = param_6;
  iVar3 = (param_4 * 2 - (param_4 >> 1)) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar4 = (uint)*param_5;
    uVar5 = (uVar4 & 0x3e0 | (uVar4 & 0x1f) << 0xd) << 6 | (uVar4 & 0x7c00) >> 7;
    param_6 = param_5 + 1;
    param_5 = (ushort *)(param_4 - iVar3);
    piVar8 = param_2;
    piVar2 = (int *)(param_4 >> 1);
    iVar9 = param_4;
    uVar4 = uVar5;
    if (param_5 != (ushort *)0x0) {
      do {
        param_2 = piVar2;
        iVar9 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
        do {
          *param_3 = uVar5;
          *piVar8 = iVar9;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
          piVar8 = piVar8 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          uVar4 = uVar5;
          if (param_5 == (ushort *)0x0) goto joined_r0x6370595e;
          param_2 = (int *)((int)param_2 + (int)puVar1 * -2);
        } while (-1 < (int)param_2);
        param_2 = (int *)((int)param_2 + param_4);
        uVar4 = (uint)*param_6;
        uVar7 = (uVar4 & 0x3e0 | (uVar4 & 0x1f) << 0xd) << 6 | (uVar4 & 0x7c00) >> 7;
        uVar4 = ((uVar7 ^ uVar5) >> 1) + (uVar7 & uVar5);
        iVar9 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *param_3 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          param_3 = param_3 + 1;
          piVar8 = piVar8 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          if (param_5 == (ushort *)0x0) goto joined_r0x6370595e;
          param_2 = (int *)((int)param_2 + (int)puVar1 * -2);
        } while (-1 < (int)param_2);
        iVar6 = (int)param_2 + param_4;
        iVar9 = ((*param_1 ^ uVar7) >> 1 & 0x7f7f7f) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          param_3 = param_3 + 1;
          piVar8 = piVar8 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          uVar4 = uVar7;
          if (param_5 == (ushort *)0x0) goto joined_r0x6370595e;
          iVar6 = iVar6 + (int)puVar1 * -2;
        } while (-1 < iVar6);
        param_2 = (int *)(iVar6 + param_4);
        uVar4 = (uint)param_6[1];
        param_6 = param_6 + 2;
        uVar5 = (uVar4 & 0x3e0 | (uVar4 & 0x1f) << 0xd) << 6 | (uVar4 & 0x7c00) >> 7;
        uVar4 = (uVar7 & uVar5) + ((uVar7 ^ uVar5) >> 1);
        iVar9 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *param_3 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          param_3 = param_3 + 1;
          piVar8 = piVar8 + 1;
          param_5 = (ushort *)((int)param_5 + -1);
          if (param_5 == (ushort *)0x0) goto joined_r0x6370595e;
          param_2 = (int *)((int)param_2 + (int)puVar1 * -2);
        } while (-1 < (int)param_2);
        piVar2 = (int *)((int)param_2 + param_4);
      } while( true );
    }
joined_r0x6370595e:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = uVar4;
      *piVar8 = iVar9;
      param_3 = param_3 + 1;
      piVar8 = piVar8 + 1;
    }
  }
  return;
}


