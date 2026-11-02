/* Module: mp3rw.dll
   Function: FUN_0042e850
   Address: 0042e850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e850(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DeleteFileA((LPCSTR)((int)param_1 + 0x208));
    FUN_0041dc20((uchar *)((int)param_1 + 0x30c),(uchar *)0x0,1);
    free(param_1);
  }
  return 0;
}


