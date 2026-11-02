/* Module: sfcd.cdd
   Function: FUN_00411d60
   Address: 00411d60
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00411d60(HSFCD__ *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xc4);
  local_60 = 10;
  local_55 = 0x10;
  local_54 = 0;
  lVar3 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x223,(uchar *)"jvc20xx.cpp");
  *param_2 = 0;
  if (lVar3 == 0) {
    *param_2 = *local_1c;
    FUN_0041f970((undefined1 *)param_2,1);
    FUN_0041f110((char *)((int)param_2 + 2),*(byte *)((int)param_2 + 2));
    pbVar1 = (byte *)((int)param_2 + 3);
    FUN_0041f110((char *)pbVar1,*pbVar1);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined2 *)(param_3 + 2) = 0;
      if (*pbVar1 != 0) {
        if (param_4 == 0xffffffff) {
          param_4 = (uint)*pbVar1;
        }
        if (0 < (int)param_4) {
          param_4 = param_4 - 1;
        }
        local_1c = local_1c + 1;
        if (0 < (int)param_4) {
          local_1c = (undefined4 *)((int)local_1c + param_4 * 10);
        }
        *param_3 = *local_1c;
        param_3[1] = local_1c[1];
        *(undefined2 *)(param_3 + 2) = *(undefined2 *)(local_1c + 2);
        FUN_0041f110((char *)((int)param_3 + 2),*(byte *)((int)param_3 + 2));
        FUN_0041f110((char *)((int)param_3 + 3),*(byte *)((int)param_3 + 3));
        FUN_0041f110((char *)(param_3 + 1),*(byte *)(param_3 + 1));
        FUN_0041f110((char *)((int)param_3 + 5),*(byte *)((int)param_3 + 5));
        FUN_0041f110((char *)((int)param_3 + 7),*(byte *)((int)param_3 + 7));
        FUN_0041f110((char *)(param_3 + 2),*(byte *)(param_3 + 2));
        FUN_0041f110((char *)((int)param_3 + 9),*(byte *)((int)param_3 + 9));
      }
    }
  }
  return lVar3;
}


