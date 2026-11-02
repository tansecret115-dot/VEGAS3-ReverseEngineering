/* Module: vegas30.exe
   Function: FUN_0051f4a0
   Address: 0051f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051f4a0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(DAT_0064762c + 0xa4);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xa8) & 1) != 0)) && (*(int *)(iVar1 + 0x98) != 0)) {
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x98) + 4) & 0x1000;
    if (((uVar2 != 0) && (((param_2 & 2) != 0 || ((param_1 & 0x40000) != 0)))) ||
       ((uVar2 == 0 && (((param_2 & 0x40) != 0 || ((param_2 & 0x100) != 0)))))) {
      SetTimer(*(HWND *)(iVar1 + 8),0x66,0xfa,(TIMERPROC)0x0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0051f0b0(iVar1);
    }
    if ((((*(int *)(iVar1 + 0x98) == 0) || ((*(uint *)(*(int *)(iVar1 + 0x98) + 4) & 0x1000) == 0))
        && (((param_1 & 0x100) != 0 || ((param_2 & 0x1800) != 0)))) &&
       ((*(byte *)(iVar1 + 0xa8) & 8) == 0)) {
      PostMessageA(*(HWND *)(iVar1 + 8),0x704,0,0);
    }
    if ((param_1 & 2) != 0) {
      puVar4 = &DAT_0064b110;
      puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x90) + 0x20);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_004a4020(*(undefined4 *)(iVar1 + 0x90),DAT_006476c8,DAT_006476cc);
      FUN_00453030(*(undefined4 *)(iVar1 + 0x90));
    }
  }
  return;
}


