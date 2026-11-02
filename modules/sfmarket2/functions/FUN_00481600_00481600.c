/* Module: sfmarket2.dll
   Function: FUN_00481600
   Address: 00481600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481600(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_0047e370((int)param_1,"Invalid sRGB rendering intent specified");
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_00481090(param_1,(byte *)&DAT_004a86e8,(byte *)&param_2,1);
  return;
}


