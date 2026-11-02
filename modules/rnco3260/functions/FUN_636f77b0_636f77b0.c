/* Module: rnco3260.dll
   Function: FUN_636f77b0
   Address: 636f77b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f77b0(uint *param_1,int param_2,byte *param_3,int param_4)

{
  uint3 uVar1;
  uint3 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = param_2 >> 1;
  iVar3 = (param_2 * 2 - iVar8) / (param_4 * 2);
  if (param_2 != 0) {
    uVar7 = (uint)*param_3;
    uVar4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
    param_3 = param_3 + 1;
    iVar6 = param_2 - iVar3;
    uVar7 = uVar4;
    if (iVar6 != 0) {
      while( true ) {
        *param_1 = uVar4;
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
        uVar7 = uVar4;
        if (iVar6 == 0) break;
        iVar8 = iVar8 + param_4 * -2;
        if (iVar8 < 0) {
          iVar8 = iVar8 + param_2;
          uVar7 = (uint)*param_3;
          uVar1 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
          uVar5 = (uint)uVar1;
          uVar7 = ((uVar5 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar5 & uVar4);
          do {
            *param_1 = uVar7;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636f78ed;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            uVar7 = uVar5;
            if (iVar6 == 0) goto LAB_636f78ed;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          uVar7 = (uint)param_3[1];
          uVar2 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar7),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar7 * 4 + 2));
          uVar4 = (uint)uVar2;
          param_3 = param_3 + 2;
          uVar7 = (uint)(uVar1 & uVar2) + ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f);
          do {
            *param_1 = uVar7;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636f78ed;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
        }
      }
    }
LAB_636f78ed:
    if (iVar3 != 0) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = uVar7;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


