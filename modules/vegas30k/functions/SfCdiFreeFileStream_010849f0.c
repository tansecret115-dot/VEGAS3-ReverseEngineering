/* Module: vegas30k.dll
   Function: SfCdiFreeFileStream
   Address: 010849f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiFreeFileStream(void *) */

long SfCdiFreeFileStream(void *param_1)

{
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x849f0  299  ?SfCdiFreeFileStream@@YGJPAX@Z */
  if ((param_1 != (void *)0xffffffff) && (param_1 != (void *)0x0)) {
    SfCdiDeinitFileStream(param_1);
    if (((*(uint *)((int)param_1 + 4) & 1) != 0) && (uVar2 = 0, *(int *)((int)param_1 + 0x14) != 0))
    {
      puVar3 = (undefined4 *)((int)param_1 + 0x58);
      do {
        if ((HANDLE)*puVar3 != (HANDLE)0x0) {
          CloseHandle((HANDLE)*puVar3);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 7;
      } while (uVar2 < *(uint *)((int)param_1 + 0x14));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


