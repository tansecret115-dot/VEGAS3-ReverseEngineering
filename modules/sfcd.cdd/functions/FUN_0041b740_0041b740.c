/* Module: sfcd.cdd
   Function: FUN_0041b740
   Address: 0041b740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b740(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar6;
  undefined4 *puVar7;
  _scsicommand local_64 [72];
  undefined4 *local_1c;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (*param_2 == 0) {
    return -0x7fffbffd;
  }
  while( true ) {
    while( true ) {
      bVar2 = FUN_0041b3e0(iVar1,(int)param_2);
      iVar3 = CONCAT31(extraout_var,bVar2);
      uVar4 = FUN_0041b490(local_64,(undefined4 *)param_1,(int)param_2,0,0,iVar3);
      iVar5 = FUN_004194d0((undefined4 *)param_1,local_64);
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0xa6e,(uchar *)"comread.cpp");
      if (iVar5 == 0) break;
      if (iVar3 == 0) {
        return iVar5;
      }
      bVar2 = FUN_004193d0(iVar1,(int)local_64,0x72);
      if ((CONCAT31(extraout_var_00,bVar2) == 0) &&
         (bVar2 = FUN_00419420((int)local_64,5), CONCAT31(extraout_var_01,bVar2) == 0)) {
        return iVar5;
      }
      *(uint *)(iVar1 + 0x1c4) = *(uint *)(iVar1 + 0x1c4) | 3;
    }
    if (iVar3 == 0) {
      if (((byte)*(uint *)(param_1 + 0x2ce) & 1) == 1) {
        *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) & 0xffff7fff;
      }
      puVar7 = (undefined4 *)*param_2;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *local_1c;
        local_1c = local_1c + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)local_1c;
        local_1c = (undefined4 *)((int)local_1c + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      return 0;
    }
    FUN_0041b290(local_1c,(undefined4 *)*param_2,(undefined4 *)param_2[2],param_2[7]);
    if (((byte)*(uint *)(iVar1 + 0x1c4) & 2) == 2) goto LAB_0041b8a8;
    *(uint *)(iVar1 + 0x1c4) = *(uint *)(iVar1 + 0x1c4) | 2;
    bVar2 = FUN_0041b420(param_2[2],param_2[7]);
    if (CONCAT31(extraout_var_02,bVar2) != 0) break;
    *(uint *)(iVar1 + 0x1c4) = *(uint *)(iVar1 + 0x1c4) | 1;
  }
  if (((byte)*(uint *)(param_1 + 0x2ce) & 1) == 1) {
    *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 0x8000;
  }
LAB_0041b8a8:
  param_2[3] = param_2[7] << 4;
  return 0;
}


