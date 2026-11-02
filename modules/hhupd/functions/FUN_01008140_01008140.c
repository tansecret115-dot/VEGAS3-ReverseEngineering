/* Module: hhupd.exe
   Function: FUN_01008140
   Address: 01008140
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01008140(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    uVar1 = FUN_01007cb0(param_1,3);
    *(char *)(param_1 + 0xe33 + iVar2) = (char)uVar1;
  } while (iVar2 < 8);
  if (*(int *)(param_1 + 0x2ebc) != 0) {
    return false;
  }
  iVar2 = FUN_01008f30(param_1,param_1 + 0xe34,(undefined4 *)(param_1 + 0xdb4));
  return (bool)('\x01' - (iVar2 == 0));
}


