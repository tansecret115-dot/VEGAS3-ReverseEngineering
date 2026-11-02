/* Module: rnco3260.dll
   Function: FUN_636f72e0
   Address: 636f72e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f72e0(uint *param_1,int param_2,ushort *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_2 >> 1;
  iVar1 = (param_2 * 2 - iVar7) / (param_4 * 2);
  if (param_2 != 0) {
    uVar6 = (uint)*param_3;
    param_3 = param_3 + 1;
    uVar2 = (((uVar6 & 0x7c00) << 3 | uVar6 & 0x3e0) << 3 | uVar6 & 0x1f) << 3;
    iVar5 = param_2 - iVar1;
    uVar6 = uVar2;
    if (iVar5 != 0) {
      while( true ) {
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        iVar5 = iVar5 + -1;
        uVar6 = uVar2;
        if (iVar5 == 0) break;
        iVar7 = iVar7 + param_4 * -2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + param_2;
          uVar6 = (uint)*param_3;
          uVar3 = ((uVar6 & 0x7c00) << 3 | uVar6 & 0x3e0) << 3 | uVar6 & 0x1f;
          uVar4 = uVar3 << 3;
          uVar6 = ((uVar4 ^ uVar2) >> 1) + (uVar4 & uVar2);
          do {
            *param_1 = uVar6;
            param_1 = param_1 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636f7421;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          do {
            *param_1 = uVar4;
            param_1 = param_1 + 1;
            iVar5 = iVar5 + -1;
            uVar6 = uVar4;
            if (iVar5 == 0) goto LAB_636f7421;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          uVar6 = (uint)param_3[1];
          uVar6 = ((uVar6 & 0x7c00) << 3 | uVar6 & 0x3e0) << 3 | uVar6 & 0x1f;
          param_3 = param_3 + 2;
          uVar2 = uVar6 << 3;
          uVar6 = (uVar3 & uVar6) * 8 + (uVar3 ^ uVar6) * 4;
          do {
            *param_1 = uVar6;
            param_1 = param_1 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636f7421;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
        }
      }
    }
LAB_636f7421:
    if (iVar1 != 0) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = uVar6;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


