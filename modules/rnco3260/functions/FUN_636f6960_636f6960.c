/* Module: rnco3260.dll
   Function: FUN_636f6960
   Address: 636f6960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6960(uint *param_1,int param_2,uint3 *param_3,int param_4)

{
  uint3 uVar1;
  uint3 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint3 *puVar8;
  uint *puVar9;
  
  iVar6 = param_2 >> 1;
  iVar3 = (param_2 * 2 - iVar6) / (param_4 * 2);
  if (param_2 != 0) {
    puVar8 = (uint3 *)((int)param_3 + 3);
    uVar4 = (uint)*param_3;
    uVar5 = uVar4;
    puVar9 = param_1;
    param_1 = (uint *)(param_2 - iVar3);
    if ((uint *)(param_2 - iVar3) != (uint *)0x0) {
      while( true ) {
        *puVar9 = uVar4;
        puVar9 = puVar9 + 1;
        param_1 = (uint *)((int)param_1 + -1);
        uVar5 = uVar4;
        if (param_1 == (uint *)0x0) break;
        iVar6 = iVar6 + param_4 * -2;
        if (iVar6 < 0) {
          iVar6 = iVar6 + param_2;
          uVar1 = *puVar8;
          uVar7 = (uint)uVar1;
          uVar5 = ((uVar7 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar7 & uVar4);
          do {
            *puVar9 = uVar5;
            puVar9 = puVar9 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            if (param_1 == (uint *)0x0) goto LAB_636f6a81;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          do {
            *puVar9 = uVar7;
            puVar9 = puVar9 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            uVar5 = uVar7;
            if (param_1 == (uint *)0x0) goto LAB_636f6a81;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          uVar2 = *(uint3 *)((int)puVar8 + 3);
          uVar4 = (uint)uVar2;
          puVar8 = (uint3 *)((int)puVar8 + 6);
          uVar5 = (uint)(uVar1 & uVar2) + ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f);
          do {
            *puVar9 = uVar5;
            puVar9 = puVar9 + 1;
            param_1 = (uint *)((int)param_1 + -1);
            if (param_1 == (uint *)0x0) goto LAB_636f6a81;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
        }
      }
    }
LAB_636f6a81:
    if (iVar3 != 0) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = uVar5;
        puVar9 = puVar9 + 1;
      }
    }
  }
  return;
}


