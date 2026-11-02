/* Module: vidcap30.exe
   Function: SfOem_GetString
   Address: 004bd4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetString(void *,char *,char *,unsigned int,char *) */

long SfOem_GetString(void *param_1,char *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  
                    /* 0xbd4d0  115  ?SfOem_GetString@@YGJPAXPAD1I1@Z */
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (char *)0x0)) &&
     ((param_4 != 0 && (param_1 != (void *)0x0)))) {
    iVar1 = FUN_004bc780(param_1,param_2,2,param_3,param_4,0);
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


