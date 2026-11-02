/* Module: vidcap30.exe
   Function: FUN_00416e20
   Address: 00416e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416e20(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00416dc0();
  if (iVar2 != 0) {
    FUN_00401ad0();
    uVar3 = _SfGetString_8(DAT_005ba2a0,0x59);
    iVar4 = SfMsgBox(DAT_005ba4bc,0x124,uVar3);
    iVar2 = DAT_005bb808;
    if (iVar4 != 6) {
      return 0;
    }
    *(undefined4 *)(DAT_005bb808 + 0x5c) = 1;
    if (*(int *)(iVar2 + 0x6c) != 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 0x6c) + 0x18);
      *puVar1 = *puVar1 | 1;
    }
    FUN_00416c90();
  }
  return 1;
}


