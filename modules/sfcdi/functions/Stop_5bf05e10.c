/* Module: sfcdi.dll
   Function: Stop
   Address: 5bf05e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CSfReadAudio::Stop(void) */

long CSfReadAudio::Stop(void)

{
  int *in_stack_00000004;
  
                    /* 0x5e10  138  ?Stop@CSfReadAudio@@QAGJXZ */
  if (*in_stack_00000004 != 0) {
    in_stack_00000004[0xd] = 1;
    SetEvent((HANDLE)in_stack_00000004[0xe]);
    WaitForSingleObject((HANDLE)*in_stack_00000004,0xffffffff);
    *in_stack_00000004 = 0;
    FUN_5bf18670((int *)in_stack_00000004[0xc]);
  }
  return 0;
}


