/* Module: vegas30.exe
   Function: FUN_004af160
   Address: 004af160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004af22e) */
/* WARNING: Removing unreachable block (ram,0x004af24c) */
/* WARNING: Removing unreachable block (ram,0x004af252) */
/* WARNING: Removing unreachable block (ram,0x004af274) */
/* WARNING: Removing unreachable block (ram,0x004af291) */
/* WARNING: Removing unreachable block (ram,0x004af2af) */
/* WARNING: Removing unreachable block (ram,0x004af29b) */
/* WARNING: Removing unreachable block (ram,0x004af2a6) */
/* WARNING: Removing unreachable block (ram,0x004af2cc) */
/* WARNING: Removing unreachable block (ram,0x004af269) */
/* WARNING: Removing unreachable block (ram,0x004af2fa) */
/* WARNING: Removing unreachable block (ram,0x004af326) */
/* WARNING: Removing unreachable block (ram,0x004af384) */
/* WARNING: Removing unreachable block (ram,0x004af458) */
/* WARNING: Removing unreachable block (ram,0x004af460) */
/* WARNING: Removing unreachable block (ram,0x004af475) */
/* WARNING: Removing unreachable block (ram,0x004af4cf) */
/* WARNING: Removing unreachable block (ram,0x004af3a9) */
/* WARNING: Removing unreachable block (ram,0x004af3b1) */
/* WARNING: Removing unreachable block (ram,0x004af3cb) */
/* WARNING: Removing unreachable block (ram,0x004af425) */
/* WARNING: Removing unreachable block (ram,0x004af453) */
/* WARNING: Removing unreachable block (ram,0x004af4fd) */

int FUN_004af160(void)

{
  int iVar1;
  int *unaff_EBX;
  undefined4 *puVar2;
  int unaff_retaddr;
  int *piStack_44c;
  undefined4 *puStack_444;
  int *local_440;
  undefined4 auStack_438 [268];
  undefined4 *puStack_8;
  int iStack_4;
  
  iVar1 = _SfAudio_CreateGraphObject_4();
  (**(code **)(*local_440 + 0x20))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)*puStack_444)();
    if (-1 < iVar1) {
      puVar2 = auStack_438;
      for (iVar1 = 0x47; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      auStack_438[0] = *puStack_8;
      auStack_438[1] = puStack_8[1];
      auStack_438[2] = puStack_8[2];
      auStack_438[3] = puStack_8[3];
      iVar1 = _FXPackage_LoadPackage_16();
      if ((DAT_0064a52c == 0) && (unaff_retaddr != 0)) {
        (**(code **)(*unaff_EBX + 0xb8))();
        iVar1 = _SfErrorHandler_GetLastError_0();
      }
      if ((-1 < iVar1) || (iStack_4 == 0)) {
        FUN_005d13b0();
        iVar1 = (**(code **)(*unaff_EBX + 0xb8))();
      }
      (**(code **)(*piStack_44c + 8))();
    }
    (**(code **)(*unaff_EBX + 8))();
  }
  return iVar1;
}


