/* Module: vidcap30.exe
   Function: SfOem_GetDWORD
   Address: 004bd480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetDWORD(void *,char *,unsigned long *,unsigned long) */

long SfOem_GetDWORD(void *param_1,char *param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  
                    /* 0xbd480  98  ?SfOem_GetDWORD@@YGJPAXPADPAKK@Z */
  if ((((param_3 == (ulong *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) ||
     (param_1 == (void *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = FUN_004bc780(param_1,param_2,5,param_3,0,0);
    if (lVar1 < 0) {
      *param_3 = param_4;
      return lVar1;
    }
  }
  return lVar1;
}


