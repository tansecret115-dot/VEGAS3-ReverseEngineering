/* Module: dsetup.dll
   Function: FUN_0040219a
   Address: 0040219a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040219a(void)

{
  UINT UVar1;
  char *pcVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined1 local_21c [260];
  CHAR local_118 [260];
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  UVar1 = GetWindowsDirectoryA(local_118,0x104);
  if (UVar1 == 0) {
    uVar4 = 0xfffffff7;
  }
  else {
    pcVar2 = _strchr(local_118,0x5c);
    if (pcVar2 != (char *)0x0) {
      pcVar2[1] = '\0';
    }
    BVar3 = GetDiskFreeSpaceA(local_118,&local_10,&local_c,&local_8,&local_14);
    if (BVar3 != 0) {
      if (0xefffff < local_10 * local_c * local_8) {
        return 0;
      }
      (*DAT_0040aa88)(0x13a9,local_21c,0x104);
      (*DAT_0040aa7c)(0xc,0x10,local_21c,0,0);
    }
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}


