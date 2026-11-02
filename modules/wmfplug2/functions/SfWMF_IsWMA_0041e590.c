/* Module: wmfplug2.dll
   Function: SfWMF_IsWMA
   Address: 0041e590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWMF_IsWMA(struct _GUID) */

int SfWMF_IsWMA(_GUID param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
                    /* 0x1e590  31  ?SfWMF_IsWMA@@YGHU_GUID@@@Z */
  iVar2 = 0;
  iVar1 = FUN_0041d810();
  if (-1 < iVar1) {
    iVar1 = FUN_0041d760((HKEY)param_1.Data1,"UseVideo",(LPBYTE)&local_4);
    if ((-1 < iVar1) && (local_4 == 0)) {
      iVar2 = 1;
    }
    RegCloseKey((HKEY)param_1.Data1);
  }
  return iVar2;
}


