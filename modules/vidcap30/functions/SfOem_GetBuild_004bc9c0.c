/* Module: vidcap30.exe
   Function: SfOem_GetBuild
   Address: 004bc9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetBuild(void *,unsigned int *,unsigned int) */

long SfOem_GetBuild(void *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  
                    /* 0xbc9c0  96  ?SfOem_GetBuild@@YGJPAXPAII@Z */
  if ((param_2 == (uint *)0x0) || (param_1 == (void *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = FUN_004bc780(param_1,"build",3,param_2,0,0);
    if (lVar1 < 0) {
      *param_2 = param_3;
      return lVar1;
    }
  }
  return lVar1;
}


