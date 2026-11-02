/* Module: vegas30.exe
   Function: FUN_005a4da0
   Address: 005a4da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005a4da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_004a4560(DAT_00647630);
  iVar3 = 0;
  local_4 = 0;
  if (param_6 != 0) {
    local_4 = DAT_0064b138;
    FUN_005b83b0(DAT_0064b138,1);
  }
  iVar1 = *piVar2;
  if (0 < iVar1) {
    do {
      FUN_005a4990(param_1,*(undefined4 *)(piVar2[2] + iVar3 * 4),param_2,param_3,param_4,param_5,0)
      ;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (param_6 != 0) {
    FUN_005b84d0(local_4,1);
  }
  return 0;
}


