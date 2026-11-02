/* Module: vegas30k.dll
   Function: SfOem_GetExitPage
   Address: 010049d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetExitPage(void *,char *,unsigned int,char *) */

long SfOem_GetExitPage(void *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  uchar local_104 [260];
  
                    /* 0x49d0  449  ?SfOem_GetExitPage@@YGJPAXPADI1@Z */
  if (((param_2 == (char *)0x0) || (param_1 == (void *)0x0)) || (param_3 == 0)) {
    return -0x7ff8ffa9;
  }
  iVar1 = FUN_010040c0(param_1,"exitpage",2,local_104,0x104,0);
  if (-1 < iVar1) {
    _mbscpy((uchar *)param_2,local_104);
    return iVar1;
  }
  if (param_4 != (char *)0x0) {
    lstrcpynA(param_2,param_4,param_3);
    param_2[param_3 - 1] = '\0';
    return iVar1;
  }
  _mbscpy((uchar *)param_2,"");
  return iVar1;
}


