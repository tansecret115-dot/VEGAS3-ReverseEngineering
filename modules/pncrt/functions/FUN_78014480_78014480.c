/* Module: pncrt.dll
   Function: FUN_78014480
   Address: 78014480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78014480(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined1 local_78 [112];
  int iStack_8;
  
  puStack_88 = local_78;
  uStack_84 = 0x78;
  iVar2 = (*DAT_780424fc)((ushort)param_1 & 0x3ff | 0x400,1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_78014680((char *)&puStack_88);
  if ((param_1 != iVar2) && (iStack_8 != 0)) {
    iVar2 = FUN_780146c0(DAT_780424ec);
    uVar3 = 0xffffffff;
    pcVar4 = DAT_780424ec;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar2 == ~uVar3 - 1) {
      return 0;
    }
  }
  return 1;
}


