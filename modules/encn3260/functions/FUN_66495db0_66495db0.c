/* Module: encn3260.dll
   Function: FUN_66495db0
   Address: 66495db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66495db0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)this + 0x18))(*(int **)this,&local_c);
  iVar1 = local_8;
  iVar2 = local_c;
  if (999999 < local_8) {
    iVar1 = local_8 % 1000000;
    iVar2 = local_8 / 1000000 + local_c;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  iVar1 = local_c;
  iVar2 = local_8;
  if (999999 < local_8) {
    iVar1 = local_8 / 1000000 + local_c;
    iVar2 = local_8 % 1000000;
  }
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  if (999999 < local_8) {
    local_c = local_8 / 1000000 + local_c;
    local_8 = local_8 % 1000000;
  }
  param_1[4] = local_c;
  param_1[6] = 0;
  param_1[5] = local_8;
  param_1[7] = 0;
  return;
}


