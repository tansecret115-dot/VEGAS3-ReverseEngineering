/* Module: vidcap30.exe
   Function: SfOem_GetAppIconFilename
   Address: 004bcea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetAppIconFilename(void *,char *,unsigned int,char *) */

long SfOem_GetAppIconFilename(void *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  char local_104 [260];
  
                    /* 0xbcea0  95  ?SfOem_GetAppIconFilename@@YGJPAXPADI1@Z */
  if (((param_2 != (char *)0x0) && (param_1 != (void *)0x0)) && (param_3 != 0)) {
    iVar1 = FUN_004bc780(param_1,"appicon",2,local_104,param_3,0);
    if ((iVar1 < 0) || (local_104[0] == '\0')) {
      if (param_4 != (char *)0x0) {
        lstrcpynA(param_2,param_4,param_3);
        param_2[param_3 - 1] = '\0';
        return iVar1;
      }
      _mbscpy((uchar *)param_2,"");
    }
    else {
      iVar1 = FUN_004bcdb0(param_1,local_104,(int)param_1 + 0x30c);
      if (-1 < iVar1) {
        SfPrintF(param_2,&DAT_00586f0c,(int)param_1 + 0x30c,local_104);
        return iVar1;
      }
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


