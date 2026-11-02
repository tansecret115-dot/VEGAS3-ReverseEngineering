/* Module: erv33260.dll
   Function: FUN_670874a0
   Address: 670874a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_670874a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  iVar1 = param_4;
  do {
    do {
      *(undefined4 *)(param_2 + -4 + iVar2) = *(undefined4 *)(param_1 + -4 + iVar2);
      iVar2 = iVar2 + -4;
    } while (iVar2 != 0);
    param_1 = param_1 + param_3;
    param_2 = param_2 + 0x10;
    iVar1 = iVar1 + -1;
    iVar2 = param_4;
  } while (iVar1 != 0);
  return;
}


