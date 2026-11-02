/* Module: rmto3260.dll
   Function: FUN_662f34b0
   Address: 662f34b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_662f34b0(int param_1)

{
  int iVar1;
  
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  iVar1 = _rmdir(*(char **)(param_1 + 4));
  return (bool)('\x01' - (iVar1 != 0));
}


