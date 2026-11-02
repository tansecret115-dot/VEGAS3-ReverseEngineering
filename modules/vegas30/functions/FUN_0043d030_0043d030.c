/* Module: vegas30.exe
   Function: FUN_0043d030
   Address: 0043d030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d030(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_0063dd5c < 1) {
    return 0;
  }
  piVar1 = &DAT_0063dcfc;
  while (((piVar1[-1] <= DAT_0064b4e0 && (*piVar1 <= DAT_0064b4e4)) &&
         ((DAT_0064b4f0 == 0 || ((piVar1[-1] != DAT_0064b4e0 || (*piVar1 != DAT_0064b4e4))))))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x1b;
    if (DAT_0063dd5c <= iVar2) {
      return 0;
    }
  }
  return 1;
}


