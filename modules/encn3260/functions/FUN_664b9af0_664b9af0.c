/* Module: encn3260.dll
   Function: FUN_664b9af0
   Address: 664b9af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b9af0(LPCSTR param_1,DWORD param_2)

{
  DWORD DVar1;
  HGLOBAL hMem;
  DWORD dwBytes;
  LPVOID lpData;
  BOOL BVar2;
  uint local_10;
  HGLOBAL local_c;
  undefined4 local_8;
  
  DVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_2 + 0x404) = 0;
  *(undefined4 *)(param_2 + 0x400) = 0;
  dwBytes = GetFileVersionInfoSizeA(param_1,&param_2);
  if (dwBytes != 0) {
    local_c = GlobalAlloc(2,dwBytes);
    lpData = GlobalLock(local_c);
    BVar2 = GetFileVersionInfoA(param_1,param_2,dwBytes,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(lpData,&DAT_664e32e0,&param_1,&local_10);
      if (BVar2 != 0) {
        local_8 = 1;
        *(undefined4 *)(DVar1 + 0x404) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(DVar1 + 0x400) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    hMem = local_c;
    GlobalUnlock(local_c);
    GlobalFree(hMem);
  }
  return local_8;
}


