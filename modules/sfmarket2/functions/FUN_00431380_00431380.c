/* Module: sfmarket2.dll
   Function: FUN_00431380
   Address: 00431380
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * FUN_00431380(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  pbVar3 = (byte *)0x0;
  if ((0 < param_4) &&
     (pbVar1 = param_1 + param_2 + (1 - param_4), pbVar3 = param_1, param_1 < pbVar1)) {
    while (pbVar2 = memchr(param_1,(int)(char)*param_3,(int)pbVar1 - (int)param_1),
          pbVar3 = (byte *)0x0, pbVar2 != (byte *)0x0) {
      bVar7 = false;
      iVar5 = 0;
      bVar8 = true;
      iVar4 = param_4;
      pbVar3 = pbVar2;
      pbVar6 = param_3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pbVar3 < *pbVar6;
        bVar8 = *pbVar3 == *pbVar6;
        pbVar3 = pbVar3 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar5 == 0) {
        return pbVar2;
      }
      param_1 = pbVar2 + 1;
      if (pbVar1 <= param_1) {
        return param_1;
      }
    }
  }
  return pbVar3;
}


