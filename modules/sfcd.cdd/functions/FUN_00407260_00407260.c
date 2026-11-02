/* Module: sfcd.cdd
   Function: FUN_00407260
   Address: 00407260
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00407260(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uchar *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = param_1[0x58];
  puVar2 = SfScsi_GetIOBuffer((HSFSCSIPORT__ *)*param_1);
  uVar3 = SfScsi_GetIOBufferSize((HSFSCSIPORT__ *)*param_1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = puVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = '\0';
    puVar2 = puVar2 + 1;
  }
  uVar4 = uVar3 / param_3;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    puVar2 = SfScsi_GetIOBuffer((HSFSCSIPORT__ *)*param_1);
    pbVar6 = puVar2 + param_3;
    if (uVar4 != 0) {
      uVar5 = uVar4;
      do {
        FUN_00401430((int *)(iVar1 + 500),pbVar6);
        pbVar6 = pbVar6 + param_3 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar5 = FUN_00406e30(param_1,(byte *)0x0,uVar4,param_3,0);
    if (uVar5 != 0) break;
    param_2 = param_2 - uVar4;
  }
  return uVar5;
}


