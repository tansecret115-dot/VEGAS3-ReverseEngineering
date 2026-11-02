/* Module: rmto3260.dll
   Function: FUN_662f3800
   Address: 662f3800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f3800(LPCSTR param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  byte *local_10 [3];
  
  pcVar2 = FUN_662f4570(param_1,'\\');
  if (pcVar2 != (char *)0x0) {
    FUN_662ef160(local_10,pcVar2 + 1);
    pbVar5 = &DAT_6630ab64;
    pbVar3 = local_10[0];
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_662f385b:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_662f3860;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_662f385b;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_662f3860:
    if (iVar4 != 0) {
      pbVar3 = &DAT_6630b52c;
      do {
        bVar1 = *local_10[0];
        bVar6 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_662f3893:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_662f3898;
        }
        if (bVar1 == 0) break;
        bVar1 = local_10[0][1];
        bVar6 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_662f3893;
        local_10[0] = local_10[0] + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_662f3898:
      if (iVar4 != 0) {
        FUN_662ef0f0((int *)local_10);
        return 1;
      }
    }
    FUN_662ef0f0((int *)local_10);
  }
  return 0;
}


