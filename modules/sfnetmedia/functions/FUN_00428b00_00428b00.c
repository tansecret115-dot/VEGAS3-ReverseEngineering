/* Module: sfnetmedia.dll
   Function: FUN_00428b00
   Address: 00428b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00428b00(void *this,uchar *param_1)

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
      iVar4 = FUN_00427540(param_1,puVar1);
      if (-1 < iVar4) {
        iVar4 = FUN_00427980((int)this);
        if (-1 < iVar4) {
          FUN_00427630((int)this);
          pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00428c60,
                                this,0,(LPDWORD)((int)this + 0x44));
          *(HANDLE *)((int)this + 0x40) = pvVar2;
          if (pvVar2 != (HANDLE)0x0) {
            *(undefined4 *)((int)this + 0x68) = 1;
            LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          FUN_00427660(this);
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


