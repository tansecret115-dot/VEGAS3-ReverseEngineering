/* Module: vegas30.exe
   Function: FUN_004de1b0
   Address: 004de1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004de1b0(int param_1)

{
  CHAR *lpString;
  undefined4 uVar1;
  CHAR local_108 [264];
  
  lpString = (CHAR *)_SfGetString_8(DAT_00647204,0x5600);
  if ((((byte)*(undefined4 *)(param_1 + 0xc) & 3) != 3) && (*(int *)(param_1 + 0xdd0) != 0)) {
    uVar1 = _SfGetFileNamePtrA_4(*(int *)(param_1 + 0xdd0) + 0x170);
    SfPrintF(local_108,"%s - %s",lpString,uVar1);
    lpString = local_108;
  }
  if ((*(HWND *)(param_1 + 8) != (HWND)0x0) && ((*(byte *)(param_1 + 0xc) & 0x80) == 0)) {
    SetWindowTextA(*(HWND *)(param_1 + 8),lpString);
  }
  return;
}


