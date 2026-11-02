/* Module: vegas30k.dll
   Function: SfCdiDeinitFileStream
   Address: 01084740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiDeinitFileStream(void *) */

long SfCdiDeinitFileStream(void *param_1)

{
                    /* 0x84740  297  ?SfCdiDeinitFileStream@@YGJPAX@Z */
  if (param_1 != (void *)0xffffffff) {
    CloseHandle(*(HANDLE *)param_1);
    *(undefined4 *)param_1 = 0xffffffff;
  }
  return 0;
}


