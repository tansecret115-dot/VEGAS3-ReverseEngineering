/* Module: vidcap30.exe
   Function: SfOem_GetExitPageTimer
   Address: 004bd1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPageTimer(void *,unsigned int *,unsigned int) */

long SfOem_GetExitPageTimer(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbd1c0  103  ?SfOem_GetExitPageTimer@@YGJPAXPAII@Z */
  lVar1 = FUN_004bc780(param_1,"exitpagetimer",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


