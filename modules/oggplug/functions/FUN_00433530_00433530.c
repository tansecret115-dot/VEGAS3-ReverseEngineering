/* Module: oggplug.dll
   Function: FUN_00433530
   Address: 00433530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00433530(float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - (int)param_1;
  iVar2 = 0x38;
  do {
    if (*(float *)(iVar1 + (int)param_1) < *param_1) {
      *param_1 = *(float *)(iVar1 + (int)param_1);
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


