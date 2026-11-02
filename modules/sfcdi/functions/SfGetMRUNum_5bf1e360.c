/* Module: sfcdi.dll
   Function: SfGetMRUNum
   Address: 5bf1e360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfGetMRUNum(char const *) */

int SfGetMRUNum(char *param_1)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1e360  89  ?SfGetMRUNum@@YGHPBD@Z */
  iVar1 = FUN_5bf22040(&param_1,"CD Interface",0x2000001,(int)param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_5bf21860((DWORD)param_1,100,0,300,0xf);
    FUN_5bf22510(param_1);
    return uVar2;
  }
  return (int)param_1;
}


