/* Module: rmbe3260.dll
   Function: FUN_660564f0
   Address: 660564f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_660564f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = 0;
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  if (*(int *)((int)this + 0x24) != 0) {
    if (*(int *)((int)this + 0x3c) != 0) {
      piVar1 = (int *)FUN_6605c4d0((int *)((int)this + 0x2c));
      (**(code **)(*piVar1 + 4))();
      uVar3 = (**(code **)(*piVar1 + 0x18))();
      FUN_6605ed40((void *)((int)this + 4),uVar3,(int)piVar1);
      *param_1 = piVar1;
    }
    if (uVar3 == 0) {
      this_00 = operator_new(0x13);
      if (this_00 == (void *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)FUN_66056010(this_00,this,*(byte *)((int)this + 0x44) >> 1 & 1);
      }
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)((int)this + 0x24));
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 4))();
          uVar3 = (**(code **)(*piVar1 + 0x18))();
          FUN_6605ed40((void *)((int)this + 4),uVar3,(int)piVar1);
          *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
          *param_1 = piVar1;
        }
      }
    }
  }
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  return uVar3;
}


