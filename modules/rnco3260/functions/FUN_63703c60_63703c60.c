/* Module: rnco3260.dll
   Function: FUN_63703c60
   Address: 63703c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703c60(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 != 0) {
    uVar4 = *param_5;
    param_5 = param_5 + 1;
    uVar5 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
    piVar8 = param_2;
    puVar10 = param_3;
    piVar1 = (int *)(param_4 >> 1);
    puVar2 = (uint *)(param_4 - iVar3);
    iVar9 = param_4;
    uVar4 = uVar5;
    if ((uint *)(param_4 - iVar3) != (uint *)0x0) {
      do {
        param_3 = puVar2;
        param_2 = piVar1;
        iVar9 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
        do {
          *puVar10 = uVar5;
          *piVar8 = iVar9;
          param_1 = param_1 + 1;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar4 = uVar5;
          if (param_3 == (uint *)0x0) goto joined_r0x63703e84;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        param_2 = (int *)((int)param_2 + param_4);
        uVar4 = *param_5;
        uVar7 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
        uVar4 = ((uVar7 ^ uVar5) >> 1 & 0x7f7f7f) + (uVar7 & uVar5);
        iVar9 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *puVar10 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x63703e84;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar6 = (int)param_2 + param_4;
        iVar9 = ((*param_1 ^ uVar7) >> 1 & 0x7f7f7f) + (*param_1 & uVar7);
        do {
          *puVar10 = uVar7;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar4 = uVar7;
          if (param_3 == (uint *)0x0) goto joined_r0x63703e84;
          iVar6 = iVar6 + param_6 * -2;
        } while (-1 < iVar6);
        param_2 = (int *)(iVar6 + param_4);
        uVar4 = param_5[1];
        param_5 = param_5 + 2;
        uVar5 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
        uVar4 = (uVar7 & uVar5) + ((uVar7 ^ uVar5) >> 1 & 0x7f7f7f);
        iVar9 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *puVar10 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar9;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x63703e84;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        piVar1 = (int *)((int)param_2 + param_4);
        puVar2 = param_3;
      } while( true );
    }
joined_r0x63703e84:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = uVar4;
      *piVar8 = iVar9;
      piVar8 = piVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return;
}


