/* Module: sfcdi.dll
   Function: FUN_5bf312b0
   Address: 5bf312b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf312b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = InternetReadFile(param_1,param_2,param_3,param_4);
  return (-(uint)(iVar1 != 0) & 0x7ffb1f11) + 0x8004e0ef;
}


