/* Module: vidpcore.dll
   Function: SfSetMemoryDWords
   Address: 5de81990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfSetMemoryDWords(void *,unsigned long,unsigned long) */

void SfSetMemoryDWords(void *param_1,ulong param_2,ulong param_3)

{
                    /* 0x81990  24  ?SfSetMemoryDWords@@YGXPAXKK@Z */
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(ulong *)param_1 = param_2;
      param_1 = (ulong *)((int)param_1 + 4);
    }
  }
  return;
}


