/* Module: rnco3260.dll
   Function: FUN_636f7b80
   Address: 636f7b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7b80(uint *param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = param_1;
  iVar6 = param_2 >> 1;
  iVar1 = (param_2 * 2 - iVar6) / (param_4 * 2);
  if (param_2 != 0) {
    uVar4 = *param_3;
    param_1._2_1_ = (undefined1)(uVar4 >> 0x10);
    uVar2 = (uVar4 & 0xff) << 0x10 | (uint)CONCAT11((char)(uVar4 >> 8),param_1._2_1_);
    iVar5 = param_2 - iVar1;
    uVar4 = uVar2;
    param_1 = param_3 + 1;
    if (iVar5 != 0) {
      while( true ) {
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
        uVar4 = uVar2;
        if (iVar5 == 0) break;
        iVar6 = iVar6 + param_4 * -2;
        if (iVar6 < 0) {
          iVar6 = iVar6 + param_2;
          uVar4 = *param_1;
          uVar3 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
          uVar4 = ((uVar3 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar3 & uVar2);
          do {
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636f7c9f;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          do {
            *puVar7 = uVar3;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            uVar4 = uVar3;
            if (iVar5 == 0) goto LAB_636f7c9f;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          uVar4 = param_1[1];
          uVar2 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
          param_1 = param_1 + 2;
          uVar4 = (uVar3 & uVar2) + ((uVar3 ^ uVar2) >> 1 & 0x7f7f7f);
          do {
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636f7c9f;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
        }
      }
    }
LAB_636f7c9f:
    if (iVar1 != 0) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
      }
    }
  }
  return;
}


