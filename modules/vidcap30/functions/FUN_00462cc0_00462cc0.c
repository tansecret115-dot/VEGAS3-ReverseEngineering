/* Module: vidcap30.exe
   Function: FUN_00462cc0
   Address: 00462cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00462cc0(void)

{
  uchar *_Source;
  undefined4 local_204;
  uchar local_200 [512];
  
  FUN_005747d0(&local_204);
  SfPrintF(local_200,"Error %d: Error obtaining key from KeyServer!\n\n",(int)(short)local_204);
  _Source = (uchar *)FUN_00575150(local_204);
  _mbscat(local_200,_Source);
  _SfMessageBox_16(DAT_005ba4bc,local_200,"Vegas Network License Error",0x10);
  return;
}


