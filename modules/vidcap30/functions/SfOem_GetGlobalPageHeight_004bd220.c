/* Module: vidcap30.exe
   Function: SfOem_GetGlobalPageHeight
   Address: 004bd220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetGlobalPageHeight(void *,unsigned int *,unsigned int) */

long SfOem_GetGlobalPageHeight(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbd220  105  ?SfOem_GetGlobalPageHeight@@YGJPAXPAII@Z */
  lVar1 = FUN_004bc780(param_1,"globalpageheight",3,param_2,0,0);
  if (lVar1 < 0) {
    *param_2 = param_3;
  }
  return lVar1;
}


