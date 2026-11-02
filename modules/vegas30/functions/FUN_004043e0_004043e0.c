/* Module: vegas30.exe
   Function: FUN_004043e0
   Address: 004043e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004043e0(HWND param_1,INT_PTR param_2)

{
  int iVar1;
  
  DAT_00647640 = param_2;
  iVar1 = FUN_004043b0(param_1);
  if (iVar1 != 0) {
    EndDialog(param_1,param_2);
    return;
  }
  if ((DAT_0064761c & 0x100) != 0) {
    FUN_00411f60(DAT_0064762c,1);
  }
  ShowWindow(param_1,0);
  return;
}


