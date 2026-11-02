/* Module: sfppack2.dll
   Function: FUN_5cd00440
   Address: 5cd00440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd00440(void *this,int param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  int local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  puVar2 = (undefined4 *)((int)this + 0x34);
  local_8 = 2;
  do {
    if ((HWND)*puVar2 != (HWND)0x0) {
      BVar1 = IsWindow((HWND)*puVar2);
      if (BVar1 == 0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        PostMessageA((HWND)*puVar2,0x111,(uint)*(ushort *)(puVar2 + 1) | param_1 << 0x10,0);
      }
    }
    puVar2 = puVar2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}


