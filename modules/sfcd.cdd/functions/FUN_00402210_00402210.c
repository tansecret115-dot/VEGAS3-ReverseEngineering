/* Module: sfcd.cdd
   Function: FUN_00402210
   Address: 00402210
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402210(undefined4 *param_1,_scsicommand *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[0x58];
  lVar2 = SfScsi_ExecWithErrHandler((HSFSCSIPORT__ *)*param_1,param_2);
  if (lVar2 != 0) {
    puVar6 = (undefined4 *)(iVar1 + 100);
    FUN_00419300((int)param_2,puVar6);
    if ((param_2[0x20] != (_scsicommand)0x4) ||
       (uVar4 = extraout_ECX, param_2[0x21] != (_scsicommand)0x8)) {
      FUN_004021e0((int)puVar6);
      uVar4 = extraout_ECX_00;
    }
    uVar3 = FUN_00419370(CONCAT31((int3)((uint)uVar4 >> 8),param_2[0x16]) & 0xffffff0f);
    return uVar3;
  }
  puVar6 = (undefined4 *)(iVar1 + 100);
  for (iVar5 = 0x55; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  return 0;
}


