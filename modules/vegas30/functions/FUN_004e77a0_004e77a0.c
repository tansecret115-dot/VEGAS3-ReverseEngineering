/* Module: vegas30.exe
   Function: FUN_004e77a0
   Address: 004e77a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e77a0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_004e7740();
  if (iVar2 != 0) {
    FUN_00401f40();
    uVar3 = _SfGetString_8(DAT_00647204,0x50b9);
    iVar4 = SfMsgBox(DAT_00647624,0x124,uVar3);
    iVar2 = DAT_0064b108;
    if (iVar4 != 6) {
      return 0;
    }
    *(undefined4 *)(DAT_0064b108 + 0x5c) = 1;
    if (*(int *)(iVar2 + 0x74) != 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 0x74) + 0x1c);
      *puVar1 = *puVar1 | 1;
    }
    FUN_004e7610();
  }
  return 1;
}


