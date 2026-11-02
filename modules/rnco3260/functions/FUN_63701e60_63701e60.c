/* Module: rnco3260.dll
   Function: FUN_63701e60
   Address: 63701e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63701e60(uint *param_1,int *param_2,uint *param_3,int param_4,uint3 *param_5,int param_6)

{
  uint3 *puVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  uint *local_8;
  
  local_8 = param_1;
  iVar11 = param_4 >> 1;
  iVar5 = (param_4 * 2 - iVar11) / (param_6 * 2);
  if (param_4 != 0) {
    uVar2 = *param_5;
    param_5 = (uint3 *)((int)param_5 + 3);
    uVar9 = (uint)uVar2;
    piVar10 = param_2;
    puVar12 = param_3;
    puVar4 = (uint *)(param_4 - iVar5);
    uVar8 = uVar9;
    iVar6 = param_4;
    if ((uint *)(param_4 - iVar5) != (uint *)0x0) {
      do {
        param_3 = puVar4;
        iVar6 = ((*local_8 ^ uVar9) >> 1 & 0x7f7f7f) + (*local_8 & uVar9);
        do {
          *puVar12 = uVar9;
          local_8 = local_8 + 1;
          *piVar10 = iVar6;
          puVar12 = puVar12 + 1;
          piVar10 = piVar10 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar8 = uVar9;
          if (param_3 == (uint *)0x0) goto joined_r0x63702070;
          iVar11 = iVar11 + param_6 * -2;
        } while (-1 < iVar11);
        param_2 = (int *)(iVar11 + param_4);
        uVar2 = *param_5;
        uVar7 = (uint)uVar2;
        uVar8 = ((uVar7 ^ uVar9) >> 1 & 0x7f7f7f) + (uVar7 & uVar9);
        iVar6 = ((*local_8 ^ uVar8) >> 1 & 0x7f7f7f) + (*local_8 & uVar8);
        do {
          *puVar12 = uVar8;
          local_8 = local_8 + 1;
          *piVar10 = iVar6;
          puVar12 = puVar12 + 1;
          piVar10 = piVar10 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x63702070;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar11 = (int)param_2 + param_4;
        iVar6 = ((*local_8 ^ uVar7) >> 1 & 0x7f7f7f) + (*local_8 & uVar7);
        do {
          *puVar12 = uVar7;
          local_8 = local_8 + 1;
          *piVar10 = iVar6;
          puVar12 = puVar12 + 1;
          piVar10 = piVar10 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar8 = uVar7;
          if (param_3 == (uint *)0x0) goto joined_r0x63702070;
          iVar11 = iVar11 + param_6 * -2;
        } while (-1 < iVar11);
        param_2 = (int *)(iVar11 + param_4);
        puVar1 = (uint3 *)((int)param_5 + 3);
        param_5 = (uint3 *)((int)param_5 + 6);
        uVar3 = *puVar1;
        uVar9 = (uint)uVar3;
        uVar8 = (uint)(uVar2 & uVar3) + ((uint3)((uVar2 ^ uVar3) >> 1) & 0x7f7f7f);
        iVar6 = ((*local_8 ^ uVar8) >> 1 & 0x7f7f7f) + (*local_8 & uVar8);
        do {
          *puVar12 = uVar8;
          local_8 = local_8 + 1;
          *piVar10 = iVar6;
          puVar12 = puVar12 + 1;
          piVar10 = piVar10 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x63702070;
          param_2 = (int *)((int)param_2 + param_6 * -2);
        } while (-1 < (int)param_2);
        iVar11 = (int)param_2 + param_4;
        puVar4 = param_3;
      } while( true );
    }
joined_r0x63702070:
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = uVar8;
      *piVar10 = iVar6;
      piVar10 = piVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  return;
}


