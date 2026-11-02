/* Module: vegas30.exe
   Function: thunk_FUN_005744f0
   Address: 00573470
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_005744f0(void)

{
  int iVar1;
  
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
     (iVar1 = *(int *)(*(int *)(DAT_0064762c + 0x74) + 0x80), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x278) = (uint)(*(int *)(iVar1 + 0x278) == 0);
    *(undefined4 *)(iVar1 + 0x2cc) = 1;
    InvalidateRect(*(HWND *)(iVar1 + 0x24),(RECT *)0x0,0);
  }
  return;
}


