/* Module: encn3260.dll
   Function: FUN_664b54a0
   Address: 664b54a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b54a0(int param_1,int *param_2,undefined4 *param_3)

{
  UINT uMode;
  HMODULE pHVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  int iVar5;
  
  if (*param_2 != 0) {
    return 0;
  }
  uMode = SetErrorMode(0x8000);
  pHVar1 = LoadLibraryA(s_DDRAW_DLL_664e3a3c);
  *param_3 = pHVar1;
  SetErrorMode(uMode);
  if ((HMODULE)*param_3 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress((HMODULE)*param_3,s_DirectDrawCreate_664e32e4);
    pFVar3 = GetProcAddress((HMODULE)*param_3,s_DirectDrawEnumerateA_664e3a24);
    pFVar4 = GetProcAddress((HMODULE)*param_3,s_DirectDrawEnumerateExA_664e3a0c);
    if ((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) {
      if (pFVar4 == (FARPROC)0x0) {
        iVar5 = FUN_664b5580(param_1,pFVar2,pFVar3);
        *param_2 = iVar5;
      }
      else {
        iVar5 = FUN_664b5670(param_1,pFVar2,pFVar4);
        *param_2 = iVar5;
      }
      if (*param_2 == 0) {
        FUN_664b4dc0(param_2,(int *)0x0,param_3);
        return 0x80004002;
      }
      return 0;
    }
    FUN_664b4dc0(param_2,(int *)0x0,param_3);
  }
  return 0x80004002;
}


