/* Module: vidcap30.exe
   Function: FUN_004463c0
   Address: 004463c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004463c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_005ba4c0 + 0x70);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e4) != 0)) {
    iVar2 = FUN_00434f90(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x2e4) = 0;
      PostMessageA(*(HWND *)(iVar1 + 8),0x111,0x9d7f,0);
    }
  }
  return;
}


