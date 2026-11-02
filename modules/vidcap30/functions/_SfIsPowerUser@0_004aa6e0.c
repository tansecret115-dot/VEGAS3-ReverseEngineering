/* Module: vidcap30.exe
   Function: _SfIsPowerUser@0
   Address: 004aa6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsPowerUser_0(void)

{
  int iVar1;
  char *pcVar2;
  LSTATUS LVar3;
  HKEY local_108;
  CHAR local_104 [260];
  
                    /* 0xaa6e0  471  _SfIsPowerUser@0 */
  iVar1 = _SfIsWin95_0();
  pcVar2 = "Windows";
  if (iVar1 == 0) {
    pcVar2 = "Windows NT";
  }
  wsprintfA(local_104,"SOFTWARE\\Microsoft\\%s\\CurrentVersion\\~SfTestLoginPrivilege",pcVar2);
  LVar3 = RegCreateKeyA((HKEY)0x80000002,local_104,&local_108);
  if (LVar3 == 0) {
    RegDeleteKeyA((HKEY)0x80000002,local_104);
    RegCloseKey(local_108);
    return 1;
  }
  return 0;
}


