/* Module: vidcap30.exe
   Function: SfOem_GetUINT
   Address: 004bd430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetUINT(void *,char *,unsigned int *,unsigned int) */

long SfOem_GetUINT(void *param_1,char *param_2,uint *param_3,uint param_4)

{
  long lVar1;
  
                    /* 0xbd430  117  ?SfOem_GetUINT@@YGJPAXPADPAII@Z */
  if ((((param_3 == (uint *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) ||
     (param_1 == (void *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = FUN_004bc780(param_1,param_2,3,param_3,0,0);
    if (lVar1 < 0) {
      *param_3 = param_4;
      return lVar1;
    }
  }
  return lVar1;
}


