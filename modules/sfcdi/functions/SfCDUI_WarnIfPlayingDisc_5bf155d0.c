/* Module: sfcdi.dll
   Function: SfCDUI_WarnIfPlayingDisc
   Address: 5bf155d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfCDUI_WarnIfPlayingDisc(struct HSFCD__ *) */

uint SfCDUI_WarnIfPlayingDisc(HSFCD__ *param_1)

{
  int iVar1;
  uchar *puVar2;
  tSFCDPLAYAUDIO local_14 [16];
  byte local_4;
  
  while( true ) {
    iVar1 = SfCDDrivePlay_GetStatus(param_1,local_14);
    if ((iVar1 != 0) || ((local_4 & 1) == 0)) break;
    puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xe3);
    iVar1 = FUN_5bf25c20((HWND)0x0,0x41,puVar2);
    if (iVar1 != 1) {
      return 2;
    }
  }
  return 1;
}


