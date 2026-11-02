/* Module: rmbe3260.dll
   Function: FUN_66056440
   Address: 66056440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66056440(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)this + 0x3c) != 0)) {
    do {
      piVar2 = (int *)FUN_6605c4d0((int *)((int)this + 0x2c));
      (**(code **)(*piVar2 + 0x10))();
      if (piVar2 != (int *)0x0) {
        FUN_66056070(piVar2);
        operator_delete(piVar2);
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
    } while (*(int *)((int)this + 0x3c) != 0);
  }
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x28) = uVar1;
  param_2[1] = uVar1;
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  return 0;
}


