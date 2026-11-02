/* Module: mp3plug.dll
   Function: FUN_5f710b80
   Address: 5f710b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f710b80(void)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (in_EAX != (byte *)0x0) {
    iVar2 = 4;
    bVar5 = false;
    iVar1 = 0;
    bVar6 = true;
    pbVar3 = in_EAX;
    pbVar4 = &DAT_5f764648;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pbVar3 < *pbVar4;
      bVar6 = *pbVar3 == *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      if (bVar5) {
        iVar1 = -2;
      }
      iVar1 = iVar1 + 1;
    }
    if ((iVar1 == 0) && (*(int *)(in_EAX + 4) != 0)) {
      return 1;
    }
  }
  return 0;
}


