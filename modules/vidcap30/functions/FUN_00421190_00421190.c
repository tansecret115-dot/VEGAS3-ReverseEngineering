/* Module: vidcap30.exe
   Function: FUN_00421190
   Address: 00421190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00421190(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_10;
  int local_c;
  int local_8 [2];
  
  _SfGetFontSize_8(param_2,local_8);
  _SfGetTextExtent_16(param_2,param_1,0xffffffff,&local_10);
  return CONCAT44(local_c + param_4,local_10 + local_8[0] * param_3);
}


