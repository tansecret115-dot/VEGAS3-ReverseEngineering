/* Module: vegas30k.dll
   Function: SfOem_GetUrl
   Address: 01004460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetUrl(void *,unsigned int,char *,unsigned int,char *) */

long SfOem_GetUrl(void *param_1,uint param_2,char *param_3,uint param_4,char *param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  
                    /* 0x4460  466  ?SfOem_GetUrl@@YGJPAXIPADI1@Z */
  puVar2 = &DAT_80070057;
  if (((param_3 == (char *)0x0) || (param_4 == 0)) || (param_1 == (void *)0x0)) {
    return -0x7ff8ffa9;
  }
  if (param_2 == 0) {
    pcVar1 = "homeurl";
  }
  else {
    if (param_2 != 1) goto LAB_010044af;
    pcVar1 = "brandurl";
  }
  if ((pcVar1 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_010040c0(param_1,pcVar1,2,param_3,param_4,0), -1 < (int)puVar2)) {
    return (long)puVar2;
  }
LAB_010044af:
  if (param_5 == (char *)0x0) {
    _mbscpy((uchar *)param_3,"");
    return (long)puVar2;
  }
  lstrcpynA(param_3,param_5,param_4);
  param_3[param_4 - 1] = '\0';
  return (long)puVar2;
}


