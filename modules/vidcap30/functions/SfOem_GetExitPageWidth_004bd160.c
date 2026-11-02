/* Module: vidcap30.exe
   Function: SfOem_GetExitPageWidth
   Address: 004bd160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPageWidth(void *,unsigned int *,unsigned int) */

long SfOem_GetExitPageWidth(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbd160  104  ?SfOem_GetExitPageWidth@@YGJPAXPAII@Z */
  lVar1 = FUN_004bc780(param_1,"exitpagewidth",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


