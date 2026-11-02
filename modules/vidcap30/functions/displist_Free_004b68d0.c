/* Module: vidcap30.exe
   Function: displist_Free
   Address: 004b68d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall displist_Free,4 */

undefined4 displist_Free(uint *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  uint local_4;
  
                    /* 0xb68d0  740  _displist_Free@4 */
  iVar2 = 0;
  local_4 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    pMem = *(LPCVOID *)(iVar2 + 8 + param_1[1]);
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(iVar2 + 8 + param_1[1]));
      GlobalFree(pvVar1);
      *(undefined4 *)(iVar2 + 8 + param_1[1]) = 0;
    }
    local_4 = local_4 + 1;
    iVar2 = iVar2 + 0xc;
  } while (local_4 < *param_1);
  return 0;
}


