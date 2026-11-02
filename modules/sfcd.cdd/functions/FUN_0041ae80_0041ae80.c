/* Module: sfcd.cdd
   Function: FUN_0041ae80
   Address: 0041ae80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ae80(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  _scsicommand local_64 [15];
  undefined1 local_55;
  undefined1 local_54;
  undefined1 *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x43);
  local_55 = 0x10;
  local_54 = 0;
  iVar1 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x7f0,(uchar *)"comread.cpp");
  if (iVar1 == 0) {
    *param_2 = 0x97;
    param_2[5] = 0;
    param_2[8] = 1;
    FUN_0041f970(local_1c,1);
    param_2[9] = (uint)(byte)local_1c[2];
    param_2[10] = (uint)(byte)local_1c[3];
    puVar3 = local_1c + 4;
    iVar2 = ((uint)(byte)local_1c[3] - (uint)(byte)local_1c[2]) + 1;
    if (iVar2 != 0) {
      puVar3 = puVar3 + iVar2 * 8;
    }
    if (puVar3[2] == -0x56) {
      FUN_0041f9a0(puVar3 + 4,1);
      param_2[6] = *(int *)(puVar3 + 4) + -1;
    }
  }
  return iVar1;
}


