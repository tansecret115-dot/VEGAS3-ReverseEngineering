/* Module: g2plug.dll
   Function: FUN_5f833280
   Address: 5f833280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f833280(HWND param_1,LONG param_2,LONG param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)GetWindowLongA(param_1,-0x15);
  if ((*pbVar1 & 2) != 0) {
    SetFocus(param_1);
  }
  iVar2 = FUN_5f832990((int)pbVar1,param_2,param_3);
  if (((-1 < iVar2) || (param_4 == 0)) && (*(int *)(pbVar1 + 0x10) != iVar2)) {
    *(int *)(pbVar1 + 0x10) = iVar2;
    if ((iVar2 < 0) || (*(int *)(pbVar1 + 0xb0) <= iVar2)) {
      SetWindowTextA(param_1,"");
    }
    else {
      *(undefined4 *)(pbVar1 + 0x14) = *(undefined4 *)(pbVar1 + iVar2 * 0x38 + 0x158);
      *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(pbVar1 + iVar2 * 0x38 + 0x15c);
      *(undefined4 *)(pbVar1 + 0x1c) = *(undefined4 *)(pbVar1 + iVar2 * 0x38 + 0x160);
      *(undefined4 *)(pbVar1 + 0x20) = *(undefined4 *)(pbVar1 + iVar2 * 0x38 + 0x164);
      SetWindowTextA(param_1,(LPCSTR)(pbVar1 + iVar2 * 0x38 + 0x134));
    }
    FUN_5f832140(param_1,(int)pbVar1,1);
    InvalidateRect(param_1,(RECT *)0x0,1);
    return 1;
  }
  return 0;
}


