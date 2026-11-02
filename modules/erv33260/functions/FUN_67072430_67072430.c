/* Module: erv33260.dll
   Function: FUN_67072430
   Address: 67072430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67072430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar2 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 0;
  local_8 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + -0xcc4a80;
    iVar3 = iVar3 + 0x19895;
    *(int *)((int)&DAT_6709b4d8 + iVar2) = iVar1;
    *(int *)((int)&DAT_6709bcd8 + iVar2) = iVar4 + -0x1023480;
    *(int *)((int)&DAT_6709acd8 + iVar2) = iVar5 + -0x322580;
    *(int *)((int)&DAT_6709b0d8 + iVar2) = iVar6 + -0x680f80;
    iVar4 = iVar4 + 0x20469;
    *(int *)((int)&DAT_6709a8d0 + iVar2) = local_8 + -0x12a150;
    iVar2 = iVar2 + 4;
    iVar5 = iVar5 + 0x644b;
    iVar6 = iVar6 + 0xd01f;
    local_8 = local_8 + 0x12a15;
  } while (iVar2 < 0x400);
  DAT_6709acd0 = &DAT_6709ba58;
  iVar2 = -0x180;
  do {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0xff;
      if (iVar2 < 0x100) {
        iVar3 = iVar2;
      }
    }
    iVar4 = iVar2 + 1;
    DAT_6709acd0[iVar2] = (char)iVar3;
    iVar2 = iVar4;
  } while (iVar4 < 0x280);
  return;
}


