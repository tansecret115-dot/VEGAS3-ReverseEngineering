/* Module: vidcap30.exe
   Function: SfOem_GetUrl
   Address: 004bcb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetUrl(void *,unsigned int,char *,unsigned int,char *) */

long SfOem_GetUrl(void *param_1,uint param_2,char *param_3,uint param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  
                    /* 0xbcb20  118  ?SfOem_GetUrl@@YGJPAXIPADI1@Z */
  iVar2 = -0x7ff8ffa9;
  if (((param_3 == (char *)0x0) || (param_4 == 0)) || (param_1 == (void *)0x0)) {
    return -0x7ff8ffa9;
  }
  if (param_2 == 0) {
    pcVar1 = "homeurl";
  }
  else {
    if (param_2 != 1) goto LAB_004bcb6f;
    pcVar1 = "brandurl";
  }
  if ((pcVar1 != (char *)0x0) &&
     (iVar2 = FUN_004bc780(param_1,pcVar1,2,param_3,param_4,0), -1 < iVar2)) {
    return iVar2;
  }
LAB_004bcb6f:
  if (param_5 == (char *)0x0) {
    _mbscpy((uchar *)param_3,"");
    return iVar2;
  }
  lstrcpynA(param_3,param_5,param_4);
  param_3[param_4 - 1] = '\0';
  return iVar2;
}


