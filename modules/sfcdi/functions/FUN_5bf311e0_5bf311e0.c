/* Module: sfcdi.dll
   Function: FUN_5bf311e0
   Address: 5bf311e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf311e0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = HttpOpenRequestA(param_1,param_4,param_3,0,0,0,0x80000000,0);
  *param_3 = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f13) + 0x8004e0ed;
}


