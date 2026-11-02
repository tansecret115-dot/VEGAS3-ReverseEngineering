/* Module: pncrt.dll
   Function: FUN_78023f30
   Address: 78023f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78023f30(uint param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_7801f090(param_1);
  if (uVar1 == 0xffffffff) {
    *param_2 = -1;
    return;
  }
  *param_2 = *param_2 + 1;
  return;
}


