/* Module: vegas30k.dll
   Function: SfDvdiGetVmgInfo
   Address: 01088c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiGetVmgInfo(void *,struct tagSFVMG_INFO * *) */

long SfDvdiGetVmgInfo(void *param_1,tagSFVMG_INFO **param_2)

{
                    /* 0x88c60  370  ?SfDvdiGetVmgInfo@@YGJPAXPAPAUtagSFVMG_INFO@@@Z */
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = param_1;
  return 0;
}


