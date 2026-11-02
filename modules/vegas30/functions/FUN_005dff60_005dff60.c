/* Module: vegas30.exe
   Function: FUN_005dff60
   Address: 005dff60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dff60(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = lstrlenA("AUDIO");
  bVar5 = false;
  iVar2 = 0;
  bVar6 = true;
  pbVar3 = param_1;
  pbVar4 = (byte *)"AUDIO";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pbVar3 < *pbVar4;
    bVar6 = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  if (iVar2 == 0) {
    return 2;
  }
  iVar1 = lstrlenA("VIDEO");
  bVar5 = false;
  iVar2 = 0;
  bVar6 = true;
  pbVar3 = (byte *)"VIDEO";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *param_1 < *pbVar3;
    bVar6 = *param_1 == *pbVar3;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  return (-(uint)(iVar2 != 0) & 0xfffffffd) + 3;
}


