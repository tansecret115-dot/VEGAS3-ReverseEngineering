/* Module: vidcap30.exe
   Function: FUN_0045b130
   Address: 0045b130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b130(undefined4 param_1,LPSTR param_2,int param_3)

{
  longlong lVar1;
  CHAR local_14 [20];
  
  lVar1 = FUN_0045b190(param_1);
  local_14[0] = '\0';
  if (lVar1 != 0) {
    _SfGetByteSizeText2_12(lVar1,local_14);
  }
  lstrcpynA(param_2,local_14,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


