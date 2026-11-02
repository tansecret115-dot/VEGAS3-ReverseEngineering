/* Module: vidcap30.exe
   Function: SfOem_GetKeycode
   Address: 004bca60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetKeycode(void *,unsigned int *,unsigned int,char const *) */

long SfOem_GetKeycode(void *param_1,uint *param_2,uint param_3,char *param_4)

{
  long lVar1;
  
                    /* 0xbca60  109  ?SfOem_GetKeycode@@YGJPAXPAIIPBD@Z */
  if ((param_2 == (uint *)0x0) || (param_1 == (void *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = FUN_004bc780(param_1,"keycode",3,param_2,0,param_4);
    if (lVar1 < 0) {
      *param_2 = param_3;
      return lVar1;
    }
  }
  return lVar1;
}


