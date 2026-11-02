/* Module: sftrkfx1.dll
   Function: FUN_5cbb0420
   Address: 5cbb0420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb0420(HWND param_1,LONG param_2,LONG param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)GetWindowLongA(param_1,-0x15);
  if ((*pbVar2 & 2) != 0) {
    SetFocus(param_1);
  }
  iVar3 = FUN_5cbafc90((int)pbVar2,param_2,param_3);
  if (((-1 < iVar3) || (param_4 == 0)) && (*(int *)(pbVar2 + 0x10) != iVar3)) {
    *(int *)(pbVar2 + 0x10) = iVar3;
    if ((-1 < iVar3) && (iVar3 < *(int *)(pbVar2 + 0xa4))) {
      iVar1 = iVar3 * 0x38;
      *(undefined4 *)(pbVar2 + 0x14) = *(undefined4 *)(pbVar2 + iVar3 * 0x38 + 0xd0);
      *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar2 + iVar1 + 0xd4);
      *(undefined4 *)(pbVar2 + 0x1c) = *(undefined4 *)(pbVar2 + iVar1 + 0xd8);
      *(undefined4 *)(pbVar2 + 0x20) = *(undefined4 *)(pbVar2 + iVar1 + 0xdc);
    }
    FUN_5cbaf550(param_1,(int)pbVar2,1);
    InvalidateRect(param_1,(RECT *)0x0,1);
    return 1;
  }
  return 0;
}


