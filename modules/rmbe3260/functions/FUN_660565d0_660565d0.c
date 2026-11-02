/* Module: rmbe3260.dll
   Function: FUN_660565d0
   Address: 660565d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660565d0(void *this,uint param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  int *local_8;
  
  uVar3 = 0;
  local_8 = this;
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  iVar1 = FUN_6605edb0((void *)((int)this + 4),param_1,(int *)&local_8);
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*local_8 + 4))();
  }
  uVar2 = (undefined2)((uint)uVar3 >> 0x10);
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,(short)uVar3);
}


