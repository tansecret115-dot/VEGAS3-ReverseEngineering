/* Module: vegas30.exe
   Function: FUN_00551230
   Address: 00551230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551230(uint param_1,undefined4 param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1;
  hWnd = (HWND)FUN_0043bc10(param_2,0xfdec,&DAT_00644e28,0x10,param_1 + 0x94);
  *(HWND *)(uVar1 + 0x90) = hWnd;
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x402,0xfdf3,(uint)*(ushort *)(uVar1 + 0x88));
    if (DAT_0064b4e4 == 0) {
      iVar2 = FUN_00601ab0(&param_2,&param_1,1);
      if (iVar2 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar3 = (param_1 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar3) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = param_2;
          DAT_0064b4e4 = uVar3;
        }
      }
    }
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
      SendMessageA(*(HWND *)(uVar1 + 0x90),0x404,0xfdf0,1);
    }
  }
  return;
}


