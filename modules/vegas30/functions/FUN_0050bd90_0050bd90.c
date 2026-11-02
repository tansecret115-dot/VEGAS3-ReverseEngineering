/* Module: vegas30.exe
   Function: FUN_0050bd90
   Address: 0050bd90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050bd90(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_4;
  
  local_10 = DAT_0064b138;
  local_14 = 0;
  local_c = FUN_005b8630(DAT_0064b138);
  if ((param_1 == 0) || (*(char *)(local_c + 0x1d0) != '\0')) {
    iVar3 = -0x7fffbffb;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x98);
    iVar1 = *(int *)(iVar3 + 0x9c);
    iVar2 = *(int *)(iVar3 + 0x88);
    local_4 = *(int *)(iVar3 + 0x8c);
    if (param_2 == 0) {
      param_2 = 0x22c;
    }
    iVar3 = FUN_005b58e0(&local_14);
    if (((((param_2 != 0x22c) || (param_4 == 0)) || (DAT_00657344 != param_4)) ||
        ((iVar1 != DAT_00644a28 || (iVar2 != DAT_00644a30)))) ||
       ((local_4 != DAT_00644a34 || ((iVar3 < 0 || (local_14 != 0x22c)))))) {
      if (((*(byte *)(param_1 + 0xa8) & 4) != 0) || (*(char *)(local_c + 0x1d0) != '\0')) {
        if (param_2 != 0x22c) {
          return iVar3;
        }
        FUN_0050c010(param_1,0);
      }
      DAT_00657344 = param_4;
      DAT_00644a34 = local_4;
      DAT_00644a28 = iVar1;
      DAT_00644a30 = iVar2;
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 4;
      FUN_005b83b0(DAT_0064b138,1);
      FUN_0050bf40(*(undefined4 *)(param_1 + 0x98));
      FUN_005b84d0(DAT_0064b138,1);
      if ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) == 0) {
        if (param_2 == 0) {
          param_2 = 0x231;
        }
        else if ((param_2 < 0x231) && (0x22b < param_2)) {
          param_2 = param_2 + 5;
        }
        iVar3 = FUN_004e9f70(local_10,param_2,param_3);
        return iVar3;
      }
      if (param_2 == 0) {
        param_2 = 0x22c;
      }
      iVar3 = FUN_004e9f70(local_10,param_2,param_3);
      return iVar3;
    }
  }
  return iVar3;
}


