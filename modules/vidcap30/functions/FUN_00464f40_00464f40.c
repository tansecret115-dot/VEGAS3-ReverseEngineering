/* Module: vidcap30.exe
   Function: FUN_00464f40
   Address: 00464f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00464f40(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if (0 < DAT_005b6568) {
    puVar2 = &DAT_005b649c;
    iVar3 = DAT_005b6568;
    do {
      if (puVar2[-0xb] == param_1) {
        uVar1 = *puVar2;
      }
      puVar2 = puVar2 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


