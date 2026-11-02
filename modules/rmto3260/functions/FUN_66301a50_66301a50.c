/* Module: rmto3260.dll
   Function: FUN_66301a50
   Address: 66301a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66301a50(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0x153);
  }
  iVar1 = (**(code **)(*(int *)this + 4))();
  if (iVar1 == 0) {
    assert(s_IsPtrListValid___66311ab0,s_cralist_cpp_66311ad8,0x154);
  }
  iVar1 = (**(code **)(*(int *)this + 0x14))(*(undefined4 *)((int)this + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    **(int **)((int)this + 8) = iVar1;
    *(int *)((int)this + 8) = iVar1;
    return;
  }
  *(int *)((int)this + 4) = iVar1;
  *(int *)((int)this + 8) = iVar1;
  return;
}


