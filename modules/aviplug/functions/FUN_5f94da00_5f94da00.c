/* Module: aviplug.dll
   Function: FUN_5f94da00
   Address: 5f94da00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94da00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (0 < iVar2) {
    iVar1 = param_2 + *(int *)(param_1 + 0xc);
    iVar2 = iVar1 / *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = iVar1 % *(int *)(param_1 + 8);
  }
  return iVar2;
}


