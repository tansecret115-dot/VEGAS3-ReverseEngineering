/* Module: vegas30k.dll
   Function: SfOem_GetString
   Address: 01004e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetString(void *,char *,char *,unsigned int,char *) */

long SfOem_GetString(void *param_1,char *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  
                    /* 0x4e10  463  ?SfOem_GetString@@YGJPAXPAD1I1@Z */
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (char *)0x0)) &&
     ((param_4 != 0 && (param_1 != (void *)0x0)))) {
    iVar1 = FUN_010040c0(param_1,param_2,2,param_3,param_4,0);
    if (iVar1 < 0) {
      if (param_5 != (char *)0x0) {
        lstrcpynA(param_3,param_5,param_4);
        param_3[param_4 - 1] = '\0';
        return iVar1;
      }
      _mbscpy((uchar *)param_3,"");
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


