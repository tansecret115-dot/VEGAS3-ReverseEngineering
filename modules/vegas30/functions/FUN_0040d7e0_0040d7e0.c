/* Module: vegas30.exe
   Function: FUN_0040d7e0
   Address: 0040d7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d7e0(void)

{
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar local_104 [260];
  
  uVar4 = 1;
  pCVar1 = GetCommandLineA();
  iVar2 = FUN_004028b0(pCVar1,uVar4);
  if (iVar2 < 0) {
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,5,iVar2,0,1);
    iVar2 = 0;
  }
  else if (iVar2 == 1) {
    iVar3 = FUN_0057bf30();
    if ((((iVar3 != 0) && (DAT_006471f8 == 0)) && (DAT_00647894 != 0)) && (DAT_0064789c != '\0')) {
      _mbscpy(local_104,(uchar *)&DAT_0064789c);
      iVar2 = FUN_004ec850(local_104,0,0xffffffff);
    }
  }
  uVar4 = 0;
  if (-1 < iVar2) {
    uVar4 = 1;
    iVar2 = _SfErrorHandler_GetLastError_0();
    if (-1 < iVar2) goto LAB_0040d88c;
  }
  _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,5,iVar2,&DAT_0064789c,uVar4);
LAB_0040d88c:
  FUN_004325c0(DAT_0064b138);
  return;
}


