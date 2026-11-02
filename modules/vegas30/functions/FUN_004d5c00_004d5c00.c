/* Module: vegas30.exe
   Function: FUN_004d5c00
   Address: 004d5c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d5c00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  HWND hWnd;
  POINT pt;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint local_4;
  
  if ((param_2 != *(int *)(param_1 + 0x84)) || (param_3 != *(int *)(param_1 + 0x88))) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffbf;
    *(undefined4 *)(param_1 + 0x80) = 0;
    local_4 = 0;
    piVar5 = (int *)(param_1 + 0x34);
    do {
      piVar1 = (int *)*piVar5;
      pt.y = param_3;
      pt.x = param_2;
      BVar2 = PtInRect((RECT *)(piVar1 + 2),pt);
      if (BVar2 != 0) {
        *(int *)(param_1 + 0x80) = piVar1[8];
        uVar3 = (**(code **)(*piVar1 + 8))(param_1,param_2,param_3);
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | uVar3;
        break;
      }
      piVar5 = piVar5 + 1;
      local_4 = local_4 + 1;
    } while (local_4 < 4);
    hWnd = *(HWND *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x84) = param_2;
    *(int *)(param_1 + 0x88) = param_3;
    if (hWnd != (HWND)0x0) {
      uVar3 = *(uint *)(param_1 + 0x30);
      if ((uVar3 & 2) << 5 == (uVar3 & 0x40)) {
        if ((uVar3 & 0x800) != 0) {
          SendMessageA(hWnd,0x40c,0,param_1 + 0xa8);
        }
      }
      else {
        uVar3 = ((int)(uVar3 << 0x19) >> 0x1e ^ uVar3) & 2 ^ uVar3;
        *(uint *)(param_1 + 0x30) = uVar3;
        SendMessageA(hWnd,0x401,uVar3 >> 1 & 1,0);
        if ((*(byte *)(param_1 + 0x30) & 0x40) != 0) {
          uVar3 = *(uint *)(param_1 + 0x80) >> 0x10;
          if (uVar3 < 4) {
            iVar4 = *(int *)(param_1 + 0x34 + uVar3 * 4);
          }
          else {
            iVar4 = 0;
          }
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar4 + 8);
          *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar4 + 0xc);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar4 + 0x14);
          SendMessageA(*(HWND *)(param_1 + 0xa4),0x406,0,param_1 + 0xa8);
          SendMessageA(*(HWND *)(param_1 + 0xa4),0x40c,0,param_1 + 0xa8);
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff7ff;
          return;
        }
      }
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff7ff;
  }
  return;
}


