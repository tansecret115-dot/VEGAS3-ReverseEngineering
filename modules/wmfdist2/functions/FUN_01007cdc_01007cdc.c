/* Module: wmfdist2.exe
   Function: FUN_01007cdc
   Address: 01007cdc
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01007cdc(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_01007977(param_1,3);
    ((byte *)(param_1 + 0xe34))[iVar2] = (byte)uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (*(int *)(param_1 + 0x2ebc) == 0) {
    iVar2 = FUN_01008af2(param_1,(byte *)(param_1 + 0xe34),(undefined4 *)(param_1 + 0xdb4));
    bVar3 = iVar2 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


