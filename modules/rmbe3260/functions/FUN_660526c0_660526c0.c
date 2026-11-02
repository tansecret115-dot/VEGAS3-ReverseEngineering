/* Module: rmbe3260.dll
   Function: FUN_660526c0
   Address: 660526c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_660526c0(int param_1)

{
  int iVar1;
  
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  iVar1 = _rmdir(*(char **)(param_1 + 4));
  return (bool)('\x01' - (iVar1 != 0));
}


