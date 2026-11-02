/* Module: vidcap30.exe
   Function: FUN_0057b750
   Address: 0057b750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057b750(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 4);
  return *(undefined4 *)(iVar1 + 8);
}


