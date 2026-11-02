/* Module: pncrt.dll
   Function: FUN_7801e330
   Address: 7801e330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_7801e330(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  DWORD local_1c;
  DWORD local_18;
  _INPUT_RECORD local_14;
  
  if (DAT_78040938 != 0xffffffff) {
    uVar1 = DAT_78040938 & 0xff;
    DAT_78040938 = 0xffffffff;
    return uVar1;
  }
  if (DAT_78040940 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_78040940 == (HANDLE)0xfffffffe) {
    FUN_7801f960();
  }
  GetConsoleMode(DAT_78040940,&local_18);
  SetConsoleMode(DAT_78040940,0);
  iVar2 = ReadConsoleInputA(DAT_78040940,&local_14,1,&local_1c);
  do {
    if ((iVar2 == 0) || (local_1c == 0)) {
      uVar1 = 0xffffffff;
LAB_7801e409:
      SetConsoleMode(DAT_78040940,local_18);
      return uVar1;
    }
    if ((local_14.EventType == 1) && (local_14.Event.KeyEvent.bKeyDown != 0)) {
      uVar1 = local_14.Event._10_4_ & 0xff;
      if (uVar1 != 0) goto LAB_7801e409;
      pbVar3 = (byte *)FUN_7801e5f0((int)&local_14.Event);
      if (pbVar3 != (byte *)0x0) {
        uVar1 = (uint)*pbVar3;
        DAT_78040938 = (uint)pbVar3[1];
        goto LAB_7801e409;
      }
    }
    iVar2 = ReadConsoleInputA(DAT_78040940,&local_14,1,&local_1c);
  } while( true );
}


