/* Module: vegas30.exe
   Function: FUN_005c01d0
   Address: 005c01d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c01d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  iVar1 = FUN_005be790(param_2,param_3,&local_14);
  if (iVar1 == 1) {
    if (*(int *)(DAT_0064762c + 0xa0) == 0) goto LAB_005c0382;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00445cf0(*(undefined4 *)(DAT_0064762c + 0xa0),&local_10);
    if ((((local_10 == 2) && (local_c == param_1)) && (local_4 == 400)) && (local_8 == local_14))
    goto LAB_005c0382;
    local_8 = local_14;
    local_10 = 2;
    uVar2 = *(undefined4 *)(DAT_0064762c + 0xa0);
  }
  else {
    if (iVar1 == 2) {
      local_10 = 2;
      local_8 = local_14;
      local_4 = 0;
      local_c = param_1;
      if (*(int *)(DAT_0064762c + 0xa4) != 0) {
        FUN_0050d1d0(*(int *)(DAT_0064762c + 0xa4),&local_10);
        FUN_0051cff0(*(undefined4 *)(DAT_0064762c + 0xa4),local_14);
        FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
        return;
      }
      goto LAB_005c0382;
    }
    if ((iVar1 != 3) || (*(int *)(DAT_0064762c + 0xa0) == 0)) goto LAB_005c0382;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00445cf0(*(undefined4 *)(DAT_0064762c + 0xa0),&local_10);
    if (((local_10 == 3) && ((local_c == param_1 && (local_4 == 400)))) && (local_8 == local_14))
    goto LAB_005c0382;
    local_10 = 3;
    local_8 = local_14;
    uVar2 = *(undefined4 *)(DAT_0064762c + 0xa0);
  }
  local_4 = 400;
  local_c = param_1;
  FUN_00446020(uVar2,&local_10);
LAB_005c0382:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return;
}


