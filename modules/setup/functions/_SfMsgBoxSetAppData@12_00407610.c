/* Module: Setup.exe
   Function: _SfMsgBoxSetAppData@12
   Address: 00407610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetAppData_12(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_00448e04;
                    /* 0x7610  296  _SfMsgBoxSetAppData@12 */
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_00448e04 = GetCurrentThreadId();
  DAT_00448e08 = param_1;
  DAT_00448e0c = param_2;
  _mbscpy(&DAT_00448e18,param_3);
  return 1;
}


