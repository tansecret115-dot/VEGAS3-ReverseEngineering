/* Module: vidcap30.exe
   Function: SfOem_GetGlobalPageWidth
   Address: 004bd1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetGlobalPageWidth(void *,unsigned int *,unsigned int) */

long SfOem_GetGlobalPageWidth(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbd1f0  106  ?SfOem_GetGlobalPageWidth@@YGJPAXPAII@Z */
  lVar1 = FUN_004bc780(param_1,"globalpagewidth",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


