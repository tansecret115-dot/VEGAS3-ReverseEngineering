/* Module: mcplugrw.dll
   Function: FUN_0040d7a0
   Address: 0040d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_0040d7a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  LPCSTR lpString2;
  
  iVar1 = FUN_00406230(DAT_004a812c,DAT_004a8130);
  if ((iVar1 != 0) || (iVar1 = FUN_00406230(DAT_004a812c,0), iVar1 != 0)) {
    if (param_1 == 1) {
      pcVar2 = *(char **)(iVar1 + 0x374);
    }
    else if (param_1 == 2) {
      pcVar2 = *(char **)(iVar1 + 0x378);
    }
    else {
      if (param_1 != 3) goto LAB_0040d7f3;
      pcVar2 = *(char **)(iVar1 + 0x37c);
    }
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      return pcVar2;
    }
  }
LAB_0040d7f3:
  lpString2 = FUN_0041f9f0(DAT_004a811c,0x2776);
  lstrcpynA(&DAT_004a8554,lpString2,0x80);
  DAT_004a85d3 = 0;
  return &DAT_004a8554;
}


