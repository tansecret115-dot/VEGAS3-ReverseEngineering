/* Module: vegas30.exe
   Function: FUN_004f0b90
   Address: 004f0b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004f0b90(int param_1)

{
  LPSTR lpString1;
  LPCSTR lpString1_00;
  int iVar1;
  int iVar2;
  CHAR local_104 [260];
  
  lpString1 = (LPSTR)(param_1 + 0x68c);
  if (*lpString1 != '\0') {
    lpString1_00 = (LPCSTR)_SfGetFileNamePtrA_4(lpString1);
    iVar1 = lstrcmpiA(lpString1_00,"visc.exe");
    if ((*lpString1 != '\0') && (iVar2 = _SfDoesFileExist_4(lpString1), iVar2 != 0)) {
      return (iVar1 != 0) + 1;
    }
  }
  iVar1 = FUN_004f0ae0(local_104,0x104);
  if (iVar1 == 1) {
    lstrcpynA(lpString1,local_104,0x104);
    *(undefined1 *)(param_1 + 0x78f) = 0;
  }
  return iVar1;
}


