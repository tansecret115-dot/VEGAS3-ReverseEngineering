/* Module: rmbe3260.dll
   Function: FUN_66052a10
   Address: 66052a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66052a10(LPCSTR param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  byte *local_10 [3];
  
  pcVar2 = FUN_660520e0(param_1,'\\');
  if (pcVar2 != (char *)0x0) {
    FUN_6605b7e0(local_10,pcVar2 + 1);
    pbVar5 = &DAT_6606c78c;
    pbVar3 = local_10[0];
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_66052a6b:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_66052a70;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_66052a6b;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66052a70:
    if (iVar4 != 0) {
      pbVar3 = &DAT_6606edf4;
      do {
        bVar1 = *local_10[0];
        bVar6 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_66052aa3:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_66052aa8;
        }
        if (bVar1 == 0) break;
        bVar1 = local_10[0][1];
        bVar6 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_66052aa3;
        local_10[0] = local_10[0] + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_66052aa8:
      if (iVar4 != 0) {
        FUN_6605b770((int *)local_10);
        return 1;
      }
    }
    FUN_6605b770((int *)local_10);
  }
  return 0;
}


