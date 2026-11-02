/* Module: pncrt.dll
   Function: _unloaddll
   Address: 7801b480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _unloaddll(intptr_t _Handle)

{
  BOOL BVar1;
  DWORD DVar2;
  
                    /* 0x1b480  488  _unloaddll */
  BVar1 = FreeLibrary((HMODULE)_Handle);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x7801b48f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}


