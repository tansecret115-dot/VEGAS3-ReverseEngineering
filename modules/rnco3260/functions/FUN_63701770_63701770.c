/* Module: rnco3260.dll
   Function: FUN_63701770
   Address: 63701770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63701770(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  
  iVar1 = param_6;
  iVar9 = param_4 >> 1;
  iVar3 = (param_4 * 2 - iVar9) / (param_6 * 2);
  if (param_4 != 0) {
    uVar4 = *param_5;
    param_5 = param_5 + 1;
    uVar7 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
    piVar8 = param_2;
    puVar10 = param_3;
    puVar2 = (uint *)(param_4 - iVar3);
    uVar4 = uVar7;
    iVar5 = param_4;
    if ((uint *)(param_4 - iVar3) != (uint *)0x0) {
      do {
        param_3 = puVar2;
        iVar5 = ((*param_1 ^ uVar7) >> 1 & 0x7f7f7f) + (*param_1 & uVar7);
        do {
          *puVar10 = uVar7;
          param_1 = param_1 + 1;
          *piVar8 = iVar5;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar4 = uVar7;
          if (param_3 == (uint *)0x0) goto joined_r0x6370197d;
          iVar9 = iVar9 + iVar1 * -2;
        } while (-1 < iVar9);
        param_2 = (int *)(iVar9 + param_4);
        uVar4 = *param_5;
        param_6._2_1_ = (undefined1)(uVar4 >> 0x10);
        uVar6 = (uint)CONCAT11((char)(uVar4 >> 8),param_6._2_1_) | (uVar4 & 0xff) << 0x10;
        uVar4 = ((uVar6 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar6 & uVar7);
        iVar5 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *puVar10 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar5;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x6370197d;
          param_2 = (int *)((int)param_2 + iVar1 * -2);
        } while (-1 < (int)param_2);
        iVar9 = (int)param_2 + param_4;
        iVar5 = ((*param_1 ^ uVar6) >> 1 & 0x7f7f7f) + (*param_1 & uVar6);
        do {
          *puVar10 = uVar6;
          param_1 = param_1 + 1;
          *piVar8 = iVar5;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          uVar4 = uVar6;
          if (param_3 == (uint *)0x0) goto joined_r0x6370197d;
          iVar9 = iVar9 + iVar1 * -2;
        } while (-1 < iVar9);
        param_2 = (int *)(iVar9 + param_4);
        uVar4 = param_5[1];
        param_5 = param_5 + 2;
        param_6._2_1_ = (undefined1)(uVar4 >> 0x10);
        uVar7 = (uint)CONCAT11((char)(uVar4 >> 8),param_6._2_1_) | (uVar4 & 0xff) << 0x10;
        uVar4 = (uVar6 & uVar7) + ((uVar6 ^ uVar7) >> 1 & 0x7f7f7f);
        iVar5 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
        do {
          *puVar10 = uVar4;
          param_1 = param_1 + 1;
          *piVar8 = iVar5;
          puVar10 = puVar10 + 1;
          piVar8 = piVar8 + 1;
          param_3 = (uint *)((int)param_3 + -1);
          if (param_3 == (uint *)0x0) goto joined_r0x6370197d;
          param_2 = (int *)((int)param_2 + iVar1 * -2);
        } while (-1 < (int)param_2);
        iVar9 = (int)param_2 + param_4;
        puVar2 = param_3;
      } while( true );
    }
joined_r0x6370197d:
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = uVar4;
      *piVar8 = iVar5;
      piVar8 = piVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return;
}


