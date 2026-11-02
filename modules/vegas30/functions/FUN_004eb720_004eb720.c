/* Module: vegas30.exe
   Function: FUN_004eb720
   Address: 004eb720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb720(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_108;
  char local_104 [260];
  
  iVar2 = 0;
  lVar1 = SfSelectDirectoryDlg
                    (DAT_00647624,
                     "You have chosen an archive file to open.\nSelect destination directory:",
                     local_104,0x104);
  if ((lVar1 == 0) && (iVar2 = _SfZip_Open_12(param_1,2,&local_108), -1 < iVar2)) {
    iVar2 = FUN_004eb4e0(local_108,local_104);
    if (iVar2 < 0) {
      SfMsgBox(DAT_00647624,0x10,"Unable to extract the archive file");
    }
    _SfZip_Close_4(local_108);
  }
  return iVar2;
}


