/* Module: vidcap30.exe
   Function: SfOem_Done
   Address: 004bc700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_Done(void *) */

long SfOem_Done(void *param_1)

{
                    /* 0xbc700  93  ?SfOem_Done@@YGJPAX@Z */
  if (param_1 != (void *)0x0) {
    DeleteFileA((LPCSTR)((int)param_1 + 0x208));
    _SfDeleteDirectory_12((int)param_1 + 0x30c,0,1);
    free(param_1);
  }
  return 0;
}


