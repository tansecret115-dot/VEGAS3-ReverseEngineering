/* Module: mcplug.dll
   Function: FUN_004041e0
   Address: 004041e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004041e0(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  char *lpMultiByteStr;
  uchar local_104 [260];
  
  if (param_4 == 1) {
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x34) == 0) {
      lpMultiByteStr = "MPEG-1";
    }
    else {
      lpMultiByteStr = "MPEG-2";
    }
  }
  else if (param_4 == 2) {
    FUN_0041fd40(local_104,(BYTE *)"%dx%d, %d bit");
    lpMultiByteStr = (char *)local_104;
  }
  else {
    if (param_4 != 3) {
      return 1;
    }
    FUN_0041fd40(local_104,(BYTE *)"$d Bytes/Sec");
    lpMultiByteStr = (char *)local_104;
  }
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


