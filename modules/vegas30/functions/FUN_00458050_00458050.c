/* Module: vegas30.exe
   Function: FUN_00458050
   Address: 00458050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458050(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0xb70);
  }
  else if (*(int *)(param_1 + 0xab0) == 0) {
    lVar1 = *(longlong *)(param_1 + 0xb30);
  }
  else {
    lVar1 = (**(code **)(*(int *)(param_1 + 0xab0) + 0x18))(param_1);
  }
  if (*(double *)(param_1 + 0x1c0) <= _DAT_006106d0) {
    lVar2 = ftol();
    lVar1 = lVar2 + lVar1;
  }
  else {
    floor(((double)(param_2 / 10) * (double)*(longlong *)(param_1 + 0xb90)) /
          (double)*(int *)(param_1 + 0xb98) + _DAT_00610560);
    lVar2 = ftol();
    if (param_2 < 0) {
      lVar1 = lVar2 + lVar1;
      if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) goto LAB_004581a4;
      ftol();
    }
    else {
      lVar1 = lVar1 + lVar2;
      if (_DAT_00610fd8 == *(double *)(param_1 + 0x1c0)) goto LAB_004581a4;
      ftol();
    }
    lVar1 = ftol();
  }
LAB_004581a4:
  FUN_00453340(param_1,lVar1,0,0,-(param_3 != 0) & 0x10U | param_4 != 0);
  FUN_00455090();
  return;
}


