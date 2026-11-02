/* Module: sfpaplug.dll
   Function: FUN_00424e60
   Address: 00424e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00424e60(HANDLE param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  SetFilePointer(param_1,param_2,(PLONG)0x0,1);
  return param_2;
}


