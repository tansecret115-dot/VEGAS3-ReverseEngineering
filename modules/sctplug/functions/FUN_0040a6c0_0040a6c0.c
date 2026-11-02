/* Module: sctplug.dll
   Function: FUN_0040a6c0
   Address: 0040a6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a6c0(LPSTR param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uchar local_20 [4];
  undefined1 local_1c;
  
  *param_1 = '\0';
  if (param_3 == 0) {
    return 0;
  }
  if (*(char *)(param_3 + 0x2f) != '\0') {
    iVar1 = FUN_0040a690(param_3 + 0x2f,4);
    if (iVar1 == 0) {
      lstrcpynA((LPSTR)local_20,(LPCSTR)(param_3 + 0x2f),5);
      local_1c = 0;
      FUN_0040a630((char *)local_20);
      goto LAB_0040a71c;
    }
  }
  _mbscpy(local_20,"0000");
LAB_0040a71c:
  wsprintfA(param_1,"SP%s.WAV",local_20);
  return 0;
}


