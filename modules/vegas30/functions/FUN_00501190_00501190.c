/* Module: vegas30.exe
   Function: FUN_00501190
   Address: 00501190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501190(undefined4 param_1,HWND param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetDlgCtrlID(param_2);
  if (iVar1 == 0x440) {
    uVar2 = FUN_00500eb0(param_1,param_2,param_3);
    return uVar2;
  }
  if (iVar1 == 0x441) {
    uVar2 = FUN_00500fd0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


