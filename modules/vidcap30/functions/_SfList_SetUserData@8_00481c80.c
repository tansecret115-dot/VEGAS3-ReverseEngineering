/* Module: vidcap30.exe
   Function: _SfList_SetUserData@8
   Address: 00481c80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG _SfList_SetUserData_8(int param_1,LONG param_2)

{
  DWORD DVar1;
  LONG LVar2;
  
                    /* 0x81c80  517  _SfList_SetUserData@8 */
  if ((*(uint *)(param_1 + 0x28) & 0xc0000000) == 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != *(DWORD *)(param_1 + 0x34)) {
      return -1;
    }
  }
  LVar2 = InterlockedExchange((LONG *)(param_1 + 0x2c),param_2);
  return LVar2;
}


