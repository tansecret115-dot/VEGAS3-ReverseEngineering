/* Module: vidpcore.dll
   Function: FUN_5de8de10
   Address: 5de8de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de8de10(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(param_4);
  if (iVar1 == 0x51b) {
    iVar1 = FUN_5deaea40(0x115,param_3,param_4,1,2,param_1[0x13]);
    param_1[0x13] = iVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


