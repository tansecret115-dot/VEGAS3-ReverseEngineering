/* Module: rmbe3260.dll
   Function: FUN_66058900
   Address: 66058900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66058900(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,0x126);
  }
  iVar1 = (**(code **)(*(int *)this + 4))();
  if (iVar1 == 0) {
    assert(s_IsPtrListValid___6606f430,s_cralist_cpp_6606f458,0x127);
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
  assert(s_pNewNode_6606f464,s_cralist_cpp_6606f458,0x12d);
  return 0;
}


