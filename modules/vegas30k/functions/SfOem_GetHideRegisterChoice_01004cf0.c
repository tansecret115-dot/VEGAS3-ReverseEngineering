/* Module: vegas30k.dll
   Function: SfOem_GetHideRegisterChoice
   Address: 01004cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetHideRegisterChoice(void *,unsigned long *,unsigned long) */

long SfOem_GetHideRegisterChoice(void *param_1,ulong *param_2,ulong param_3)

{
  undefined1 *puVar1;
  
                    /* 0x4cf0  455  ?SfOem_GetHideRegisterChoice@@YGJPAXPAKK@Z */
  if ((param_2 == (ulong *)0x0) || (param_1 == (void *)0x0)) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar1 = (undefined1 *)FUN_010040c0(param_1,"hideregisterchoice",5,param_2,0,0);
    if ((int)puVar1 < 0) {
      *param_2 = param_3;
      return (long)puVar1;
    }
  }
  return (long)puVar1;
}


