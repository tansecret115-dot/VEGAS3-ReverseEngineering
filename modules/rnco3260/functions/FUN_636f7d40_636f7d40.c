/* Module: rnco3260.dll
   Function: FUN_636f7d40
   Address: 636f7d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7d40(uint *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = param_2 >> 1;
  iVar2 = (param_2 * 2 - iVar6) / (param_4 * 2);
  if (param_2 != 0) {
    uVar3 = *param_3;
    iVar4 = param_2 - iVar2;
    uVar5 = uVar3;
    puVar7 = param_1;
    param_1 = param_3 + 1;
    if (iVar4 != 0) {
      while( true ) {
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + -1;
        uVar5 = uVar3;
        if (iVar4 == 0) break;
        iVar6 = iVar6 + param_4 * -2;
        if (iVar6 < 0) {
          iVar6 = iVar6 + param_2;
          uVar1 = *param_1;
          uVar5 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
          do {
            *puVar7 = uVar5;
            puVar7 = puVar7 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_636f7e09;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          do {
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            iVar4 = iVar4 + -1;
            uVar5 = uVar1;
            if (iVar4 == 0) goto LAB_636f7e09;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          uVar3 = param_1[1];
          param_1 = param_1 + 2;
          uVar5 = (uVar1 & uVar3) + ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f);
          do {
            *puVar7 = uVar5;
            puVar7 = puVar7 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_636f7e09;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
        }
      }
    }
LAB_636f7e09:
    if (iVar2 != 0) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = uVar5;
        puVar7 = puVar7 + 1;
      }
    }
  }
  return;
}


