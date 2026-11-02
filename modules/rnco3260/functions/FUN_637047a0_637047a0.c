/* Module: rnco3260.dll
   Function: FUN_637047a0
   Address: 637047a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637047a0(uint *param_1,int *param_2,uint *param_3,int param_4,undefined1 *param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  uint *local_8;
  
  local_8 = param_1;
  iVar14 = param_4 >> 1;
  iVar8 = (param_4 * 2 - iVar14) / (param_6 * 2);
  if (param_4 != 0) {
    uVar4 = *param_5;
    puVar1 = param_5 + 2;
    puVar2 = param_5 + 1;
    param_5 = param_5 + 3;
    uVar12 = (uint)CONCAT21(CONCAT11(uVar4,*puVar2),*puVar1);
    piVar13 = param_2;
    puVar15 = param_3;
    puVar7 = (uint *)(param_4 - iVar8);
    uVar11 = uVar12;
    iVar9 = param_4;
    if ((uint *)(param_4 - iVar8) != (uint *)0x0) {
      do {
        param_3 = puVar7;
        iVar9 = ((*local_8 ^ uVar12) >> 1 & 0x7f7f7f) + (*local_8 & uVar12);
        do {
          *puVar15 = uVar12;
          local_8 = local_8 + 1;
          *piVar13 = iVar9;
          puVar15 = puVar15 + 1;
          piVar13 = piVar13 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar11 = uVar12;
          if (param_3 == (uint *)0x0) goto joined_r0x637049a8;
          iVar14 = iVar14 + param_6 * -2;
        } while (-1 < iVar14);
        param_2 = (int *)(iVar14 + param_4);
        uVar6 = CONCAT21(CONCAT11(*param_5,param_5[1]),param_5[2]);
        uVar10 = (uint)uVar6;
        uVar11 = ((uVar10 ^ uVar12) >> 1 & 0x7f7f7f) + (uVar10 & uVar12);
        iVar9 = ((*local_8 ^ uVar11) >> 1 & 0x7f7f7f) + (*local_8 & uVar11);
        do {
          *puVar15 = uVar11;
          local_8 = local_8 + 1;
          *piVar13 = iVar9;
          puVar15 = puVar15 + 1;
          piVar13 = piVar13 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x637049a8;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar14 = (int)param_2 + param_4;
        iVar9 = ((*local_8 ^ uVar10) >> 1 & 0x7f7f7f) + (*local_8 & uVar10);
        do {
          *puVar15 = uVar10;
          local_8 = local_8 + 1;
          *piVar13 = iVar9;
          puVar15 = puVar15 + 1;
          piVar13 = piVar13 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar11 = uVar10;
          if (param_3 == (uint *)0x0) goto joined_r0x637049a8;
          iVar14 = iVar14 + param_6 * -2;
        } while (-1 < iVar14);
        param_2 = (int *)(iVar14 + param_4);
        puVar1 = param_5 + 3;
        puVar2 = param_5 + 4;
        puVar3 = param_5 + 5;
        param_5 = param_5 + 6;
        uVar5 = CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
        uVar12 = (uint)uVar5;
        uVar11 = (uint)(uVar6 & uVar5) + ((uint3)((uVar6 ^ uVar5) >> 1) & 0x7f7f7f);
        iVar9 = ((*local_8 ^ uVar11) >> 1 & 0x7f7f7f) + (*local_8 & uVar11);
        do {
          *puVar15 = uVar11;
          local_8 = local_8 + 1;
          *piVar13 = iVar9;
          puVar15 = puVar15 + 1;
          piVar13 = piVar13 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x637049a8;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar14 = (int)param_2 + param_4;
        puVar7 = param_3;
      } while( true );
    }
joined_r0x637049a8:
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = uVar11;
      *piVar13 = iVar9;
      piVar13 = piVar13 + 1;
      puVar15 = puVar15 + 1;
    }
  }
  return;
}


