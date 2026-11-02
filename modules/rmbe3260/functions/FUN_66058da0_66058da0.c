/* Module: rmbe3260.dll
   Function: FUN_66058da0
   Address: 66058da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66058da0(void *this,void *param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,0x38a);
  }
  if (param_1 == (void *)0x0) {
    assert(s_pNode_6606f474,s_cralist_cpp_6606f458,0x38f);
  }
  else {
    operator_delete(param_1);
    iVar1 = *(int *)((int)this + 0xc) + -1;
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 < 0) {
      assert(s_m_nCount_>__0_6606f4b8,s_cralist_cpp_6606f458,0x397);
    }
  }
  return;
}


