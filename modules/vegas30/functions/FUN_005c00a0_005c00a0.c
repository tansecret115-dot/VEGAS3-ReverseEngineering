/* Module: vegas30.exe
   Function: FUN_005c00a0
   Address: 005c00a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c00a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  iVar1 = FUN_005be790(param_2,param_3,&local_14);
  if (iVar1 == 1) {
    local_10 = 2;
  }
  else {
    if (iVar1 == 2) {
      local_10 = 2;
      local_4 = 0;
      local_8 = local_14;
      local_c = param_1;
      FUN_00521940(&local_10,&stack0x0000000c);
      if (*(int *)(DAT_0064762c + 0xa4) != 0) {
        FUN_0050d1d0(*(int *)(DAT_0064762c + 0xa4),&local_10);
        FUN_0051cff0(*(undefined4 *)(DAT_0064762c + 0xa4),local_14);
        FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
        return;
      }
      goto LAB_005c01bb;
    }
    if (iVar1 != 3) goto LAB_005c01bb;
    local_10 = 3;
  }
  local_4 = 0;
  local_8 = local_14;
  local_c = param_1;
  FUN_0044e590(&local_10,0,&stack0x0000000c);
LAB_005c01bb:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return;
}


