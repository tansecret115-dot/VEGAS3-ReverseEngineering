/* Module: vegas30.exe
   Function: FUN_0059ea60
   Address: 0059ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0059ea60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      FUN_005a8810(param_1[1] * iVar2 + param_1[2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


