/* Module: vegas30k.dll
   Function: SfCdiGetFilePosition
   Address: 01084700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetFilePosition(void *,unsigned __int64 *) */

long SfCdiGetFilePosition(void *param_1,__uint64 *param_2)

{
                    /* 0x84700  303  ?SfCdiGetFilePosition@@YGJPAXPA_K@Z */
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (((param_1 != (void *)0xffffffff) && (param_1 != (void *)0x0)) && (*(int *)param_1 != -1)) {
    *(undefined4 *)param_2 = *(undefined4 *)((int)param_1 + 0x38);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_1 + 0x3c);
    return 0;
  }
  return -0x7ff8ffa9;
}


