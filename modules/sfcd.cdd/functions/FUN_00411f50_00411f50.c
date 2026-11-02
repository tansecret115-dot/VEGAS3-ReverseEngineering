/* Module: sfcd.cdd
   Function: FUN_00411f50
   Address: 00411f50
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00411f50(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  uchar *puVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_14 [3];
  char local_8;
  
  iVar1 = *(int *)(param_1 + 0x160);
  puVar2 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
  puVar5 = param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  lVar3 = FUN_00411ed0(param_1,0,1);
  if (lVar3 == 0) {
    *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe | 2;
  }
  else {
    FUN_004192a0(iVar1 + 100,local_14);
    if (local_8 == -0x71) {
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfc;
    }
    else {
      if (local_8 != -0x6c) {
        return lVar3;
      }
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfd | 1;
    }
  }
  if ((*(byte *)((int)param_2 + 2) & 3) == 2) {
    lVar3 = FUN_00411ed0(param_1,0,1);
    if (lVar3 != 0) {
      return lVar3;
    }
    *(uchar *)(param_2 + 1) = puVar2[3];
    *(uchar *)((int)param_2 + 5) = puVar2[6];
    lVar3 = FUN_00411ed0(param_1,0,0);
    if (lVar3 != 0) {
      return lVar3;
    }
    *(uchar *)((int)param_2 + 6) = puVar2[3];
  }
  return 0;
}


