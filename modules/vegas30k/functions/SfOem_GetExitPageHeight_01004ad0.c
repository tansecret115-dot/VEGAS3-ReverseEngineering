/* Module: vegas30k.dll
   Function: SfOem_GetExitPageHeight
   Address: 01004ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPageHeight(void *,unsigned int *,unsigned int) */

long SfOem_GetExitPageHeight(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0x4ad0  450  ?SfOem_GetExitPageHeight@@YGJPAXPAII@Z */
  lVar1 = FUN_010040c0(param_1,"exitpageheight",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


