/* Module: vegas30k.dll
   Function: FUN_0114e6f0
   Address: 0114e6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114e6f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x48] = *param_1;
  iVar1 = GetDlgCtrlID((HWND)*param_1);
  param_1[0x49] = iVar1;
  param_1[0x4a] = param_2;
  uVar2 = FUN_0114e7d0(param_1,param_3,param_4);
  param_1[0x4b] = uVar2;
  uVar2 = FUN_0114e760(param_1,param_3,param_4);
  param_1[0x4c] = uVar2;
  param_1[0x4d] = param_3;
  param_1[0x4e] = param_4;
  SendMessageA((HWND)param_1[0x47],0x4e,param_1[0x49],(LPARAM)(param_1 + 0x48));
  return;
}


