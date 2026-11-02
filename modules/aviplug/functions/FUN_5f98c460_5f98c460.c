/* Module: aviplug.dll
   Function: FUN_5f98c460
   Address: 5f98c460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f98c460(HANDLE param_1,uint *param_2,undefined4 *param_3,int param_4,int param_5,
                uint param_6,int param_7)

{
  uint uVar1;
  undefined4 uVar2;
  DWORD local_1c;
  int local_18;
  uint local_14;
  double local_10;
  uint local_8;
  undefined4 uStack_4;
  
  local_10 = 1.0;
  if (param_5 == 0) {
    return -0x7fffbffb;
  }
  if ((param_6 == 0) && (param_7 == 0)) {
    return -0x7fffbffb;
  }
  FUN_5f98e290(param_1,&local_1c);
  if ((param_7 < 0) || ((param_7 < 1 && (param_6 < 5)))) {
    param_2[3] = 0;
    *param_2 = *param_2 & 0xfffffffd | 1;
  }
  else {
    local_10 = (double)(ulonglong)*(uint *)(param_5 + 4);
    local_10 = (double)CONCAT44(param_7,param_6) / (double)(longlong)local_10;
    uVar1 = FUN_5f98bfb0((int)param_2,param_6,param_7,*(uint *)(param_5 + 4));
    param_2[3] = uVar1;
    if (uVar1 != 0) {
      uStack_4 = 0;
      local_8 = uVar1;
      uVar2 = ftol();
      goto LAB_5f98c51c;
    }
    *param_2 = *param_2 & 0xfffffffd | 1;
  }
  uVar2 = 0;
LAB_5f98c51c:
  FUN_5f98e2b0(param_1,local_1c);
  local_18 = param_4;
  uVar1 = FUN_5f98e910(param_1,0x64696361,&local_14,&local_18);
  if ((int)uVar1 < 0) {
    param_1 = (HANDLE)0x1;
  }
  else {
    param_1 = (HANDLE)FUN_5f98e360(param_1,param_2,0x18,local_14);
    if (param_1 == (HANDLE)0x0) {
      FUN_5f98c040(param_2,param_6,param_7,*(uint *)(param_5 + 4),0);
      uVar2 = ftol();
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return (int)param_1;
}


