/* Module: rnco3260.dll
   Function: FUN_636fd240
   Address: 636fd240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fd240(ushort *param_1,int param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_2 >> 1;
  uVar2 = (param_2 * 2 - iVar8) / (param_4 * 2);
  if (param_2 != 0) {
    uVar3 = *param_3;
    param_3 = param_3 + 1;
    uVar3 = ((uVar3 & 0xf800 | uVar3 >> 3 & 0x1f0000) >> 3 | uVar3 & 0xf8) >> 3;
    iVar7 = param_2 - uVar2;
    uVar6 = (ushort)uVar3;
    if (iVar7 != 0) {
      while( true ) {
        uVar6 = (ushort)uVar3;
        *param_1 = uVar6;
        param_1 = param_1 + 1;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) break;
        iVar8 = iVar8 + param_4 * -2;
        if (iVar8 < 0) {
          iVar8 = iVar8 + param_2;
          uVar5 = *param_3;
          uVar5 = (uVar5 & 0xf800 | uVar5 >> 3 & 0x1f0000) >> 3 | uVar5 & 0xf8;
          uVar1 = (ushort)(uVar5 >> 3);
          uVar6 = ((ushort)((uVar5 >> 3 ^ uVar3) >> 1) & 0x3def) + (uVar1 & uVar6);
          do {
            *param_1 = uVar6;
            param_1 = param_1 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) goto LAB_636fd385;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          do {
            *param_1 = uVar1;
            param_1 = param_1 + 1;
            iVar7 = iVar7 + -1;
            uVar6 = uVar1;
            if (iVar7 == 0) goto LAB_636fd385;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
          uVar3 = param_3[1];
          uVar4 = (uVar3 & 0xf800 | uVar3 >> 3 & 0x1f0000) >> 3 | uVar3 & 0xf8;
          param_3 = param_3 + 2;
          uVar3 = uVar4 >> 3;
          uVar6 = (short)((uVar5 & uVar4) >> 3) + ((ushort)((uVar5 ^ uVar4) >> 4) & 0x3def);
          do {
            *param_1 = uVar6;
            param_1 = param_1 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 == 0) goto LAB_636fd385;
            iVar8 = iVar8 + param_4 * -2;
          } while (-1 < iVar8);
          iVar8 = iVar8 + param_2;
        }
      }
    }
LAB_636fd385:
    if (uVar2 != 0) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)param_1 = CONCAT22(uVar6,uVar6);
        param_1 = param_1 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = uVar6;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}


