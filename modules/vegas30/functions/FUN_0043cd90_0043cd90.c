/* Module: vegas30.exe
   Function: FUN_0043cd90
   Address: 0043cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043cd90(void)

{
  uchar *_Source;
  undefined4 local_204;
  uchar local_200 [512];
  
  FUN_006055b0(&local_204);
  SfPrintF(local_200,"Error %d: Error obtaining key from KeyServer!\n\n",(int)(short)local_204);
  _Source = (uchar *)FUN_00605c00(local_204);
  _mbscat(local_200,_Source);
  _SfMessageBox_16(DAT_00647624,local_200,"Vegas Network License Error",0x10);
  return;
}


