/* Module: rmme3260.dll
   Function: FUN_6625cc30
   Address: 6625cc30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6625cc30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = -0x7ffbfff7;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    iVar1 = (**(code **)(**(int **)((int)this + 0x36) + 0x14))
                      (param_1,param_2,param_3,param_4,param_5);
    if (iVar1 < 0) {
      *(undefined4 *)((int)this + 0xbc) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0xbc) = 1;
    }
    (**(code **)(**(int **)((int)this + 0x54) + 4))();
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return iVar1;
}


