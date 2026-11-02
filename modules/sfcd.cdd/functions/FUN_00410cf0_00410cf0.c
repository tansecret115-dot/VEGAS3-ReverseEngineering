/* Module: sfcd.cdd
   Function: FUN_00410cf0
   Address: 00410cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00410cf0(undefined4 *param_1,_scsicommand *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[0x58];
  lVar2 = SfScsi_ExecWithErrHandler((HSFSCSIPORT__ *)*param_1,param_2);
  if (lVar2 == 0) {
    puVar4 = (undefined4 *)(iVar1 + 100);
    for (iVar3 = 0x55; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 100);
    FUN_00419300((int)param_2,puVar4);
    FUN_00410cc0((int)puVar4);
    switch((byte)param_2[0x16] & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xb:
      return -0x7ffb1f38;
    }
  }
  return lVar2;
}


