/* Module: vegas30.exe
   Function: FUN_005744b0
   Address: 005744b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005744b0(void)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  iVar2 = FUN_005d31e0(DAT_0064b138,4,0,1);
  if (iVar2 == 0) {
    FUN_005733d0();
    FUN_005749b0();
  }
  SetCursor(pHVar1);
  return;
}


