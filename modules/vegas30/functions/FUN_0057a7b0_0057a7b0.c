/* Module: vegas30.exe
   Function: FUN_0057a7b0
   Address: 0057a7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_0057a7b0(int param_1)

{
  HRESULT HVar1;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00627318;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    HVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),0);
    PostMessageA(DAT_00647624,0x111,0xc5e9,0);
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    CoUninitialize();
  }
  FUN_00579c50();
  ExceptionList = local_14;
  return HVar1;
}


