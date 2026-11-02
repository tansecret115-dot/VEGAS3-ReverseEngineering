/* Module: vidcap30.exe
   Function: SfOem_GetExitPageHeight
   Address: 004bd190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPageHeight(void *,unsigned int *,unsigned int) */

long SfOem_GetExitPageHeight(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbd190  102  ?SfOem_GetExitPageHeight@@YGJPAXPAII@Z */
  lVar1 = FUN_004bc780(param_1,"exitpageheight",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


