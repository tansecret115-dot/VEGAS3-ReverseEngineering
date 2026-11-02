/* Module: rmbe3260.dll
   Function: FUN_66047cf0
   Address: 66047cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66047cf0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1 = FUN_66055be0(param_1);
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&param_1,4);
  if (iVar1 != 4) {
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
  }
  if (iVar2 == 0) {
    param_2 = FUN_66055be0(param_2);
    iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&param_2,4);
    if (iVar1 != 4) {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
  }
  return iVar2;
}


