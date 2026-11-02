/* Module: vidcap30.exe
   Function: FUN_0045c200
   Address: 0045c200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045c200(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar1 = _SfList_CreateExZ_32(param_1 + 0x1c,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return uVar1;
}


