/* Module: vegas30k.dll
   Function: SfOem_GetKeycode
   Address: 010043a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetKeycode(void *,unsigned int *,unsigned int,char const *) */

long SfOem_GetKeycode(void *param_1,uint *param_2,uint param_3,char *param_4)

{
  undefined1 *puVar1;
  
                    /* 0x43a0  457  ?SfOem_GetKeycode@@YGJPAXPAIIPBD@Z */
  if ((param_2 == (uint *)0x0) || (param_1 == (void *)0x0)) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar1 = (undefined1 *)FUN_010040c0(param_1,"keycode",3,param_2,0,param_4);
    if ((int)puVar1 < 0) {
      *param_2 = param_3;
      return (long)puVar1;
    }
  }
  return (long)puVar1;
}


