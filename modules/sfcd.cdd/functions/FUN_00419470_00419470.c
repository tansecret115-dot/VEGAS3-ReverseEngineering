/* Module: sfcd.cdd
   Function: FUN_00419470
   Address: 00419470
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00419470(undefined4 *param_1,_scsicommand *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  
  iVar1 = param_1[0x58];
  iVar2 = SfScsi_ExecEx((HSFSCSIPORT__ *)*param_1,param_2,param_3);
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 100);
    for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    return 0;
  }
  FUN_00419300((int)param_2,(undefined4 *)(iVar1 + 100));
  FUN_00419440(iVar1);
  uVar3 = FUN_00419370(CONCAT31((int3)((uint)extraout_ECX >> 8),param_2[0x16]) & 0xffffff0f);
  return uVar3;
}


