/* Module: vegas30k.dll
   Function: FUN_011b7720
   Address: 011b7720
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_011b7720(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((param_2 & 1) != 0) {
    iVar1 = FUN_011c2500(&DAT_011d9b30,param_1 + 8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  if ((param_2 & 2) != 0) {
    iVar1 = FUN_011c2580(&DAT_011d9b30,param_1 + 8 + *(int *)(param_1 + 0x48) * 4);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return *(int *)(param_1 + 0x48) == 0;
}


