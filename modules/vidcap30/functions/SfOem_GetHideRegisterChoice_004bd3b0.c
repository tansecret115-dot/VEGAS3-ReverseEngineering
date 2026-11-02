/* Module: vidcap30.exe
   Function: SfOem_GetHideRegisterChoice
   Address: 004bd3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetHideRegisterChoice(void *,unsigned long *,unsigned long) */

long SfOem_GetHideRegisterChoice(void *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0xbd3b0  107  ?SfOem_GetHideRegisterChoice@@YGJPAXPAKK@Z */
  if ((param_2 == (ulong *)0x0) || (param_1 == (void *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = FUN_004bc780(param_1,"hideregisterchoice",5,param_2,0,0);
    if (lVar1 < 0) {
      *param_2 = param_3;
      return lVar1;
    }
  }
  return lVar1;
}


