/* Module: vidcap30.exe
   Function: SfOem_GetUDATFile
   Address: 004bd250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfOem_GetUDATFile(void *,char *,unsigned int,char *) */

long SfOem_GetUDATFile(void *param_1,char *param_2,uint param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  CHAR local_104 [260];
  
                    /* 0xbd250  116  ?SfOem_GetUDATFile@@YGJPAXPADI1@Z */
  if (((param_2 != (char *)0x0) && (param_1 != (void *)0x0)) && (param_3 != 0)) {
    iVar1 = FUN_004bc780(param_1,"udatfile",2,local_104,0x104,0);
    if (iVar1 < 0) {
      if (param_4 != (char *)0x0) {
        lstrcpynA(param_2,param_4,param_3);
        param_2[param_3 - 1] = '\0';
        return iVar1;
      }
    }
    else {
      uVar2 = lstrlenA(local_104);
      if (uVar2 <= param_3) {
        lstrcpynA(param_2,local_104,param_3);
        param_2[param_3 - 1] = '\0';
        return iVar1;
      }
      iVar1 = -0x7ffb1fc4;
    }
    *param_2 = '\0';
    return iVar1;
  }
  return -0x7ff8ffa9;
}


