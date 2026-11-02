/* Module: vegas30k.dll
   Function: SfOem_GetBuild
   Address: 01004300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetBuild(void *,unsigned int *,unsigned int) */

long SfOem_GetBuild(void *param_1,uint *param_2,uint param_3)

{
  undefined1 *puVar1;
  
                    /* 0x4300  444  ?SfOem_GetBuild@@YGJPAXPAII@Z */
  if ((param_2 == (uint *)0x0) || (param_1 == (void *)0x0)) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar1 = (undefined1 *)FUN_010040c0(param_1,"build",3,param_2,0,0);
    if ((int)puVar1 < 0) {
      *param_2 = param_3;
      return (long)puVar1;
    }
  }
  return (long)puVar1;
}


