/* Module: vegas30k.dll
   Function: _SfMsgBoxSetAppData@12
   Address: 01058af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetAppData_12(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_0120e5cc;
                    /* 0x58af0  1140  _SfMsgBoxSetAppData@12 */
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_0120e5cc = GetCurrentThreadId();
  DAT_0120e5d0 = param_1;
  DAT_0120e5d4 = param_2;
  _mbscpy(&DAT_0120e5e0,param_3);
  return 1;
}


