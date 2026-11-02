/* Module: rnco3260.dll
   Function: FUN_637035b0
   Address: 637035b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637035b0(uint *param_1,int *param_2,uint *param_3,int param_4,byte *param_5,byte *param_6)

{
  uint3 uVar1;
  uint3 uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  
  pbVar3 = param_6;
  pbVar11 = (byte *)(param_4 >> 1);
  iVar5 = (param_4 * 2 - (int)pbVar11) / ((int)param_6 * 2);
  if (param_4 != 0) {
    uVar7 = (uint)*param_5;
    uVar9 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
    param_6 = param_5 + 1;
    piVar10 = param_2;
    piVar4 = (int *)(param_4 - iVar5);
    uVar7 = uVar9;
    iVar8 = param_4;
    if ((int *)(param_4 - iVar5) != (int *)0x0) {
      do {
        param_2 = piVar4;
        iVar8 = ((*param_1 ^ uVar9) >> 1 & 0x7f7f7f) + (*param_1 & uVar9);
        do {
          *param_3 = uVar9;
          param_1 = param_1 + 1;
          *piVar10 = iVar8;
          param_3 = param_3 + 1;
          piVar10 = piVar10 + 1;
          param_2 = (int *)((int)param_2 + -1);
          uVar7 = uVar9;
          if (param_2 == (int *)0x0) goto joined_r0x637037df;
          pbVar11 = pbVar11 + (int)pbVar3 * -2;
        } while (-1 < (int)pbVar11);
        param_5 = pbVar11 + param_4;
        uVar7 = (uint)*param_6;
        uVar1 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                         *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
        uVar6 = (uint)uVar1;
        uVar7 = ((uVar6 ^ uVar9) >> 1 & 0x7f7f7f) + (uVar6 & uVar9);
        iVar8 = ((*param_1 ^ uVar7) >> 1 & 0x7f7f7f) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          param_1 = param_1 + 1;
          *piVar10 = iVar8;
          param_3 = param_3 + 1;
          piVar10 = piVar10 + 1;
          param_2 = (int *)((int)param_2 + -1);
          if (param_2 == (int *)0x0) goto joined_r0x637037df;
          param_5 = param_5 + (int)pbVar3 * -2;
        } while (-1 < (int)param_5);
        pbVar11 = param_5 + param_4;
        iVar8 = ((*param_1 ^ uVar6) >> 1 & 0x7f7f7f) + (*param_1 & uVar6);
        do {
          *param_3 = uVar6;
          param_1 = param_1 + 1;
          *piVar10 = iVar8;
          param_3 = param_3 + 1;
          piVar10 = piVar10 + 1;
          param_2 = (int *)((int)param_2 + -1);
          uVar7 = uVar6;
          if (param_2 == (int *)0x0) goto joined_r0x637037df;
          pbVar11 = pbVar11 + (int)pbVar3 * -2;
        } while (-1 < (int)pbVar11);
        param_5 = pbVar11 + param_4;
        uVar7 = (uint)param_6[1];
        param_6 = param_6 + 2;
        uVar2 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                         *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
        uVar9 = (uint)uVar2;
        uVar7 = (uint)(uVar1 & uVar2) + ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f);
        iVar8 = ((*param_1 ^ uVar7) >> 1 & 0x7f7f7f) + (*param_1 & uVar7);
        do {
          *param_3 = uVar7;
          param_1 = param_1 + 1;
          *piVar10 = iVar8;
          param_3 = param_3 + 1;
          piVar10 = piVar10 + 1;
          param_2 = (int *)((int)param_2 + -1);
          if (param_2 == (int *)0x0) goto joined_r0x637037df;
          param_5 = param_5 + (int)pbVar3 * -2;
        } while (-1 < (int)param_5);
        pbVar11 = param_5 + param_4;
        piVar4 = param_2;
      } while( true );
    }
joined_r0x637037df:
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_3 = uVar7;
      *piVar10 = iVar8;
      param_3 = param_3 + 1;
      piVar10 = piVar10 + 1;
    }
  }
  return;
}


