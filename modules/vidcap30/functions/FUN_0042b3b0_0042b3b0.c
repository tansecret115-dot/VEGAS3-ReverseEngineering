/* Module: vidcap30.exe
   Function: FUN_0042b3b0
   Address: 0042b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b3b0(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 7) && (iVar1 = FUN_0042b380(param_1), iVar1 != 0)) &&
     ((param_1[0x52] & 0x100U) != 0)) {
    return 1;
  }
  return 0;
}


