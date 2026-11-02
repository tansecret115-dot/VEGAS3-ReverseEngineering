/* Module: sfs4rw.dll
   Function: FUN_00438f10
   Address: 00438f10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00438f10(void *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_360 [11];
  uint local_334;
  int local_330;
  
  iVar2 = 0;
  if ((*(int *)((int)param_1 + 0x8b0) == 0) && (*(int *)((int)param_1 + 0x8b4) == 0)) {
    if (*(int *)((int)param_1 + 0x24) == 0) {
      FUN_0043c400(param_1,0xaaaaaaa1,(uchar *)"GetSizeExtractAll",(uchar *)0x0);
      return 0x80004005;
    }
    piVar3 = local_360;
    for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar2 = FUN_0043c9d0(param_1,local_360);
    while (iVar2 == 0) {
      uVar1 = *(uint *)((int)param_1 + 0x8b0);
      *(uint *)((int)param_1 + 0x8b0) = uVar1 + local_334;
      *(uint *)((int)param_1 + 0x8b4) =
           *(int *)((int)param_1 + 0x8b4) + local_330 + (uint)CARRY4(uVar1,local_334);
      iVar2 = FUN_0043ca90(param_1,local_360);
    }
  }
  *param_2 = *(undefined4 *)((int)param_1 + 0x8b0);
  param_2[1] = *(undefined4 *)((int)param_1 + 0x8b4);
  return (uint)(iVar2 < 0);
}


