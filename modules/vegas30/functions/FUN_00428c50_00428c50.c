/* Module: vegas30.exe
   Function: FUN_00428c50
   Address: 00428c50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00428c50(int param_1)

{
  int iVar1;
  
  if (((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) &&
     (-1 < *(int *)(iVar1 + 0x90))) {
    return param_1 == *(int *)(iVar1 + 0x94 + *(int *)(iVar1 + 0x90) * 8);
  }
  return false;
}


