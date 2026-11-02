/* Module: erv33260.dll
   Function: FUN_670889b0
   Address: 670889b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670889b0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_4;
  iVar18 = param_4;
  if ((param_4 < 0x10) || (((uint)param_2 & 0xf) != 0)) {
    do {
      do {
        *(undefined4 *)((int)param_2 + iVar19 + -4) = *(undefined4 *)((int)param_1 + iVar19 + -4);
        iVar19 = iVar19 + -4;
      } while (iVar19 != 0);
      param_1 = (undefined4 *)((int)param_1 + param_3);
      param_2 = param_2 + 4;
      iVar18 = iVar18 + -1;
      iVar19 = param_4;
    } while (iVar18 != 0);
  }
  else {
    do {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      puVar1 = (undefined4 *)((int)param_1 + param_3);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined4 *)((int)param_1 + param_3 * 2);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar1 = (undefined4 *)((int)param_1 + param_3 * 3);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      param_1 = param_1 + param_3;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      param_2[4] = uVar6;
      param_2[5] = uVar7;
      param_2[6] = uVar8;
      param_2[7] = uVar9;
      param_2[8] = uVar10;
      param_2[9] = uVar11;
      param_2[10] = uVar12;
      param_2[0xb] = uVar13;
      param_2[0xc] = uVar14;
      param_2[0xd] = uVar15;
      param_2[0xe] = uVar16;
      param_2[0xf] = uVar17;
      param_2 = param_2 + 0x10;
      param_4 = param_4 + -4;
    } while (param_4 != 0);
  }
  return;
}


