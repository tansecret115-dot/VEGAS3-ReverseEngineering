/* Module: sfppack2.dll
   Function: FUN_5cd3f6b9
   Address: 5cd3f6b9
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd3f6b9(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  CoInitialize((LPVOID)0x0);
  (**(code **)(*param_1 + 4))();
  do {
    (**(code **)*param_1)(&local_14);
    iVar1 = (**(code **)(*param_1 + 8))(local_14,local_10,local_c,local_8);
  } while (iVar1 == 0);
  CoUninitialize();
  return iVar1;
}


