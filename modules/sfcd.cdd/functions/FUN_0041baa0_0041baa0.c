/* Module: sfcd.cdd
   Function: FUN_0041baa0
   Address: 0041baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041baa0(_scsicommand *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  _scsicommand local_c [4];
  _scsicommand local_8;
  _scsicommand local_4;
  
  uVar1 = *(uint *)(param_3 + 0x18);
  if (param_4 == 0) {
    iVar2 = uVar1 - 0x96;
    SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_2,param_1,0xd8);
    param_1[0xd] = SUB41(iVar2,0);
    param_1[10] = SUB41((uint)iVar2 >> 0x18,0);
    param_1[0xb] = SUB41((uint)iVar2 >> 0x10,0);
    param_1[0xc] = SUB41((uint)iVar2 >> 8,0);
    param_1[0xe] = SUB41((uint)*(undefined4 *)(param_3 + 0x1c) >> 0x18,0);
    param_1[0xf] = SUB41((uint)*(undefined4 *)(param_3 + 0x1c) >> 0x10,0);
    param_1[0x10] = SUB41((uint)*(undefined4 *)(param_3 + 0x1c) >> 8,0);
    param_1[0x11] = *(_scsicommand *)(param_3 + 0x1c);
  }
  else {
    iVar2 = *(int *)(param_3 + 0x1c);
    SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_2,param_1,0xd9);
    FUN_0041eec0((uint *)local_c,uVar1);
    param_1[0xb] = local_c[0];
    param_1[0xc] = local_8;
    param_1[0xd] = local_4;
    FUN_0041eec0((uint *)local_c,uVar1 + iVar2);
    param_1[0xf] = local_c[0];
    param_1[0x10] = local_8;
    param_1[0x11] = local_4;
  }
  *(undefined4 *)(param_1 + 4) = 0xc;
  if (param_5 == 0) {
    param_1[0x12] = (_scsicommand)0x0;
    return *(int *)(param_3 + 0x1c) * 0x930;
  }
  param_1[0x12] = (_scsicommand)0x1;
  return *(int *)(param_3 + 0x1c) * 0x940;
}


