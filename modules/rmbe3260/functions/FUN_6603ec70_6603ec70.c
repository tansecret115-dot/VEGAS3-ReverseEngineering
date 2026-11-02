/* Module: rmbe3260.dll
   Function: FUN_6603ec70
   Address: 6603ec70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603ec70(void *this,int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8e));
  if (**(int **)((int)this + 0x42) != 0) {
    return 0xfff1;
  }
  if (*(int *)((int)this + 0x7e) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x7e) = 1;
    *(undefined4 *)((int)this + 0x7a) = uVar1;
    *(undefined4 *)((int)this + 0x72) = uVar1;
    *(undefined4 *)((int)this + 0x76) = uVar1;
  }
  uVar1 = (**(code **)(*(int *)this + 0x2c))(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8e));
  return uVar1;
}


