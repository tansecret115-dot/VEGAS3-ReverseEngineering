/* Module: vidcap30.exe
   Function: _DibCleanupSubpixelParam@4
   Address: 00494e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _DibCleanupSubpixelParam_4(int param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0x94e80  147  _DibCleanupSubpixelParam@4 */
  if ((param_1 != 0) && (*(LPCVOID *)(param_1 + 0x70) != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalFree(pvVar1);
  }
  return;
}


