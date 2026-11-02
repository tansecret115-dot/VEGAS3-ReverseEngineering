/* Module: vidcap30.exe
   Function: FUN_004435b0
   Address: 004435b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004435b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00443780(param_1);
  FUN_0042f4b0(*(undefined4 *)(param_1 + 4),1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_004437e0(param_1,iVar3);
      if (iVar2 != 0) {
        FUN_00444320(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_0042f5d0(*(undefined4 *)(param_1 + 4),1);
  return;
}


