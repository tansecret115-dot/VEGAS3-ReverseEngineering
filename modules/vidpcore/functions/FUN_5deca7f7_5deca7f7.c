/* Module: vidpcore.dll
   Function: FUN_5deca7f7
   Address: 5deca7f7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5deca7f7(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_EDI;
  byte *pbVar9;
  uint uStack00000020;
  uint uStack00000024;
  
  param_1 = 0;
  do {
    iVar7 = param_1 << 10;
    uStack00000020 = 0;
    do {
      uVar5 = 0;
      do {
        iVar6 = 99999;
        param_3 = 0;
        param_3._0_1_ = 0;
        uStack00000024 = 0;
        if (unaff_EDI != 0) {
          pbVar9 = (byte *)(param_5 + 2);
          do {
            uVar1 = uVar5 - (pbVar9[-2] >> 3);
            uVar4 = (int)uVar1 >> 0x1f;
            iVar8 = (uVar1 ^ uVar4) - uVar4;
            uVar1 = uStack00000020 - (pbVar9[-1] >> 3);
            uVar4 = (int)uVar1 >> 0x1f;
            iVar3 = (uVar1 ^ uVar4) - uVar4;
            uVar1 = param_1 - (*pbVar9 >> 3);
            uVar4 = (int)uVar1 >> 0x1f;
            iVar2 = (uVar1 ^ uVar4) - uVar4;
            iVar2 = iVar3 * iVar3 + iVar8 * iVar8 + iVar2 * iVar2;
            if (iVar2 < iVar6) {
              param_3 = uStack00000024;
              iVar6 = iVar2;
            }
            uStack00000024 = uStack00000024 + 1;
            pbVar9 = pbVar9 + 4;
            in_EAX = param_6;
            unaff_EDI = param_2;
          } while (uStack00000024 < param_2);
        }
        iVar6 = iVar7 + uVar5;
        uVar5 = uVar5 + 1;
        *(undefined1 *)(iVar6 + in_EAX) = (undefined1)param_3;
      } while (uVar5 < 0x20);
      iVar7 = iVar7 + 0x20;
      uStack00000020 = uStack00000020 + 1;
    } while (uStack00000020 < 0x20);
    param_1 = param_1 + 1;
  } while (param_1 < 0x20);
  return 0;
}


