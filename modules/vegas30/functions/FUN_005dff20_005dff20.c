/* Module: vegas30.exe
   Function: FUN_005dff20
   Address: 005dff20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005dff20(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = lstrlenA("TRUE");
  bVar4 = false;
  iVar2 = 0;
  bVar5 = true;
  pbVar3 = &DAT_0062a874;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *param_1 < *pbVar3;
    bVar5 = *param_1 == *pbVar3;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  return iVar2 == 0;
}


