/* Module: rmto3260.dll
   Function: FUN_663019a0
   Address: 663019a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_663019a0(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0x126);
  }
  iVar1 = (**(code **)(*(int *)this + 4))();
  if (iVar1 == 0) {
    assert(s_IsPtrListValid___66311ab0,s_cralist_cpp_66311ad8,0x127);
  }
  iVar1 = (**(code **)(*(int *)this + 0x14))(0,*(undefined4 *)((int)this + 4));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_1;
    if (*(int *)((int)this + 4) == 0) {
      *(int *)((int)this + 8) = iVar1;
      *(int *)((int)this + 4) = iVar1;
      return iVar1;
    }
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int *)((int)this + 4) = iVar1;
    return iVar1;
  }
  assert(s_pNewNode_66311ae4,s_cralist_cpp_66311ad8,0x12d);
  return 0;
}


