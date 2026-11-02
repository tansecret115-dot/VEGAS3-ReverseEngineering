/* Module: vidcap30.exe
   Function: SfOem_GetASPRegistration
   Address: 004bcbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetASPRegistration(void *,char *,unsigned int,char *) */

long SfOem_GetASPRegistration(void *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  
                    /* 0xbcbb0  94  ?SfOem_GetASPRegistration@@YGJPAXPADI1@Z */
  if (((param_2 != (char *)0x0) && (param_3 != 0)) && (param_1 != (void *)0x0)) {
    iVar1 = FUN_004bc780(param_1,"asptag",2,param_2,param_3,0);
    if (iVar1 < 0) {
      if (param_4 != (char *)0x0) {
        lstrcpynA(param_2,param_4,param_3);
        param_2[param_3 - 1] = '\0';
        return iVar1;
      }
      _mbscpy((uchar *)param_2,"");
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


