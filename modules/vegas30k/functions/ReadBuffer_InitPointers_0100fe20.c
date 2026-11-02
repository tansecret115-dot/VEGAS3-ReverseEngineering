/* Module: vegas30k.dll
   Function: ReadBuffer_InitPointers
   Address: 0100fe20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall ReadBuffer_InitPointers(void *,struct tREAD_BUFFER *) */

void ReadBuffer_InitPointers(void *param_1,tREAD_BUFFER *param_2)

{
  int iVar1;
  
                    /* 0xfe20  261  ?ReadBuffer_InitPointers@@YGXPAXPAUtREAD_BUFFER@@@Z */
  *(int *)(param_2 + 8) = *(int *)param_2 + (int)param_1;
  iVar1 = *(int *)param_2 + (int)param_1 + *(int *)(param_2 + 4);
  *(int *)(param_2 + 0x1c) = iVar1;
  *(int *)(param_2 + 0x2c) = iVar1 - *(int *)(param_2 + 0xc);
  return;
}


