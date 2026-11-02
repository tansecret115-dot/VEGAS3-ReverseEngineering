/* Module: vegas30.exe
   Function: FUN_0044c9a0
   Address: 0044c9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c9a0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(DAT_0064762c + 0xa0);
  if (iVar1 != 0) {
    if ((((*(int *)(iVar1 + 0xa8) == 4) || (*(int *)(iVar1 + 0xa8) == 2)) &&
        (((param_2 & 2) != 0 || ((param_1 & 0x40000) != 0)))) ||
       (((param_2 & 0x40) != 0 || ((param_2 & 0x100) != 0)))) {
      SetTimer(*(HWND *)(iVar1 + 8),0x67,0xfa,(TIMERPROC)0x0);
    }
    if ((param_1 & 2) != 0) {
      puVar3 = &DAT_0064b110;
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x80) + 0x20);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_004a4020(*(undefined4 *)(iVar1 + 0x80),DAT_006476c8,DAT_006476cc);
      FUN_00453030(*(undefined4 *)(iVar1 + 0x80));
    }
    if (((*(byte *)(iVar1 + 0x118) & 1) != 0) &&
       ((((param_1 & 0x100) != 0 || ((param_2 & 0x1000) != 0)) &&
        (*(HWND *)(iVar1 + 300) != (HWND)0x0)))) {
      InvalidateRect(*(HWND *)(iVar1 + 300),(RECT *)0x0,1);
    }
  }
  return;
}


