/* Module: vegas30.exe
   Function: FUN_00422470
   Address: 00422470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422470(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = Mixer_NumBusTypePorts(4); iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_0040c050(200);
    if (iVar2 != 0) {
      FUN_00419310(iVar2);
      InvalidateRect(*(HWND *)(iVar2 + 0x1b4),(RECT *)0x0,1);
    }
  }
  iVar1 = FUN_0040c050(200);
  if (iVar1 != 0) {
    FUN_00419310(iVar1);
    InvalidateRect(*(HWND *)(iVar1 + 0x1b4),(RECT *)0x0,1);
  }
  return;
}


