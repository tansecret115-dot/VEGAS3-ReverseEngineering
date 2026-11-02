/* Module: rmto3260.dll
   Function: FUN_66301be0
   Address: 66301be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66301be0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,700);
  }
  if (param_1 == 0) {
    iVar1 = FUN_663019a0(this,param_2);
    return iVar1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x14))(*(undefined4 *)(param_1 + 4),param_1);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 4) = iVar1;
    return iVar1;
  }
  if (param_1 != *(int *)((int)this + 4)) {
    assert(s_pOldNode____m_pNodeHead_66311afc,s_cralist_cpp_66311ad8,0x2d1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


