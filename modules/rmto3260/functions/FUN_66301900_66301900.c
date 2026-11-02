/* Module: rmto3260.dll
   Function: FUN_66301900
   Address: 66301900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66301900(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0xcd);
  }
  if (param_1[1] == 0) {
    assert(s_m_pNodeHead_66311ac4,s_cralist_cpp_66311ad8,0xd0);
  }
  iVar3 = (**(code **)(*param_1 + 4))();
  if (iVar3 == 0) {
    assert(s_IsPtrListValid___66311ab0,s_cralist_cpp_66311ad8,0xd1);
  }
  piVar1 = (int *)param_1[1];
  iVar3 = *piVar1;
  iVar2 = piVar1[2];
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
    (**(code **)(*param_1 + 0x18))(piVar1);
    return iVar2;
  }
  param_1[2] = 0;
  (**(code **)(*param_1 + 0x18))(piVar1);
  return iVar2;
}


