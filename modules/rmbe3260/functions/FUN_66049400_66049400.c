/* Module: rmbe3260.dll
   Function: FUN_66049400
   Address: 66049400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66049400(void *this,undefined4 param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
  *(undefined4 *)((int)this + 0x14) = uVar2;
  sVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(param_1,param_2);
  if (sVar1 != param_2) {
    uVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    return uVar2;
  }
  uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(int *)((int)this + 0x80) = *(int *)((int)this + 0x14) + 0xc;
  return 0;
}


