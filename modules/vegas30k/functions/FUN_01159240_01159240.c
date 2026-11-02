/* Module: vegas30k.dll
   Function: FUN_01159240
   Address: 01159240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159240(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_01155fb0(param_1,"Invalid sRGB rendering intent specified");
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_01158cd0(param_1,&DAT_0120701c,&param_2,1);
  return;
}


