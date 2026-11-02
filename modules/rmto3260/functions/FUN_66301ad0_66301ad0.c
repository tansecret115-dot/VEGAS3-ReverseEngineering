/* Module: rmto3260.dll
   Function: FUN_66301ad0
   Address: 66301ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66301b1f) */

void __fastcall FUN_66301ad0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0x1c0);
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 0) {
    assert(s_IsPtrListValid___66311ab0,s_cralist_cpp_66311ad8,0x1c1);
  }
  piVar1 = (int *)param_1[1];
  while (piVar1 != (int *)0x0) {
    local_8 = piVar1;
    FUN_66301b70((int *)&local_8);
    (**(code **)(*param_1 + 0x18))(piVar1);
    piVar1 = local_8;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


