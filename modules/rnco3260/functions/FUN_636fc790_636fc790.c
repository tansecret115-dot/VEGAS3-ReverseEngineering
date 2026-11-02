/* Module: rnco3260.dll
   Function: FUN_636fc790
   Address: 636fc790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fc790(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar7 = param_2 >> 1;
  uVar2 = (param_2 * 2 - iVar7) / (param_4 * 2);
  if (param_2 != 0) {
    uVar3 = (*param_3 & 0x7fe0) << 1 | *param_3 & 0x1f;
    iVar6 = param_2 - uVar2;
    puVar8 = param_1;
    uVar5 = (ushort)uVar3;
    param_1 = param_3 + 1;
    if (iVar6 != 0) {
      while( true ) {
        uVar5 = (ushort)uVar3;
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        iVar7 = iVar7 + param_4 * -2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + param_2;
          uVar4 = (*param_1 & 0x7fe0) << 1 | *param_1 & 0x1f;
          uVar1 = (ushort)uVar4;
          uVar5 = ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar5);
          do {
            *puVar8 = uVar5;
            puVar8 = puVar8 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fc898;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          do {
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
            iVar6 = iVar6 + -1;
            uVar5 = uVar1;
            if (iVar6 == 0) goto LAB_636fc898;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          uVar3 = (param_1[1] & 0x7fe0) << 1 | param_1[1] & 0x1f;
          param_1 = param_1 + 2;
          uVar5 = (uVar1 & (ushort)uVar3) + ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef);
          do {
            *puVar8 = uVar5;
            puVar8 = puVar8 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fc898;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
        }
      }
    }
LAB_636fc898:
    if (uVar2 != 0) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)puVar8 = CONCAT22(uVar5,uVar5);
        puVar8 = puVar8 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      }
    }
  }
  return;
}


