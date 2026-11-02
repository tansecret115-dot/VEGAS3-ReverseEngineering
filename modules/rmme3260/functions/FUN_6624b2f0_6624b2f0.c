/* Module: rmme3260.dll
   Function: FUN_6624b2f0
   Address: 6624b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6624b2f0(BITMAPINFO *param_1)

{
  void *_Memory;
  HANDLE hSection;
  HBITMAP h;
  void *local_8;
  
  _Memory = malloc(100);
  if (_Memory != (void *)0x0) {
    hSection = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,
                                  (param_1->bmiHeader).biSizeImage,(LPCSTR)0x0);
    if (hSection != (HANDLE)0x0) {
      h = CreateDIBSection((HDC)0x0,param_1,0,&local_8,hSection,0);
      if ((h != (HBITMAP)0x0) && (local_8 != (void *)0x0)) {
        *(HBITMAP *)((int)_Memory + 0x54) = h;
        *(HANDLE *)((int)_Memory + 0x58) = hSection;
        *(void **)((int)_Memory + 0x5c) = local_8;
        *(undefined4 *)((int)_Memory + 0x60) = 0;
        GetObjectA(h,0x54,_Memory);
        return _Memory;
      }
      CloseHandle(hSection);
    }
    free(_Memory);
  }
  return (void *)0x0;
}


