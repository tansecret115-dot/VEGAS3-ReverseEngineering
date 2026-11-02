/* Module: vidcap30.exe
   Function: FUN_00498730
   Address: 00498730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00498730(int param_1,int param_2,uint param_3)

{
  POINT pt;
  POINT pt_00;
  SHORT SVar1;
  DWORD DVar2;
  tagRECT local_10;
  
  GetKeyState(0x10);
  SVar1 = GetKeyState(0x11);
  if (param_2 == 0x100) {
    DVar2 = GetMessagePos();
    if ((0xf < param_3) && (param_3 < 0x12)) {
      if ((*(int *)(param_1 + 0x488) == 2) && (SVar1 < 0)) {
        *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 4;
      }
      GetWindowRect(*(HWND *)(param_1 + 4),&local_10);
      pt.y = (int)(short)(DVar2 >> 0x10);
      pt.x = (int)(short)DVar2;
      PtInRect(&local_10,pt);
      return 0;
    }
  }
  else if (((param_2 == 0x101) && (0xf < param_3)) && (param_3 < 0x12)) {
    DVar2 = GetMessagePos();
    if ((*(int *)(param_1 + 0x488) == 2) && (SVar1 < 0)) {
      *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffffb;
    }
    GetWindowRect(*(HWND *)(param_1 + 4),&local_10);
    pt_00.y = (int)(short)(DVar2 >> 0x10);
    pt_00.x = (int)(short)DVar2;
    PtInRect(&local_10,pt_00);
  }
  return 0;
}


