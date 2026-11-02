/* Module: aviplug.dll
   Function: FUN_5f94bb90
   Address: 5f94bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94bb90(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 & 0x700ef00) == 0) && ((param_2 & 0x700ef00) == 0x100)) {
    return 1;
  }
  iVar1 = FUN_5f94bb20(param_1);
  iVar2 = FUN_5f94bb20(param_2);
  return iVar1 + iVar2;
}


