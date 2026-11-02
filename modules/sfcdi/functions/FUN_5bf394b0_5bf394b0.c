/* Module: sfcdi.dll
   Function: FUN_5bf394b0
   Address: 5bf394b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf394b0(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = isalnum((uint)*param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    iVar1 = isdigit((uint)*param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return 1;
}


