/* Module: rmme3260.dll
   Function: FUN_66240cc0
   Address: 66240cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66240cc0(void *this,undefined4 param_1,int param_2)

{
  void *this_00;
  DWORD DVar1;
  
  (**(code **)(*(int *)this + 4))(this);
  DVar1 = GetCurrentThreadId();
  this_00 = *(void **)((int)this + 0x6c);
  if (*(DWORD *)((int)this + 0x84) == DVar1) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this_00 + 0xb4));
    if (param_2 == 3) {
      FUN_66240c00(this,0,0);
      DVar1 = GetTickCount();
      *(DWORD *)(*(int *)((int)this + 0x6c) + 0x1b0) = DVar1;
      FUN_66240340(*(void **)((int)this + 0x6c),2,100);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x6c) + 0xb4));
  }
  else if (this_00 != (void *)0x0) {
    FUN_66240340(this_00,0,0);
    *(undefined4 *)((int)this + 0xf4) = 1;
    (**(code **)(*(int *)this + 8))(this);
    return;
  }
  (**(code **)(*(int *)this + 8))(this);
  return;
}


