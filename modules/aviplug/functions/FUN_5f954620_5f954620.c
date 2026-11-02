/* Module: aviplug.dll
   Function: FUN_5f954620
   Address: 5f954620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f954620(int *param_1)

{
  (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0xd);
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    FUN_5f97a480((LPCVOID)param_1[5],0);
    param_1[5] = 0;
  }
  return 0;
}


