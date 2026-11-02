/* Module: rmbe3260.dll
   Function: FUN_66058a30
   Address: 66058a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66058a7f) */

void __fastcall FUN_66058a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,0x1c0);
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 0) {
    assert(s_IsPtrListValid___6606f430,s_cralist_cpp_6606f458,0x1c1);
  }
  piVar1 = (int *)param_1[1];
  while (piVar1 != (int *)0x0) {
    local_8 = piVar1;
    FUN_66058ad0((int *)&local_8);
    (**(code **)(*param_1 + 0x18))(piVar1);
    piVar1 = local_8;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


