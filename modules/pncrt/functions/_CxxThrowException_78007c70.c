/* Module: pncrt.dll
   Function: _CxxThrowException
   Address: 78007c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_20 [4];
  DWORD local_10;
  ULONG_PTR local_c;
  void *local_8;
  ThrowInfo *local_4;
  
  pDVar2 = &DAT_78036a58;
  pDVar3 = local_20;
                    /* 0x7c70  78  _CxxThrowException */
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_8 = pExceptionObject;
  local_4 = pThrowInfo;
  RaiseException(local_20[0],local_20[1],local_10,&local_c);
  return;
}


