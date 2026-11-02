/* Module: sfcd.cdd
   Function: FUN_0041b8c0
   Address: 0041b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b8c0(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_70;
  uint local_6c;
  uint local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54 [56];
  undefined4 *local_1c;
  
  iVar3 = *(int *)(param_1 + 0x160);
  iVar1 = param_2[7];
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xd5);
  local_60 = 10;
  FUN_0041eec0(&local_70,param_2[6]);
  FUN_0041f150(&local_59,local_70);
  FUN_0041f150(&local_58,local_6c);
  FUN_0041f150(&local_57,local_68);
  FUN_0041eec0(&local_70,param_2[7] + param_2[6]);
  FUN_0041f150(&local_56,local_70);
  FUN_0041f150(&local_55,local_6c);
  FUN_0041f150(local_54,local_68);
  iVar2 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar3 + 100),0xae8,(uchar *)"comread.cpp");
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)*param_2;
    for (iVar3 = (iVar1 * 0x93 & 0xfffffffU) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *local_1c;
      local_1c = local_1c + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)local_1c;
      local_1c = (undefined4 *)((int)local_1c + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return iVar2;
}


