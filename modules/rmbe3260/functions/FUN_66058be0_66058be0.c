/* Module: rmbe3260.dll
   Function: FUN_66058be0
   Address: 66058be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66058be0(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,0x2e9);
  }
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_660589b0(this,param_2);
    return iVar1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x14))(param_1,*param_1);
  if (iVar1 == 0) {
    assert(s_pNewNode_6606f464,s_cralist_cpp_6606f458,0x2f9);
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = iVar1;
    *param_1 = iVar1;
    return iVar1;
  }
  if (param_1 != *(int **)((int)this + 8)) {
    assert(s_pOldNode____m_pNodeTail_6606f494,s_cralist_cpp_6606f458,0x304);
  }
  *(int *)((int)this + 8) = iVar1;
  *param_1 = iVar1;
  return iVar1;
}


