/* Module: vegas30k.dll
   Function: SfOem_GetUINT
   Address: 01004d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetUINT(void *,char *,unsigned int *,unsigned int) */

long SfOem_GetUINT(void *param_1,char *param_2,uint *param_3,uint param_4)

{
  undefined1 *puVar1;
  
                    /* 0x4d70  465  ?SfOem_GetUINT@@YGJPAXPADPAII@Z */
  if ((((param_3 == (uint *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) ||
     (param_1 == (void *)0x0)) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar1 = (undefined1 *)FUN_010040c0(param_1,param_2,3,param_3,0,0);
    if ((int)puVar1 < 0) {
      *param_3 = param_4;
      return (long)puVar1;
    }
  }
  return (long)puVar1;
}


