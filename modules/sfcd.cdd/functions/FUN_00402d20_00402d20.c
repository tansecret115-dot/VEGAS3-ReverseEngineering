/* Module: sfcd.cdd
   Function: FUN_00402d20
   Address: 00402d20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402d20(undefined4 *param_1,_scsicommand *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1[0x58];
  lVar2 = SfScsi_ExecWithErrHandler((HSFSCSIPORT__ *)*param_1,param_2);
  if (lVar2 != 0) {
    puVar5 = (undefined4 *)(iVar1 + 100);
    FUN_00419300((int)param_2,puVar5);
    FUN_00402cf0((int)puVar5);
    uVar3 = FUN_00419370(CONCAT31((int3)((uint)extraout_ECX >> 8),param_2[0x16]) & 0xffffff0f);
    return uVar3;
  }
  puVar5 = (undefined4 *)(iVar1 + 100);
  for (iVar4 = 0x55; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  return 0;
}


