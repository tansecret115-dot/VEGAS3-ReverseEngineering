/* Module: vegas30.exe
   Function: FUN_004dcfd0
   Address: 004dcfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dcfd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 auStack_8 [8];
  
  iVar1 = *(int *)(param_1 + 0xd50);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x134) & 0x20) != 0) {
      uVar2 = _SfGetString_8(DAT_00647204,0x6d72);
      SfMsgBox(DAT_00647624,0x30,uVar2);
      return;
    }
    if ((*(byte *)(param_1 + 0xd9c) & 1) == 0) {
      uVar2 = _SfGetString_8(DAT_00647204,0x6d71);
      SfMsgBox(DAT_00647624,0x30,uVar2);
      return;
    }
    uVar3 = 0;
    uVar4 = 0xffffffffffffffff;
    FUN_004582a0(param_1,auStack_8,&iStack_18);
    if (iStack_18 != 0 || iStack_14 != 0) {
      uStack_c = 0;
      uStack_10 = *(undefined4 *)(param_1 + 0xdac);
      uVar3 = ftol();
      uVar4 = ftol();
    }
    FUN_00405170(iVar1 + 0x170,uVar3,uVar4,0);
  }
  return;
}


