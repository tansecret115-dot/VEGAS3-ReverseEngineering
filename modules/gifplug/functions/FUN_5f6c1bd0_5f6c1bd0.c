/* Module: gifplug.dll
   Function: FUN_5f6c1bd0
   Address: 5f6c1bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c1bd0(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0x28))(param_1);
  if (iVar1 == 1) {
    wcsncpy(param_1 + 4,param_1,0x104);
    return 0;
  }
  return 0x80004005;
}


