/* Module: pncrt.dll
   Function: FUN_78028f00
   Address: 78028f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78028f00(uint param_1,FILE *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_78026d40(param_1,param_2);
  if ((short)uVar1 == -1) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


