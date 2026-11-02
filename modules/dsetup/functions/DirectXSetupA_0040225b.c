/* Module: dsetup.dll
   Function: DirectXSetupA
   Address: 0040225b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DirectXSetupA(undefined4 param_1,LPCSTR param_2,uint param_3)

{
  HANDLE hObject;
  DWORD DVar1;
  int iVar2;
  undefined4 local_8;
  
                    /* 0x225b  5  DirectXSetupA */
  local_8 = 0;
  hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"***DirectXSetupA***");
  if ((hObject == (HANDLE)0x0) || (DVar1 = GetLastError(), DVar1 == 0xb7)) {
    local_8 = 0xfffffff7;
  }
  else {
    if ((param_3 & 0x1a27) != 0) {
      param_3 = param_3 | 0x10018;
    }
    DAT_0040aa64 = param_1;
    _DAT_0040aa6c = param_3;
    iVar2 = FUN_00401c7b(param_2,&local_8);
    if (iVar2 == 0) {
      return local_8;
    }
    local_8 = (*DAT_0040aa80)(DAT_0040aa64,param_2,param_3);
  }
  CloseHandle(hObject);
  return local_8;
}


