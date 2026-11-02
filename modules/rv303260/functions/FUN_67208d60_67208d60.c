/* Module: rv303260.dll
   Function: FUN_67208d60
   Address: 67208d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67208d60(void *this,undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x196) == 0) {
    iVar1 = FUN_67209940((int)this);
  }
  if (iVar1 == 0) {
    FUN_67201bb0((uint)this,param_1,param_2);
  }
  return;
}


