/* Module: sfcd.cdd
   Function: FUN_00416780
   Address: 00416780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416780(undefined4 *param_1,uint param_2,uint param_3)

{
  uchar *puVar1;
  ulong uVar2;
  int iVar3;
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
  uVar4 = uVar2 / param_3;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    iVar3 = FUN_00416680(param_1,(undefined4 *)0x0,uVar4,param_3);
    if (iVar3 != 0) break;
    param_2 = param_2 - uVar4;
  }
  return iVar3;
}


