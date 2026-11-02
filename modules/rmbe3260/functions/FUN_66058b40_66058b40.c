/* Module: rmbe3260.dll
   Function: FUN_66058b40
   Address: 66058b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66058b40(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,700);
  }
  if (param_1 == 0) {
    iVar1 = FUN_66058900(this,param_2);
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
    assert(s_pOldNode____m_pNodeHead_6606f47c,s_cralist_cpp_6606f458,0x2d1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


