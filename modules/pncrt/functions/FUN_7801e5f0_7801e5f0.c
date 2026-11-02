/* Module: pncrt.dll
   Function: FUN_7801e5f0
   Address: 7801e5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_7801e5f0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  short *psVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_78040670 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_78040672 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_78040674 + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_78040676 + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
    return pcVar2;
  }
  iVar4 = 0;
  psVar3 = &DAT_780405f8;
  while (*psVar3 != *(short *)(param_1 + 8)) {
    psVar3 = psVar3 + 5;
    iVar4 = iVar4 + 1;
    if ((short *)0x7804066f < psVar3) {
      return (char *)0x0;
    }
  }
  if ((uVar1 & 3) != 0) {
    return (char *)(iVar4 * 10 + 0x78040600);
  }
  if ((uVar1 & 0xc) != 0) {
    return (char *)(iVar4 * 10 + 0x780405fe);
  }
  if ((uVar1 & 0x10) != 0) {
    return (char *)(iVar4 * 10 + 0x780405fc);
  }
  return (char *)(iVar4 * 10 + 0x780405fa);
}


