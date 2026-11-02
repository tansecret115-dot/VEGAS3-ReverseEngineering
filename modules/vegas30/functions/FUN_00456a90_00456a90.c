/* Module: vegas30.exe
   Function: FUN_00456a90
   Address: 00456a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456a90(int param_1)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  hWnd = *(HWND *)(param_1 + 0x210);
  if (hWnd != (HWND)0x0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = uVar2 >> 1 & 0x800;
    if ((uVar2 & 0x800) != uVar3) {
      *(uint *)(param_1 + 0x18) = uVar2 & 0xfffff7ff | uVar3;
      SendMessageA(hWnd,0x401,uVar3 >> 0xb,0);
      if ((*(uint *)(param_1 + 0x18) & 0x1000) != 0) {
        uVar2 = *(uint *)(param_1 + 0x174) >> 0x10 & 0xf;
        if (uVar2 < 0x10) {
          iVar1 = *(int *)(param_1 + 0x50 + uVar2 * 4);
          *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(iVar1 + 0x14);
        }
        else {
          *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0xac0);
          *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0xac4);
          *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0xac8);
          *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0xacc);
        }
        SendMessageA(*(HWND *)(param_1 + 0x210),0x406,0,param_1 + 0x214);
        SendMessageA(*(HWND *)(param_1 + 0x210),0x40c,0,param_1 + 0x214);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffdfff;
        return;
      }
      FUN_00452d70(param_1);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffdfff;
      return;
    }
    if ((uVar2 & 0x2000) != 0) {
      SendMessageA(hWnd,0x40c,0,param_1 + 0x214);
    }
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffdfff;
  return;
}


