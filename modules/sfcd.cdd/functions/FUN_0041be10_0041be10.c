/* Module: sfcd.cdd
   Function: FUN_0041be10
   Address: 0041be10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041be10(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_70;
  uint local_6c;
  uint local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  byte local_59;
  byte local_58;
  byte local_57 [2];
  byte local_55;
  byte local_54;
  byte local_53 [55];
  undefined4 *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (*param_2 == 0) {
    return -0x7fffbffd;
  }
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xd9);
  uVar2 = param_2[6];
  iVar3 = param_2[7];
  local_60 = 0xc;
  FUN_0041eec0(&local_70,uVar2);
  FUN_0041f150(&local_59,local_70);
  FUN_0041f150(&local_58,local_6c);
  FUN_0041f150(local_57,local_68);
  FUN_0041eec0(&local_70,iVar3 + uVar2);
  FUN_0041f150(&local_55,local_70);
  FUN_0041f150(&local_54,local_6c);
  FUN_0041f150(local_53,local_68);
  local_53[1] = 1;
  iVar3 = FUN_004194d0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0xc1c,(uchar *)"comread.cpp");
  if (iVar3 == 0) {
    FUN_0041b290(local_1c,(undefined4 *)*param_2,(undefined4 *)param_2[2],param_2[7]);
    param_2[3] = param_2[7] << 4;
  }
  return iVar3;
}


