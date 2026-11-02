/* Module: vegas30.exe
   Function: FUN_0043fc30
   Address: 0043fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043fc30(HSFCD__ *param_1)

{
  HCURSOR pHVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulong local_4;
  
  pHVar1 = (HCURSOR)_SfGetUICursor_4(0x7f02);
  pHVar1 = SetCursor(pHVar1);
  SfCD_GetProcessTime(param_1,0,&local_4);
  DVar2 = timeGetTime();
  do {
    DVar3 = timeGetTime();
  } while (DVar3 < DVar2 + local_4);
  if (pHVar1 != (HCURSOR)0x0) {
    SetCursor(pHVar1);
  }
  return 0;
}


