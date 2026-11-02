/* Module: sfcd.cdd
   Function: FUN_00403430
   Address: 00403430
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00403430(undefined4 *param_1,uint param_2)

{
  uchar *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = SfScsi_GetIOBuffer((HSFSCSIPORT__ *)*param_1);
  uVar2 = SfScsi_GetIOBufferSize((HSFSCSIPORT__ *)*param_1);
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar1 + 4;
  }
  for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = '\0';
    puVar1 = puVar1 + 1;
  }
  uVar4 = uVar2 / 0x930;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    uVar3 = FUN_004032f0(param_1,(uchar *)0x0,uVar4,0x930,0);
    if (uVar3 != 0) break;
    param_2 = param_2 - uVar4;
  }
  return uVar3;
}


