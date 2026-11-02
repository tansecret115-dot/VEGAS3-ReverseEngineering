/* Module: mp3plug.dll
   Function: FUN_5f68db50
   Address: 5f68db50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f68db50(HWND param_1)

{
  uchar *_Source;
  short local_204 [2];
  uchar local_200 [512];
  
  FUN_5f724dc0(DAT_5f74d2f8,local_204);
  FUN_5f6b1a30(local_200,(BYTE *)"Error %d: Error obtaining key from KeyServer!\n\n");
  _Source = FUN_5f725740(local_204[0]);
  _mbscat(local_200,_Source);
  FUN_5f6b1e20(param_1,(LPCSTR)local_200,"MP3 Network License Error",0x10);
  return;
}


