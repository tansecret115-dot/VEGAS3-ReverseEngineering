/* Module: rmbe3260.dll
   Function: FUN_66056690
   Address: 66056690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66056690(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))();
  FUN_6605ee80((void *)((int)this + 4),piVar1);
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (*(int *)((int)this + 0x24) == iVar2) {
    if (*(int *)((int)this + 0x28) != 0) {
      if (this == (void *)0xffffffd4) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x3c);
      }
      if (*(int *)((int)this + 0x28) <= iVar2) goto LAB_660566ea;
    }
    FUN_6605c510((void *)((int)this + 0x2c),param_1);
  }
  else {
LAB_660566ea:
    (**(code **)(*param_1 + 0x10))();
    if (param_1 != (int *)0x0) {
      FUN_66056070(param_1);
      operator_delete(param_1);
    }
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
  }
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  return;
}


