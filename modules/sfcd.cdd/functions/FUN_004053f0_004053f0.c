/* Module: sfcd.cdd
   Function: FUN_004053f0
   Address: 004053f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004053f0(undefined4 *param_1,int param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  uchar *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_1;
  puVar2 = SfScsi_GetIOBuffer((HSFSCSIPORT__ *)*param_1);
  uVar3 = SfScsi_GetIOBufferSize((HSFSCSIPORT__ *)*param_1);
  param_1 = (undefined4 *)0x1;
  if (param_2 != 0) {
    param_1 = (undefined4 *)0x8001;
  }
  uVar5 = uVar3 / 0x930;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    CreateRawSectors(puVar2,(uchar *)0x0,param_3,(uint)param_1,uVar5);
    uVar4 = FUN_00405240(puVar1,(uchar *)0x0,uVar5,0x930,0);
    if (uVar4 != 0) break;
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
  }
  return uVar4;
}


