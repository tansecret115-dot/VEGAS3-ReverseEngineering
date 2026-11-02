/* Module: vidcap30.exe
   Function: SfImageList_Duplicate
   Address: 0049fb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct _IMAGELIST * __stdcall SfImageList_Duplicate(struct _IMAGELIST *) */

_IMAGELIST * SfImageList_Duplicate(_IMAGELIST *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  _IMAGELIST *p_Var2;
  
                    /* 0x9fb20  81  ?SfImageList_Duplicate@@YGPAU_IMAGELIST@@PAU1@@Z */
  p_Var2 = (_IMAGELIST *)0x0;
  hModule = LoadLibraryA("COMCTL32.DLL");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"ImageList_Duplicate");
    if (pFVar1 != (FARPROC)0x0) {
      p_Var2 = (_IMAGELIST *)(*pFVar1)(param_1);
    }
    FreeLibrary(hModule);
  }
  return p_Var2;
}


