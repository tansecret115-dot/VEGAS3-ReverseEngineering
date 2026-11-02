/* Module: mcplug.dll
   Function: FUN_00417160
   Address: 00417160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417160(HWND param_1)

{
  uchar *_Source;
  short local_204 [2];
  uchar local_200 [512];
  
  FUN_0046e0f0(DAT_00487a70,local_204);
  FUN_0041fd40(local_200,(BYTE *)"Error %d: Error obtaining key from KeyServer!\n\n");
  _Source = FUN_0046ea70(local_204[0]);
  _mbscat(local_200,_Source);
  FUN_00420130(param_1,(LPCSTR)local_200,"MPEG Network License Error",0x10);
  return;
}


