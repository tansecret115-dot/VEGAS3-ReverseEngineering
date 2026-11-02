/* Module: rmto3260.dll
   Function: FUN_662fa410
   Address: 662fa410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662fa410(void *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  param_1 = FUN_662f2c20(param_1);
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&param_1,4);
  if (iVar1 != 4) {
    uVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
  }
  return uVar2;
}


