/* Module: vegas30.exe
   Function: FUN_0057f320
   Address: 0057f320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057f320(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  CHAR local_124 [260];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00628fb0;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec8;
  ExceptionList = &local_14;
  param_1[1] = param_6;
  param_1[2] = param_2;
  iVar1 = FUN_0057f110();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
    if (-1 < iVar1) {
      local_8 = 0;
      iVar1 = FUN_0057f1e0();
      if (-1 < iVar1) {
        local_20 = iVar1;
        local_20 = FUN_0057f4b0(0,0);
        iVar1 = FUN_0057f2a0();
      }
      local_8 = 0xffffffff;
      if (param_1[0x14] != 0) {
        local_20 = iVar1;
        GetModuleFileNameA((HMODULE)0x0,local_124,0x104);
        ShellExecuteA((HWND)0x0,(LPCSTR)0x0,local_124,"",(LPCSTR)0x0,5);
      }
    }
  }
  ExceptionList = local_14;
  return iVar1;
}


