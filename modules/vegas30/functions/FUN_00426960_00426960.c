/* Module: vegas30.exe
   Function: FUN_00426960
   Address: 00426960
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00426960(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = false;
  iVar1 = 0;
  bVar5 = true;
  iVar2 = *(int *)param_3;
  pbVar3 = (byte *)(param_1 + 0x40);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar4 = *param_3 < *pbVar3;
    bVar5 = *param_3 == *pbVar3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  return iVar1 == 0;
}


