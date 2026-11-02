/* Module: rnco3260.dll
   Function: FUN_636fcd10
   Address: 636fcd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fcd10(ushort *param_1,int param_2,byte *param_3,int param_4)

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
    uVar3 = (uint)*param_3;
    uVar3 = ((*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5 |
            *(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xfc) << 3 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
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
          uVar4 = (uint)*param_3;
          uVar4 = ((*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5 |
                  *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc) << 3 |
                  (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
          uVar1 = (ushort)uVar4;
          uVar5 = ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar5);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fce89;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          do {
            *param_1 = uVar1;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            uVar5 = uVar1;
            if (iVar6 == 0) goto LAB_636fce89;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
          uVar3 = (uint)param_3[1];
          uVar3 = ((*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5 |
                  *(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xfc) << 3 |
                  (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
          param_3 = param_3 + 2;
          uVar5 = (uVar1 & (ushort)uVar3) + ((ushort)((uVar4 ^ uVar3) >> 1) & 0x7bef);
          do {
            *param_1 = uVar5;
            param_1 = param_1 + 1;
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) goto LAB_636fce89;
            iVar7 = iVar7 + param_4 * -2;
          } while (-1 < iVar7);
          iVar7 = iVar7 + param_2;
        }
      }
    }
LAB_636fce89:
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


