/* Module: vegas30.exe
   Function: FUN_0050d990
   Address: 0050d990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d990(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = 4;
  *param_1 = 1000000;
  param_1[2] = -1000000;
  param_1[1] = 1000000;
  param_1[3] = -1000000;
  do {
    FUN_0050d7f0(&local_8,param_2,param_3,param_4);
    iVar1 = *param_1;
    if (local_8 < *param_1) {
      iVar1 = local_8;
    }
    *param_1 = iVar1;
    iVar1 = param_1[2];
    if (param_1[2] < local_8) {
      iVar1 = local_8;
    }
    param_1[2] = iVar1;
    iVar1 = param_1[1];
    if (local_4 < param_1[1]) {
      iVar1 = local_4;
    }
    param_1[1] = iVar1;
    iVar1 = local_4;
    if (local_4 <= param_1[3]) {
      iVar1 = param_1[3];
    }
    param_2 = param_2 + 0x10;
    iVar2 = iVar2 + -1;
    param_1[3] = iVar1;
  } while (iVar2 != 0);
  return 1;
}


