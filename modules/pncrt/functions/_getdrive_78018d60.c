/* Module: pncrt.dll
   Function: _getdrive
   Address: 78018d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _getdrive(void)

{
  DWORD DVar1;
  int iVar2;
  uint local_104 [65];
  
                    /* 0x18d60  263  _getdrive */
  iVar2 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,(LPSTR)local_104);
  if ((DVar1 != 0) && ((char)(local_104[0] >> 8) == ':')) {
    iVar2 = toupper(local_104[0] & 0xff);
    iVar2 = iVar2 + -0x40;
  }
  return iVar2;
}


