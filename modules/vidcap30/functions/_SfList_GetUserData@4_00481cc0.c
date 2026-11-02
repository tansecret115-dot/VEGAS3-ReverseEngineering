/* Module: vidcap30.exe
   Function: _SfList_GetUserData@4
   Address: 00481cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetUserData_4(int param_1)

{
  DWORD DVar1;
  
                    /* 0x81cc0  506  _SfList_GetUserData@4 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != *(DWORD *)(param_1 + 0x34)) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(param_1 + 0x2c);
}


