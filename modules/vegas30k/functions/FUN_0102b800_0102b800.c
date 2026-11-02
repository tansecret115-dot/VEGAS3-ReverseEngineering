/* Module: vegas30k.dll
   Function: FUN_0102b800
   Address: 0102b800
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0102b800(undefined4 param_1)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwLen;
  BOOL BVar3;
  uchar *puVar4;
  bool bVar5;
  uchar local_140 [260];
  uchar local_3c [40];
  LONG local_14;
  uint local_10;
  HKEY local_c;
  uint *local_8;
  
  bVar5 = false;
  _mbscpy(local_140,(uchar *)"CLSID\\");
  FUN_0102aeb0(param_1,local_3c,0x28,1);
  _mbscat(local_140,local_3c);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,(LPCSTR)local_140,0,0x20019,&local_c);
  if (LVar1 == 0) {
    local_14 = 0x104;
    LVar1 = RegQueryValueA(local_c,"InprocServer32",(LPSTR)local_140,&local_14);
    if (LVar1 == 0) {
      iVar2 = _SfDoesFileExist_4(local_140);
      if (iVar2 != 0) {
        dwLen = GetFileVersionInfoSizeA((LPCSTR)local_140,(LPDWORD)0x0);
        if (dwLen != 0) {
          FUN_01002100();
          if (&stack0x00000000 != (undefined1 *)0x14c) {
            BVar3 = GetFileVersionInfoA((LPCSTR)local_140,0,dwLen,&stack0xfffffeb4);
            bVar5 = false;
            if (BVar3 != 0) {
              BVar3 = VerQueryValueA(&stack0xfffffeb4,"\\VarFileInfo\\Translation",&local_8,
                                     &local_10);
              if ((BVar3 == 0) || (local_10 == 0)) {
                bVar5 = false;
              }
              else {
                SfPrintF(local_140,"\\StringFileInfo\\%04hX%04hX\\CompanyName",*local_8 & 0xffff,
                         *local_8 >> 0x10);
                BVar3 = VerQueryValueA(&stack0xfffffeb4,(LPCSTR)local_140,&local_8,&local_10);
                bVar5 = false;
                if (BVar3 != 0) {
                  puVar4 = _mbsstr((uchar *)local_8,(uchar *)"Sonic Foundry");
                  bVar5 = puVar4 != (uchar *)0x0;
                }
              }
            }
          }
        }
      }
    }
    RegCloseKey(local_c);
  }
  return bVar5;
}


