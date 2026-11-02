/* Module: encn3260.dll
   Function: FUN_664a0d60
   Address: 664a0d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a0d60(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_664a0bd0(this,(undefined4 *)&local_24);
    local_c._0_4_ = *param_2;
  }
  else {
    local_c._0_4_ = *param_2;
  }
  local_c._4_4_ = param_2[1];
  local_24 = (double)(int)local_c;
  iVar1 = GetSystemMetrics(0);
  local_14 = (double)local_c._4_4_;
  local_c = (double)iVar1 / local_24;
  iVar1 = GetSystemMetrics(1);
  local_1c = (double)iVar1 / local_14;
  if (local_c < local_1c) {
    iVar1 = GetSystemMetrics(1);
    iVar2 = ftol();
    *param_1 = 0;
    param_1[1] = (iVar1 - iVar2) / 2;
    return;
  }
  iVar1 = GetSystemMetrics(0);
  iVar2 = ftol();
  *param_1 = (iVar1 - iVar2) / 2;
  param_1[1] = 0;
  return;
}


