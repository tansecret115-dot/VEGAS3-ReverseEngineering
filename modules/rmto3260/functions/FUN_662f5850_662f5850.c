/* Module: rmto3260.dll
   Function: FUN_662f5850
   Address: 662f5850
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_662f5850(void *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int local_10 [3];
  
  FUN_662eefd0(local_10);
  uVar5 = 0xffffffff;
  pbVar3 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar2 != 0);
  pbVar3 = (byte *)FUN_662ef590(local_10,(~uVar5 - 1) * 3 + 1);
  bVar2 = *param_2;
  while (bVar2 != 0) {
    bVar2 = *param_2;
    if (((((char)bVar2 < 'a') || ('z' < (char)bVar2)) &&
        (((char)bVar2 < 'A' || ('Z' < (char)bVar2)))) &&
       (((char)bVar2 < '0' || ('9' < (char)bVar2)))) {
      iVar4 = sprintf((char *)pbVar3,s____0_2hX_6630b764,(uint)bVar2);
      pbVar3 = pbVar3 + iVar4;
    }
    else {
      *pbVar3 = bVar2;
      pbVar3 = pbVar3 + 1;
    }
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  *pbVar3 = 0;
  FUN_662ef610(local_10,-1);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_10);
  return param_1;
}


