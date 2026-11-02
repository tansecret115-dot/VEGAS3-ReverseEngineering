/* Module: sfcdi.dll
   Function: ldr_LoadErrorString
   Address: 5bf0a880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_LoadErrorString(int,char *,unsigned int) */

int ldr_LoadErrorString(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* 0xa880  244  ?ldr_LoadErrorString@@YGHHPADI@Z */
  iVar1 = FUN_5bf27f10(DAT_5bf65fc4,param_1 + 0x1194,param_2,param_3);
  return iVar1;
}


