/* Module: vidcap30.exe
   Function: FUN_00406180
   Address: 00406180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406180(void)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  uchar local_104 [260];
  
  uVar3 = 0;
  if ((DAT_005ba578 == 0) || (DAT_005ba580 == '\0')) {
LAB_004061bf:
    uVar3 = 1;
    iVar1 = _SfErrorHandler_GetLastError_0();
    if (-1 < iVar1) goto LAB_004061ed;
  }
  else {
    _mbscpy(local_104,(uchar *)&DAT_005ba580);
    iVar1 = FUN_004179c0(local_104,0,0xffffffff);
    if (-1 < iVar1) goto LAB_004061bf;
  }
  if (((byte)DAT_005ba4b4 & 0x10) == 0) {
    _SfErrorHandler_MsgBox_24(DAT_005ba4bc,0x30,5,iVar1,&DAT_005ba580,uVar3);
  }
LAB_004061ed:
  FUN_00416c90();
  uVar3 = 1;
  pCVar2 = GetCommandLineA();
  iVar1 = FUN_00402720(pCVar2,uVar3);
  if ((iVar1 < 0) && (((byte)DAT_005ba4b4 & 0x10) == 0)) {
    _SfErrorHandler_MsgBox_24(DAT_005ba4bc,0x30,5,iVar1,0,1);
  }
  FUN_00416c90();
  return;
}


