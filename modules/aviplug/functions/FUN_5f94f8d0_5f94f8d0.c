/* Module: aviplug.dll
   Function: FUN_5f94f8d0
   Address: 5f94f8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f94f8d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0x73646976) || (iVar2 == 0x73647561)) {
    iVar1 = 1;
  }
  else if ((iVar2 == 0x73766169) && (*(int *)(param_1 + 0xc) == 0x64737664)) {
    iVar2 = FUN_5f94bb90(**(uint **)(param_1 + 0x60),(*(uint **)(param_1 + 0x60))[2]);
    return iVar2 + 1;
  }
  return iVar1;
}


