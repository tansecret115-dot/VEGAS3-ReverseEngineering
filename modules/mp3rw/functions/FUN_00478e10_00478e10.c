/* Module: mp3rw.dll
   Function: FUN_00478e10
   Address: 00478e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478e10(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_00475b80((int)param_1,"Invalid sRGB rendering intent specified");
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_004788a0(param_1,(byte *)&DAT_004a6e6c,(byte *)&param_2,1);
  return;
}


