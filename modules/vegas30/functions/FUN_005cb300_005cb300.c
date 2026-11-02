/* Module: vegas30.exe
   Function: FUN_005cb300
   Address: 005cb300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb300(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(param_2 + 4) != 3) {
    return 0x80004005;
  }
  if (param_3 == 1) {
    pbVar3 = (byte *)(param_2 + 0x48);
  }
  else if (param_3 == 3) {
    pbVar3 = (byte *)(param_2 + 0x58);
  }
  else {
    if (param_3 != 4) {
      return 0x80004001;
    }
    pbVar3 = (byte *)(param_2 + 0x68);
  }
  if (pbVar3 != (byte *)0x0) {
    iVar1 = 0x10;
    bVar6 = false;
    iVar2 = 0;
    bVar7 = true;
    pbVar4 = pbVar3;
    pbVar5 = param_4;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_2 + 0x15c) + 1;
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      *(int *)(param_2 + 0x15c) = iVar1;
      FUN_005410b0(param_1,param_2,0);
      *(undefined4 *)pbVar3 = *(undefined4 *)param_4;
      *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(param_4 + 4);
      *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(param_4 + 8);
      *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(param_4 + 0xc);
      return 0;
    }
  }
  return 1;
}


