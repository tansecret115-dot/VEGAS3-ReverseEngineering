/* Module: vfplugs.dll
   Function: FUN_00401570
   Address: 00401570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401570(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x37];
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1[0x37] + 4);
    (**(code **)(*param_1 + 0x50))(param_1[0x37]);
    param_1[0x37] = iVar1;
  }
  if ((HANDLE)param_1[0x34] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x34]);
  }
  return;
}


