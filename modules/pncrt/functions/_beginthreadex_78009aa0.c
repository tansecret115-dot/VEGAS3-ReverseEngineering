/* Module: pncrt.dll
   Function: _beginthreadex
   Address: 78009aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uintptr_t __cdecl
_beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
              uint _InitFlag,uint *_ThrdAddr)

{
  void *lpParameter;
  HANDLE pvVar1;
  DWORD DVar2;
  
                    /* 0x9aa0  177  _beginthreadex */
  DVar2 = 0;
  lpParameter = calloc(1,0x74);
  if (lpParameter != (void *)0x0) {
    FUN_78009ca0((int)lpParameter);
    *(_StartAddress **)((int)lpParameter + 0x48) = _StartAddress;
    *(void **)((int)lpParameter + 0x4c) = _ArgList;
    *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
    pvVar1 = CreateThread(_Security,_StackSize,FUN_78009b20,lpParameter,_InitFlag,_ThrdAddr);
    if (pvVar1 != (HANDLE)0x0) {
      return (uintptr_t)pvVar1;
    }
    DVar2 = GetLastError();
  }
  free(lpParameter);
  if (DVar2 != 0) {
    FUN_7800a870(DVar2);
  }
  return 0;
}


