/* Module: vegas30k.dll
   Function: SfOem_GetExitPageWidth
   Address: 01004aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPageWidth(void *,unsigned int *,unsigned int) */

long SfOem_GetExitPageWidth(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0x4aa0  452  ?SfOem_GetExitPageWidth@@YGJPAXPAII@Z */
  lVar1 = FUN_010040c0(param_1,"exitpagewidth",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


