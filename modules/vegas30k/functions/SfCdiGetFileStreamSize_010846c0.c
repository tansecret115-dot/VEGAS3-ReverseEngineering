/* Module: vegas30k.dll
   Function: SfCdiGetFileStreamSize
   Address: 010846c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetFileStreamSize(void *,unsigned __int64 *) */

long SfCdiGetFileStreamSize(void *param_1,__uint64 *param_2)

{
                    /* 0x846c0  304  ?SfCdiGetFileStreamSize@@YGJPAXPA_K@Z */
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (((param_1 != (void *)0xffffffff) && (param_1 != (void *)0x0)) && (*(int *)param_1 != -1)) {
    *(undefined4 *)param_2 = *(undefined4 *)((int)param_1 + 0x28);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_1 + 0x2c);
    return 0;
  }
  return -0x7ff8ffa9;
}


