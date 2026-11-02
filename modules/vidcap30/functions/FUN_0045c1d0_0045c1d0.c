/* Module: vidcap30.exe
   Function: FUN_0045c1d0
   Address: 0045c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045c1d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0058c2c8;
  FUN_0045bcb0(param_1[7]);
  _SfList_Destroy_4(param_1[7]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


