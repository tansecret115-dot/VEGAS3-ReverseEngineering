/* Module: sfs4rw.dll
   Function: FUN_00478d90
   Address: 00478d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478d90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_00475b00((int)param_1,"Invalid sRGB rendering intent specified");
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_00478820(param_1,(byte *)&DAT_004a6e6c,(byte *)&param_2,1);
  return;
}


