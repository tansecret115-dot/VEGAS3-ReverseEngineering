/* Module: vegas30.exe
   Function: FUN_004f0850
   Address: 004f0850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f0850(LPSTR param_1,DWORD param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f07a0(param_1);
  if (iVar1 == 0) {
    _SfGetModulePath_12(DAT_006471fc,param_1,param_2);
    _SfAddSlashToPathName_8(param_1,param_2);
    iVar1 = FUN_004f07a0(param_1);
    if (iVar1 == 0) {
      GetTempPathA(param_2,param_1);
    }
  }
  return;
}


