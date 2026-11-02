/* Module: rnco3260.dll
   Function: FUN_636f89e0
   Address: 636f89e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f89e0(uint *param_1,int param_2,ushort *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_2 >> 1;
  iVar1 = (param_2 * 2 - iVar6) / (param_4 * 2);
  if (param_2 != 0) {
    uVar5 = (uint)*param_3;
    uVar2 = ((uVar5 & 0x1f) << 0xd | uVar5 & 0x3e0) << 6 | (uVar5 & 0x7c00) >> 7;
    param_3 = param_3 + 1;
    iVar4 = param_2 - iVar1;
    uVar5 = uVar2;
    if (iVar4 != 0) {
      while( true ) {
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
        uVar5 = uVar2;
        if (iVar4 == 0) break;
        iVar6 = iVar6 + param_4 * -2;
        if (iVar6 < 0) {
          iVar6 = iVar6 + param_2;
          uVar5 = (uint)*param_3;
          uVar3 = ((uVar5 & 0x1f) << 0xd | uVar5 & 0x3e0) << 6 | (uVar5 & 0x7c00) >> 7;
          uVar5 = ((uVar3 ^ uVar2) >> 1) + (uVar3 & uVar2);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_636f8b23;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          do {
            *param_1 = uVar3;
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
            uVar5 = uVar3;
            if (iVar4 == 0) goto LAB_636f8b23;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          uVar5 = (uint)param_3[1];
          uVar2 = ((uVar5 & 0x1f) << 0xd | uVar5 & 0x3e0) << 6 | (uVar5 & 0x7c00) >> 7;
          param_3 = param_3 + 2;
          uVar5 = (uVar3 & uVar2) + ((uVar3 ^ uVar2) >> 1);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_636f8b23;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
        }
      }
    }
LAB_636f8b23:
    if (iVar1 != 0) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = uVar5;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


