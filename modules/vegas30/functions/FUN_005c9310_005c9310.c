/* Module: vegas30.exe
   Function: FUN_005c9310
   Address: 005c9310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c9310(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(param_2 + 4) != 3) {
    return 0x80004005;
  }
  if (param_3 == 2) {
    pbVar1 = (byte *)(param_2 + 0x110);
  }
  else if (param_3 == 3) {
    pbVar1 = (byte *)(param_2 + 0x120);
  }
  else {
    if (param_3 != 4) {
      return 0x80004001;
    }
    pbVar1 = (byte *)(param_2 + 0x130);
  }
  if (pbVar1 != (byte *)0x0) {
    iVar2 = 0x10;
    bVar6 = false;
    iVar3 = 0;
    bVar7 = true;
    pbVar4 = pbVar1;
    pbVar5 = param_4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    if (iVar3 != 0) {
      *(undefined4 *)pbVar1 = *(undefined4 *)param_4;
      *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(param_4 + 4);
      *(undefined4 *)(pbVar1 + 8) = *(undefined4 *)(param_4 + 8);
      *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(param_4 + 0xc);
      iVar2 = *(int *)(param_2 + 0x3c) + 1;
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_2 + 0x3c) = iVar2;
      FUN_005410b0(param_1,*(undefined4 *)(param_2 + 8),0);
      return 0;
    }
  }
  return 1;
}


