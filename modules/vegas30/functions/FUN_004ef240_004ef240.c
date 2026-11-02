/* Module: vegas30.exe
   Function: FUN_004ef240
   Address: 004ef240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ef240(int param_1,LPSTR param_2)

{
  int *piVar1;
  LPCSTR lpString2;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00614138;
  do {
    if (param_1 == *piVar1) {
      if (*(int *)(&UNK_0061413c + iVar2 * 8) == 0) {
        return 0x80004005;
      }
      lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,*(int *)(&UNK_0061413c + iVar2 * 8));
      lstrcpynA(param_2,lpString2,0x104);
      param_2[0x103] = '\0';
      return 0;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x614160);
  return 0x80004005;
}


