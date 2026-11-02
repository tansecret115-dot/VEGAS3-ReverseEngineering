/* Module: pncrt.dll
   Function: FUN_7800e970
   Address: 7800e970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800e970(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_7800e5c0(param_2);
    param_2[6] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}


