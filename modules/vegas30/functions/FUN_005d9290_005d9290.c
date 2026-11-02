/* Module: vegas30.exe
   Function: FUN_005d9290
   Address: 005d9290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9290(undefined4 param_1,HWND param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetDlgCtrlID(param_2);
  if (iVar1 == 0x440) {
    uVar2 = FUN_005d8930(param_1,param_2,param_3,param_4);
    FUN_005d8840(param_3,param_4);
    return uVar2;
  }
  if (iVar1 == 0x441) {
    uVar2 = FUN_005d8ad0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


