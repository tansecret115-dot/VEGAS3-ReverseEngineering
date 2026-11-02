/* Module: dsetup.dll
   Function: FUN_00401e93
   Address: 00401e93
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401e93(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,0);
    if (BVar1 == 0) break;
    BVar1 = GetMessageA(&local_20,(HWND)0x0,0,0);
    if (BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  return;
}


