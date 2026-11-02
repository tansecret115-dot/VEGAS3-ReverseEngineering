/* Module: wavplug.dll
   Function: FUN_5f393e70
   Address: 5f393e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f393e70(HKEY param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    *param_2 = 1;
    return 0;
  }
  iVar1 = FUN_5f393df0((LPCSTR)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_5f393d00(param_1);
    *param_2 = uVar2;
    return 0;
  }
  *param_2 = 0;
  return 0;
}


