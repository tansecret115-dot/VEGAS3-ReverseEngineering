/* Module: sfcdi.dll
   Function: cdr_LoadSenseString
   Address: 5bf03d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_LoadSenseString(int,char *,unsigned int) */

int cdr_LoadSenseString(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* 0x3d70  191  ?cdr_LoadSenseString@@YGHHPADI@Z */
  iVar1 = SfScsi_IsAdditionalSenseCode(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_5bf27f10(DAT_5bf65fc4,param_1 + 0x1fa4,param_2,param_3);
    return iVar1;
  }
  iVar1 = FUN_5bf27f10(DAT_5bf65fc4,param_1 + 8000,param_2,param_3);
  return iVar1;
}


