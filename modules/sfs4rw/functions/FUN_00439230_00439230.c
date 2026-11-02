/* Module: sfs4rw.dll
   Function: FUN_00439230
   Address: 00439230
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00439230(void *param_1,uchar *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_468;
  uchar local_464 [260];
  int local_360 [11];
  uint local_334;
  int local_330;
  CHAR local_30c [780];
  
  *param_3 = 0;
  param_3[1] = 0;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar2 = 0x80004005;
  }
  else {
    local_468 = 0;
    piVar4 = local_360;
    for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    uVar2 = FUN_00435d40(param_1,param_2,local_464,&local_468);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_0043c9d0(param_1,local_360);
      while (uVar2 == 0) {
        iVar3 = FUN_00435e60(local_30c,(LPCSTR)local_464,local_468);
        if (iVar3 != 0) {
          uVar1 = *param_3;
          *param_3 = uVar1 + local_334;
          param_3[1] = param_3[1] + local_330 + (uint)CARRY4(uVar1,local_334);
          if (local_468 == 0) break;
        }
        uVar2 = FUN_0043ca90(param_1,local_360);
      }
    }
  }
  return (-1 < (int)uVar2) - 1 & uVar2;
}


