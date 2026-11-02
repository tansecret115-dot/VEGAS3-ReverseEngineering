/* Module: vidcap30.exe
   Function: FUN_00441a20
   Address: 00441a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441a20(void)

{
  if (DAT_005bba94 == 0) {
    _SfList_DeleteList_16(*(undefined4 *)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1c68),0,0xffffffff,0);
    DAT_005ba50c = DAT_005ba50c | 0x200;
  }
  return;
}


