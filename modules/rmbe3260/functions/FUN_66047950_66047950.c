/* Module: rmbe3260.dll
   Function: FUN_66047950
   Address: 66047950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66047950(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *local_8;
  
  iVar2 = 0;
  local_8 = this;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(&local_8,4);
  if (iVar1 != 4) {
    iVar2 = -0x7ffbff7f;
  }
  if (iVar2 == 0) {
    iVar1 = FUN_66055be0((uint)local_8);
    if (iVar1 != param_1) {
      iVar2 = -0x7ffbff7f;
    }
  }
  return iVar2;
}


