/* Module: sfcdi.dll
   Function: FUN_5bf0fd80
   Address: 5bf0fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf0fd80(byte *param_1,int param_2,byte *param_3,uint param_4,uint *param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar1 = *param_1;
  uVar4 = bVar1 & 0x1f;
  *param_6 = 0;
  uVar2 = (uint)*param_1;
  if ((uVar2 & 0x1f) == uVar4) {
    pbVar6 = param_1 + 4;
    while ((uVar2 >> 5 == (uint)(bVar1 >> 5) && (param_2 != 0))) {
      if ((uint)pbVar6[-2] != *param_5) {
        return 0x80004005;
      }
      if (param_4 < 0xc) {
        uVar2 = param_4;
        if (param_4 != 0) goto LAB_5bf0fdfa;
      }
      else {
        uVar2 = 0xc;
LAB_5bf0fdfa:
        pbVar5 = pbVar6;
        pbVar7 = param_3;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar7 = pbVar7 + 4;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar7 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar7 = pbVar7 + 1;
        }
      }
      param_4 = param_4 - uVar2;
      param_3 = param_3 + 0xc;
      *param_6 = *param_6 + 1;
      param_1 = param_1 + 0x12;
      pbVar6 = pbVar6 + 0x12;
      param_2 = param_2 + -1;
      *param_5 = *param_5 + 1;
      uVar2 = (uint)*param_1;
      if ((uVar2 & 0x1f) != uVar4) {
        return 0;
      }
    }
  }
  return 0;
}


