/* Module: vidcap30.exe
   Function: FUN_00418330
   Address: 00418330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418330(LPSTR param_1,DWORD param_2)

{
  int iVar1;
  
  iVar1 = FUN_0045b740(param_1);
  if (iVar1 == 0) {
    _SfGetModulePath_12(DAT_005ba298,param_1,param_2);
    _SfAddSlashToPathName_8(param_1,param_2);
    iVar1 = FUN_0045b740(param_1);
    if (iVar1 == 0) {
      GetTempPathA(param_2,param_1);
    }
  }
  return;
}


