/* Module: vidcap30.exe
   Function: FUN_0051d440
   Address: 0051d440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051d440(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  HWND hWnd;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    pbVar1 = param_1 + 0x100;
    iVar2 = FUN_0051d550(param_1,param_3,param_4,((byte)param_5 & 4) == 4,pbVar1,param_1 + 0x104);
    if (iVar2 == 5) {
      if (((param_1[0xc] & 0x10) == 0) || (*(int *)pbVar1 == 3)) {
        uVar4 = *(undefined4 *)pbVar1;
        uVar3 = *(undefined4 *)(param_1 + 0x18);
      }
      else if (*(int *)pbVar1 == 1) {
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        uVar4 = 2;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = 1;
      }
      FUN_0051a2f0(param_1,param_1 + 0x1c,uVar3,uVar4);
      FUN_0051d310(param_1,1);
      (**(code **)(param_1 + 0x120))
                (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),4,
                 param_1 + 0x1c,*(undefined4 *)pbVar1);
      return;
    }
  }
  if ((*param_1 & 8) == 0) {
    SetFocus(*(HWND *)(param_1 + 0x30));
  }
  if ((param_5 & 2) == 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
      hWnd = *(HWND *)(param_1 + 0x38);
      if (hWnd == (HWND)0x0) {
        hWnd = GetParent(*(HWND *)(param_1 + 0x30));
      }
      SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x34) | 0x30000,*(LPARAM *)(param_1 + 0x30));
    }
    FUN_0051d760(param_1,param_3,param_4,9,param_5);
  }
  return;
}


