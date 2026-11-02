/* Module: sfcdi.dll
   Function: SfSetMRUNum
   Address: 5bf1e320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfSetMRUNum(char const *,int) */

void SfSetMRUNum(char *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1e320  129  ?SfSetMRUNum@@YGXPBDH@Z */
  iVar1 = FUN_5bf22040(&param_1,"CD Interface",0x2000001,(int)param_1);
  if (-1 < iVar1) {
    FUN_5bf219a0((int)param_1,100);
    FUN_5bf22510(param_1);
  }
  return;
}


