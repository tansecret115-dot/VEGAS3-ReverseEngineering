/* Module: wavplug.dll
   Function: FUN_5f393e40
   Address: 5f393e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f393e40(HKEY param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 1;
  iVar1 = FUN_5f393df0((LPCSTR)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_5f393d00(param_1);
    *param_2 = uVar2;
  }
  return 0;
}


