/* Module: sfmarket2.dll
   Function: FUN_0042fa90
   Address: 0042fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0042fa90(void *this,uchar *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  LPCVOID pMem;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar4 = -0x7fffbffb;
  if (*(int *)((int)this + 0x68) == 0) {
    if (param_1 == (uchar *)0x0) {
      iVar4 = -0x7ff8ffa9;
    }
    else {
      puVar1 = (undefined4 *)((int)this + 0x6c);
      iVar4 = FUN_0042e4d0(param_1,puVar1);
      if (-1 < iVar4) {
        iVar4 = FUN_0042e910((int)this);
        if (-1 < iVar4) {
          FUN_0042e5c0((int)this);
          pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0042fbf0,
                                this,0,(LPDWORD)((int)this + 0x44));
          *(HANDLE *)((int)this + 0x40) = pvVar2;
          if (pvVar2 != (HANDLE)0x0) {
            *(undefined4 *)((int)this + 0x68) = 1;
            LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          FUN_0042e5f0(this);
          iVar4 = -0x7fffbffb;
        }
        pMem = (LPCVOID)*puVar1;
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
        *puVar1 = 0;
        LeaveCriticalSection(lpCriticalSection);
        return iVar4;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar4;
}


