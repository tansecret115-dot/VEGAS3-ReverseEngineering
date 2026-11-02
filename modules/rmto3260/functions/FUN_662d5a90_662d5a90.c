/* Module: rmto3260.dll
   Function: FUN_662d5a90
   Address: 662d5a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d5a90(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = _stricmp(param_1,param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


