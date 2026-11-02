/* Module: rnco3260.dll
   Function: FUN_636fbc30
   Address: 636fbc30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fbc30(ushort *param_1,int param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2 >> 1;
  uVar2 = (param_2 * 2 - iVar7) / (param_4 * 2);
  if (param_2 != 0) {
    uVar3 = *param_3;
    uVar3 = (uVar3 & 0xfc00 | uVar3 >> 0xe & 0x3e0) >> 5 | (uVar3 & 0xf8) << 8;
    param_3 = param_3 + 1;
    iVar6 = param_2 - uVar2;
    uVar5 = (ushort)uVar3;
    if (iVar6 != 0) {
      while( true ) {
        uVar5 = (ushort)uVar3;
        *param_1 = uVar5;
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        iVar7 = iVar7 + param_4 * -2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + param_2;
          uVar4 = *param_3;
          uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
          uVar1 = (ushort)uVar4;
          uVar5 = ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar5);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fbd75;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          do {
            *param_1 = uVar1;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            uVar5 = uVar1;
            if (iVar6 == 0) goto LAB_636fbd75;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          uVar3 = param_3[1];
          uVar3 = (uVar3 & 0xfc00 | uVar3 >> 0xe & 0x3e0) >> 5 | (uVar3 & 0xf8) << 8;
          param_3 = param_3 + 2;
          uVar5 = (uVar1 & (ushort)uVar3) + ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fbd75;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
        }
      }
    }
LAB_636fbd75:
    if (uVar2 != 0) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)param_1 = CONCAT22(uVar5,uVar5);
        param_1 = param_1 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = uVar5;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


