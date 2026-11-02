/* Module: vegas30.exe
   Function: FUN_005a5de0
   Address: 005a5de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005a5de0(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  piVar2 = (int *)FUN_005a5bd0(param_1,1,param_4);
  if (piVar2 != (int *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      local_4 = *(int *)(*param_2 + 8);
      iVar1 = *(int *)(*piVar2 + 8);
      if (iVar1 <= local_4) {
        local_4 = iVar1;
      }
      iVar1 = *(int *)(*param_2 + 4);
      local_8 = *(int *)(*piVar2 + 4);
      if (iVar1 < local_8) {
        local_8 = iVar1;
      }
      local_10 = 0;
      local_c = 0;
      param_3 = &local_10;
    }
    _SfDibCopy_36(*piVar2,piVar2[0x10b],param_3,piVar2[0x10c],*param_2,param_2[0x10b],param_3,
                  param_2[0x10c],3);
    piVar2[0x10d] = (param_2[0x10d] ^ piVar2[0x10d]) & 2U ^ piVar2[0x10d];
    (*(code *)param_2[0x114])(param_2,param_2[0x115],param_2[0x116]);
    return piVar2;
  }
  return (int *)0x0;
}


