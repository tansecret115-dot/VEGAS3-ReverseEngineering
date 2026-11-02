/* Module: vegas30.exe
   Function: FUN_004290d0
   Address: 004290d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004290d0(void)

{
  int iVar1;
  
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x4f4) != 0) {
      FUN_00548f50(iVar1 + 0x4fc);
      *(undefined4 *)(iVar1 + 0x4f4) = 0;
    }
    *(undefined4 *)(iVar1 + 0x4f8) = 0;
    PostMessageA(*(HWND *)(iVar1 + 0xfc),0x664,0,2);
  }
  return;
}


