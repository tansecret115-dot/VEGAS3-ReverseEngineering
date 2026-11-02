/* Module: vidcap30.exe
   Function: FUN_0054c950
   Address: 0054c950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c950(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_00549570(param_1,"Invalid sRGB rendering intent specified");
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_0054c3e0(param_1,&DAT_005b8a0c,&param_2,1);
  return;
}


