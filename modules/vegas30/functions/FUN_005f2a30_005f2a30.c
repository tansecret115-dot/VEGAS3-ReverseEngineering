/* Module: vegas30.exe
   Function: FUN_005f2a30
   Address: 005f2a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f2a30(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x160) == 0) &&
     (iVar1 = _SfList_CreateExZ_32((undefined4 *)(param_1 + 0x160),4,0x10,0x10,0x40000004,0,0,0),
     iVar1 < 0)) {
    return;
  }
  _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x160),0xffffffff,&stack0x00000004,1);
  return;
}


