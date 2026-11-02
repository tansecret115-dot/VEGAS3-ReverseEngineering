/* Module: vidcap30.exe
   Function: FUN_00467e90
   Address: 00467e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00467e90(int *param_1,int *param_2)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int *_ArgList;
  HANDLE pvVar3;
  DWORD DVar4;
  int iVar5;
  uintptr_t uVar6;
  
  hMem = GlobalAlloc(0x40,0xf8);
  pvVar2 = GlobalLock(hMem);
  if ((pvVar2 == (LPVOID)0x0) ||
     (_ArgList = (int *)FUN_004686b0("sfwriter",param_1,param_2), _ArgList == (int *)0x0)) {
    *param_2 = -0x7ff8fff2;
    return (int *)0x0;
  }
  pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"sfwriter.mutex");
  if (pvVar3 != (HANDLE)0x0) {
    DVar4 = WaitForSingleObject(pvVar3,10000);
    if (DVar4 == 0x102) {
      CloseHandle(pvVar3);
    }
    else {
      _ArgList[0x29] = (int)pvVar3;
      pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,"RenderEvent");
      _ArgList[0x2c] = (int)pvVar3;
      if (pvVar3 != (HANDLE)0x0) {
        pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"NonRenderEvent");
        _ArgList[0x2d] = (int)pvVar3;
        if (pvVar3 != (HANDLE)0x0) {
          pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"RenderStop");
          _ArgList[0x2b] = (int)pvVar3;
          if (pvVar3 != (HANDLE)0x0) {
            iVar5 = _SfList_CreateExZ_32(_ArgList + 0x28,4,0xffffffff,0xffffffff,0x80000000,0,0,0);
            if (iVar5 < 0) goto LAB_00468032;
            _ArgList[0x2a] = 0;
            uVar6 = _beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_004673b0,_ArgList,0,
                                   (uint *)&param_1);
            if ((uVar6 != 0xffffffff) &&
               (DVar4 = WaitForSingleObject((HANDLE)_ArgList[0x2d],120000), DVar4 != 0x102)) {
              ResetEvent((HANDLE)_ArgList[0x2d]);
              EnterCriticalSection((LPCRITICAL_SECTION)(_ArgList + 0x1c));
              iVar1 = _ArgList[0x2a];
              LeaveCriticalSection((LPCRITICAL_SECTION)(_ArgList + 0x1c));
              if (iVar1 == 1) {
                *param_2 = iVar5;
                return _ArgList;
              }
              _ArgList[0x2a] = 4;
            }
          }
        }
      }
    }
  }
  iVar5 = -0x7fffbffb;
LAB_00468032:
  (**(code **)(*_ArgList + 0xc))(1);
  *param_1 = iVar5;
  return (int *)0x0;
}


