/* Module: sfcdi.dll
   Function: FUN_5bf31220
   Address: 5bf31220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf31220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = HttpSendRequestA(param_1,param_2,0xffffffff,param_3,param_4);
  if (iVar1 == 0) {
    GetLastError();
    return 0x8004e0ed;
  }
  return 0;
}


