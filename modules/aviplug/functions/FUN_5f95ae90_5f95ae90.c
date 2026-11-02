/* Module: aviplug.dll
   Function: FUN_5f95ae90
   Address: 5f95ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f95ae90(LPCSTR param_1,uint *param_2)

{
  LSTATUS LVar1;
  HGLOBAL pvVar2;
  LPCSTR lpValueName;
  uint uVar3;
  HKEY local_8;
  int local_4;
  
  uVar3 = 0;
  local_4 = 0;
  LVar1 = RegCreateKeyA((HKEY)0x80000002,"Software\\Sonic Foundry\\ACMCache",&local_8);
  if (LVar1 == 0) {
    if (param_1 == (LPCSTR)0x0) {
      pvVar2 = GlobalAlloc(0x42,0x3520);
      param_1 = GlobalLock(pvVar2);
      if (param_1 == (LPCSTR)0x0) {
        RegCloseKey(local_8);
        return 0x8007000e;
      }
      local_4 = 1;
    }
    FUN_5f95ae20(param_1,param_2);
    lpValueName = param_1;
    if (*param_2 != 0) {
      do {
        RegSetValueExA(local_8,lpValueName,0,3,(BYTE *)(lpValueName + 0x80),8);
        uVar3 = uVar3 + 1;
        lpValueName = lpValueName + 0x88;
      } while (uVar3 < *param_2);
    }
    if (local_4 != 0) {
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    RegCloseKey(local_8);
  }
  return 1;
}


