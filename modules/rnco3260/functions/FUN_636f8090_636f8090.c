/* Module: rnco3260.dll
   Function: FUN_636f8090
   Address: 636f8090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f8090(uint *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint3 uVar4;
  uint3 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  
  iVar10 = param_2 >> 1;
  iVar6 = (param_2 * 2 - iVar10) / (param_4 * 2);
  if (param_2 != 0) {
    puVar11 = param_3 + 3;
    uVar7 = (uint)CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]);
    uVar9 = uVar7;
    puVar12 = param_1;
    param_1 = (uint *)(param_2 - iVar6);
    if ((uint *)(param_2 - iVar6) != (uint *)0x0) {
      while( true ) {
        *puVar12 = uVar7;
        puVar12 = puVar12 + 1;
        param_1 = (uint *)((int)param_1 + -1);
        uVar9 = uVar7;
        if (param_1 == (uint *)0x0) break;
        iVar10 = iVar10 + param_4 * -2;
        if (iVar10 < 0) {
          iVar10 = iVar10 + param_2;
          uVar5 = CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]);
          uVar8 = (uint)uVar5;
          uVar9 = ((uVar8 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar8 & uVar7);
          do {
            *puVar12 = uVar9;
            puVar12 = puVar12 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            if (param_1 == (uint *)0x0) goto LAB_636f81a9;
            iVar10 = iVar10 + param_4 * -2;
          } while (-1 < iVar10);
          iVar10 = iVar10 + param_2;
          do {
            *puVar12 = uVar8;
            puVar12 = puVar12 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            uVar9 = uVar8;
            if (param_1 == (uint *)0x0) goto LAB_636f81a9;
            iVar10 = iVar10 + param_4 * -2;
          } while (-1 < iVar10);
          iVar10 = iVar10 + param_2;
          puVar1 = puVar11 + 3;
          puVar2 = puVar11 + 4;
          puVar3 = puVar11 + 5;
          puVar11 = puVar11 + 6;
          uVar4 = CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
          uVar7 = (uint)uVar4;
          uVar9 = (uint)(uVar5 & uVar4) + ((uint3)((uVar5 ^ uVar4) >> 1) & 0x7f7f7f);
          do {
            *puVar12 = uVar9;
            puVar12 = puVar12 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            if (param_1 == (uint *)0x0) goto LAB_636f81a9;
            iVar10 = iVar10 + param_4 * -2;
          } while (-1 < iVar10);
          iVar10 = iVar10 + param_2;
        }
      }
    }
LAB_636f81a9:
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = uVar9;
        puVar12 = puVar12 + 1;
      }
    }
  }
  return;
}


