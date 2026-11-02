/* Module: sfcdi.dll
   Function: prn_LoadErrorString
   Address: 5bf0a9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall prn_LoadErrorString(int,char *,unsigned int) */

int prn_LoadErrorString(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* 0xa9f0  256  ?prn_LoadErrorString@@YGHHPADI@Z */
  iVar1 = FUN_5bf27f10(DAT_5bf65fc4,param_1 + 5000,param_2,param_3);
  return iVar1;
}


