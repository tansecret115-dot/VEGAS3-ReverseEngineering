/* Module: sfcd.cdd
   Function: FUN_00407330
   Address: 00407330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00407330(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uchar *puVar2;
  ulong uVar3;
  uint uVar4;
  uchar *puVar5;
  uint local_10;
  
  iVar1 = param_1[0x58];
  puVar2 = SfScsi_GetIOBuffer((HSFSCSIPORT__ *)*param_1);
  uVar3 = SfScsi_GetIOBufferSize((HSFSCSIPORT__ *)*param_1);
  local_10 = 1;
  if (param_2 != 0) {
    local_10 = 0x8001;
  }
  param_2 = uVar3 / 0x940;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 < param_2) {
      param_2 = param_4;
    }
    if (param_2 != 0) {
      uVar4 = param_2;
      puVar5 = puVar2;
      do {
        CreateRawSectors(puVar5,(uchar *)0x0,param_3,local_10,1);
        FUN_00401430((int *)(iVar1 + 500),puVar5 + 0x930);
        puVar5 = puVar5 + 0x940;
        param_3 = param_3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = FUN_00406e30(param_1,(byte *)0x0,param_2,0x930,0);
    if (uVar4 != 0) break;
    param_4 = param_4 - param_2;
  }
  return uVar4;
}


