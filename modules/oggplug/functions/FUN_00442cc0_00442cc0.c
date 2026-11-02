/* Module: oggplug.dll
   Function: FUN_00442cc0
   Address: 00442cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00442cc0(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xb1])(*param_1,param_2,param_2 >> 0x1f,0);
    param_1[2] = param_2;
    param_1[3] = param_2 >> 0x1f;
    FUN_00441b50((int)(param_1 + 6));
  }
  return;
}


