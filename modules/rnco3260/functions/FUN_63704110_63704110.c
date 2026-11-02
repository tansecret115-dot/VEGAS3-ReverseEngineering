/* Module: rnco3260.dll
   Function: FUN_63704110
   Address: 63704110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63704110(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint *local_8;
  
  iVar8 = param_4 >> 1;
  iVar3 = (param_4 * 2 - iVar8) / (param_6 * 2);
  if (param_4 != 0) {
    uVar6 = *param_5;
    local_8 = param_5 + 1;
    piVar7 = param_2;
    puVar9 = param_3;
    puVar2 = (uint *)(param_4 - iVar3);
    uVar5 = uVar6;
    iVar4 = param_4;
    if ((uint *)(param_4 - iVar3) != (uint *)0x0) {
      do {
        param_3 = puVar2;
        iVar4 = ((*param_1 ^ uVar6) >> 1 & 0x7f7f7f) + (*param_1 & uVar6);
        do {
          *puVar9 = uVar6;
          param_1 = param_1 + 1;
          *piVar7 = iVar4;
          puVar9 = puVar9 + 1;
          piVar7 = piVar7 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar5 = uVar6;
          if (param_3 == (uint *)0x0) goto joined_r0x637042d7;
          iVar8 = iVar8 + param_6 * -2;
        } while (-1 < iVar8);
        param_2 = (int *)(iVar8 + param_4);
        uVar1 = *local_8;
        uVar5 = ((uVar1 ^ uVar6) >> 1 & 0x7f7f7f) + (uVar1 & uVar6);
        iVar4 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
        do {
          *puVar9 = uVar5;
          param_1 = param_1 + 1;
          *piVar7 = iVar4;
          puVar9 = puVar9 + 1;
          piVar7 = piVar7 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x637042d7;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar8 = (int)param_2 + param_4;
        iVar4 = ((*param_1 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_1 & uVar1);
        do {
          *puVar9 = uVar1;
          param_1 = param_1 + 1;
          *piVar7 = iVar4;
          puVar9 = puVar9 + 1;
          piVar7 = piVar7 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar5 = uVar1;
          if (param_3 == (uint *)0x0) goto joined_r0x637042d7;
          iVar8 = iVar8 + param_6 * -2;
        } while (-1 < iVar8);
        param_2 = (int *)(iVar8 + param_4);
        uVar6 = local_8[1];
        local_8 = local_8 + 2;
        uVar5 = (uVar1 & uVar6) + ((uVar1 ^ uVar6) >> 1 & 0x7f7f7f);
        iVar4 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
        do {
          *puVar9 = uVar5;
          param_1 = param_1 + 1;
          *piVar7 = iVar4;
          puVar9 = puVar9 + 1;
          piVar7 = piVar7 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x637042d7;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar8 = (int)param_2 + param_4;
        puVar2 = param_3;
      } while( true );
    }
joined_r0x637042d7:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = uVar5;
      *piVar7 = iVar4;
      piVar7 = piVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  return;
}


