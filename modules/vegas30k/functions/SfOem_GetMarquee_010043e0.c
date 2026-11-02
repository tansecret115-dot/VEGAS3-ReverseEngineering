/* Module: vegas30k.dll
   Function: SfOem_GetMarquee
   Address: 010043e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetMarquee(void *,char *,unsigned int,char *) */

long SfOem_GetMarquee(void *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  
                    /* 0x43e0  459  ?SfOem_GetMarquee@@YGJPAXPADI1@Z */
  if (((param_2 != (char *)0x0) && (param_3 != 0)) && (param_1 != (void *)0x0)) {
    iVar1 = FUN_010040c0(param_1,"marquee",2,param_2,param_3,0);
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


