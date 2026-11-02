/* Module: sfs4rw.dll
   Function: FUN_0044c3b0
   Address: 0044c3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044c3b0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_3 < 9) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return 0;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  bVar4 = false;
  iVar1 = 0;
  bVar5 = true;
  pbVar2 = (byte *)(param_1 + param_2);
  pbVar3 = &DAT_004a6e04 + param_2;
  do {
    if (param_3 == 0) break;
    param_3 = param_3 - 1;
    bVar4 = *pbVar2 < *pbVar3;
    bVar5 = *pbVar2 == *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  return iVar1;
}


