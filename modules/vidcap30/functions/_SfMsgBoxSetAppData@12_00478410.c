/* Module: vidcap30.exe
   Function: _SfMsgBoxSetAppData@12
   Address: 00478410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetAppData_12(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_005c16dc;
                    /* 0x78410  567  _SfMsgBoxSetAppData@12 */
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_005c16dc = GetCurrentThreadId();
  DAT_005c16e0 = param_1;
  DAT_005c16e4 = param_2;
  _mbscpy(&DAT_005c16f0,param_3);
  return 1;
}


