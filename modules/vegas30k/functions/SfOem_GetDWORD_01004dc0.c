/* Module: vegas30k.dll
   Function: SfOem_GetDWORD
   Address: 01004dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetDWORD(void *,char *,unsigned long *,unsigned long) */

long SfOem_GetDWORD(void *param_1,char *param_2,ulong *param_3,ulong param_4)

{
  undefined1 *puVar1;
  
                    /* 0x4dc0  446  ?SfOem_GetDWORD@@YGJPAXPADPAKK@Z */
  if ((((param_3 == (ulong *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) ||
     (param_1 == (void *)0x0)) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar1 = (undefined1 *)FUN_010040c0(param_1,param_2,5,param_3,0,0);
    if ((int)puVar1 < 0) {
      *param_3 = param_4;
      return (long)puVar1;
    }
  }
  return (long)puVar1;
}


