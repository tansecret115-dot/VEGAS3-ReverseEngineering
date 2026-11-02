/* Module: rnco3260.dll
   Function: FUN_636fc400
   Address: 636fc400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fc400(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar6 = param_2 >> 1;
  uVar2 = (param_2 * 2 - iVar6) / (param_4 * 2);
  if (param_2 != 0) {
    uVar3 = (uint)*param_3;
    iVar5 = param_2 - uVar2;
    puVar7 = param_1;
    uVar4 = *param_3;
    param_1 = param_3 + 1;
    if (iVar5 != 0) {
      while( true ) {
        uVar4 = (ushort)uVar3;
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) break;
        iVar6 = iVar6 + param_4 * -2;
        if (iVar6 < 0) {
          iVar6 = iVar6 + param_2;
          uVar1 = *param_1;
          uVar4 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar4);
          do {
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636fc4da;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          do {
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            uVar4 = uVar1;
            if (iVar5 == 0) goto LAB_636fc4da;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
          uVar4 = param_1[1];
          uVar3 = (uint)uVar4;
          param_1 = param_1 + 2;
          uVar4 = (uVar1 & uVar4) + ((uVar1 ^ uVar4) >> 1 & 0x7bef);
          do {
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_636fc4da;
            iVar6 = iVar6 + param_4 * -2;
          } while (-1 < iVar6);
          iVar6 = iVar6 + param_2;
        }
      }
    }
LAB_636fc4da:
    if (uVar2 != 0) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)puVar7 = CONCAT22(uVar4,uVar4);
        puVar7 = puVar7 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
      }
    }
  }
  return;
}


