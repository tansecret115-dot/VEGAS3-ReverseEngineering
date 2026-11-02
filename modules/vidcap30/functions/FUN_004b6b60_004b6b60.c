/* Module: vidcap30.exe
   Function: FUN_004b6b60
   Address: 004b6b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b6b60(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b6b10(param_1);
  if (*param_1 == 0xc) {
    return iVar1 * 3;
  }
  return iVar1 << 2;
}


