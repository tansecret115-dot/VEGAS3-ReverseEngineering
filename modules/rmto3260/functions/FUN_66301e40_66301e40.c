/* Module: rmto3260.dll
   Function: FUN_66301e40
   Address: 66301e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66301e40(void *this,void *param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0x38a);
  }
  if (param_1 == (void *)0x0) {
    assert(s_pNode_66311af4,s_cralist_cpp_66311ad8,0x38f);
  }
  else {
    operator_delete(param_1);
    iVar1 = *(int *)((int)this + 0xc) + -1;
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 < 0) {
      assert(s_m_nCount_>__0_66311b38,s_cralist_cpp_66311ad8,0x397);
    }
  }
  return;
}


