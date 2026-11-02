/* Module: vfplugs.dll
   Function: FUN_00401b10
   Address: 00401b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00401b10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe4));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 0xdc);
  *(int *)((int)this + 0xdc) = param_1;
  iVar2 = *(int *)((int)this + 0xd4) + -1;
  *(int *)((int)this + 0xd4) = iVar2;
  if ((iVar2 == 0) && (*(int *)((int)this + 0xd8) != 0)) {
    ReleaseSemaphore(*(HANDLE *)((int)this + 0xd0),*(int *)((int)this + 0xd8),(LPLONG)0x0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe4));
  if (iVar1 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  piVar3 = (int *)(**(code **)(*(int *)this + 0x44))();
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}


