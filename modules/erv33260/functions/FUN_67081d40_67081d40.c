/* Module: erv33260.dll
   Function: FUN_67081d40
   Address: 67081d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67081d40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = param_1 + 1; iVar1 != 0; iVar1 = iVar1 / 2) {
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2 + iVar2 + -1;
  *param_3 = (param_1 - (1 << ((byte)(iVar2 + -1) & 0x1f))) + 1;
  return;
}


