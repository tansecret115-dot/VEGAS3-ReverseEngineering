/* Module: vidcap30.exe
   Function: FUN_004bcde0
   Address: 004bcde0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bcde0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = _SfZip_Open_12(param_1,2,&local_4);
  if ((-1 < iVar1) && (local_4 != 0)) {
    iVar1 = _SfZip_ExtractAll_8(local_4,param_3);
    _SfZip_Close_4(local_4);
  }
  return iVar1;
}


