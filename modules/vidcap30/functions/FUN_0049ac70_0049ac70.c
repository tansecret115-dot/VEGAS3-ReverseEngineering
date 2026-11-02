/* Module: vidcap30.exe
   Function: FUN_0049ac70
   Address: 0049ac70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0049ac70(undefined4 *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  BVar1 = IsBadWritePtr(param_1,4);
  if (BVar1 == 0) {
    BVar1 = IsBadWritePtr(param_2,4);
    if (BVar1 == 0) {
      *param_1 = 0;
      *param_2 = 0;
      hModule = LoadLibraryA("Shdocvw.dll");
      if (hModule == (HMODULE)0x0) {
        return -0x7fffbffb;
      }
      iVar3 = 0;
      pFVar2 = GetProcAddress(hModule,"DllGetVersion");
      if (pFVar2 == (FARPROC)0x0) {
        *param_1 = 4;
        *param_2 = 0;
      }
      else {
        local_10 = 0;
        local_14 = 0x14;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        iVar3 = (*pFVar2)(&local_14);
        if (-1 < iVar3) {
          *param_1 = local_10;
          *param_2 = local_c;
          FreeLibrary(hModule);
          return iVar3;
        }
      }
      FreeLibrary(hModule);
      return iVar3;
    }
  }
  return -0x7ff8ffa9;
}


