/* Module: vidcap30.exe
   Function: FUN_0043fe60
   Address: 0043fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043fe60(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_3 != 0) {
    iVar1 = FUN_00426360(param_2);
    if (-1 < iVar1) {
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffb;
    }
  }
  return iVar1;
}


