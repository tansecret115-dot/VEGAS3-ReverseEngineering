/* Module: vegas30.exe
   Function: FUN_005cba40
   Address: 005cba40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cba40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _SfList_CreateExZ_32((undefined4 *)(param_1 + 0x5d0),4,0xffffffff,0xffffffff,0,0,0,0);
  if (-1 < iVar1) {
    uVar2 = FUN_00589da0();
    _SfList_SetThreadOwner_8(*(undefined4 *)(param_1 + 0x5d0),uVar2);
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e4));
  }
  return iVar1;
}


