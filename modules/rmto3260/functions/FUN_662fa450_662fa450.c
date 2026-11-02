/* Module: rmto3260.dll
   Function: FUN_662fa450
   Address: 662fa450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fa450(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1 = FUN_662f2c20(param_1);
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&param_1,4);
  if (iVar1 != 4) {
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
  }
  if (iVar2 == 0) {
    param_2 = FUN_662f2c20(param_2);
    iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&param_2,4);
    if (iVar1 != 4) {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
  }
  return iVar2;
}


