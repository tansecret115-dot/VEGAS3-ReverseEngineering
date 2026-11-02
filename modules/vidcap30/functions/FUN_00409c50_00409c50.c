/* Module: vidcap30.exe
   Function: FUN_00409c50
   Address: 00409c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409c50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00404b50(param_2);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x14) < 7)) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
  }
  return;
}


