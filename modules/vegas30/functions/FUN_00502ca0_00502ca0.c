/* Module: vegas30.exe
   Function: FUN_00502ca0
   Address: 00502ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00502ca0(HWND param_1)

{
  uint uVar1;
  uint uVar2;
  
  SendMessageA(param_1,0x14b,0,0);
  if (DAT_0064b584 != (uint *)0x0) {
    uVar1 = *DAT_0064b584;
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        SendMessageA(param_1,0x143,0,*(LPARAM *)(DAT_0064b584[2] + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}


