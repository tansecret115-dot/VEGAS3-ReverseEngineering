/* Module: sfcdi.dll
   Function: FUN_5bf17290
   Address: 5bf17290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf17290(HWND param_1,int param_2,int param_3)

{
  uchar local_80 [128];
  
  if (param_3 == 0x474) {
    FUN_5bf16c90(local_80,*(uint *)(param_2 + 0xc0),1);
    SetDlgItemTextA(param_1,0x474,(LPCSTR)local_80);
    return 1;
  }
  if (param_3 != 0x476) {
    return 0;
  }
  FUN_5bf17250(param_1,*(BOOL *)(param_2 + 0x24),*(BOOL *)(param_2 + 0x28));
  SetDlgItemTextA(param_1,0x476,(LPCSTR)(param_2 + 0x30));
  return 1;
}


