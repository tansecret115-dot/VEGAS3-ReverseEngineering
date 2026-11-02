/* Module: rmme3260.dll
   Function: FUN_662369d0
   Address: 662369d0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_662369d0(void *param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  double local_14;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_662368b0(param_1,(undefined4 *)&local_14);
    local_c = *param_2;
  }
  else {
    local_c = *param_2;
  }
  local_8 = param_2[1];
  iVar1 = GetSystemMetrics(0);
  local_14 = (double)iVar1 / (double)local_c;
  iVar1 = GetSystemMetrics(1);
  fVar2 = (float10)iVar1 / (float10)local_8;
  if ((float10)local_14 < fVar2) {
    fVar2 = (float10)local_14;
  }
  return fVar2;
}


