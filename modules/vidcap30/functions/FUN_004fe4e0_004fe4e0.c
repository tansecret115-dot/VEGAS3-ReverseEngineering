/* Module: vidcap30.exe
   Function: FUN_004fe4e0
   Address: 004fe4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fe4e0(int param_1)

{
  int iVar1;
  HWND pHVar2;
  DWORD DVar3;
  LRESULT LVar4;
  int iVar5;
  int *piVar6;
  int local_20 [4];
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x488) != 2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  SetCursor(*(HCURSOR *)(param_1 + 0x49c));
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)(param_1 + 4)) {
    ReleaseCapture();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00498850(param_1);
    ImageList_EndDrag();
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x498);
  if (iVar1 != 0) {
    piVar6 = local_20;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_20[1] = *(undefined4 *)(param_1 + 0x2c);
    local_20[0] = *(int *)(param_1 + 4);
    local_20[2] = (-(uint)((*(uint *)(param_1 + 0x4a4) & 2) != 0) & 5) + 4;
    local_c = iVar1;
    DVar3 = GetMessagePos();
    local_20[3] = (int)(short)DVar3;
    local_10 = (int)(short)(DVar3 >> 0x10);
    LVar4 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,*(WPARAM *)(param_1 + 0x2c),(LPARAM)local_20);
    if (LVar4 == 0) {
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x498));
    }
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  if (*(int *)(param_1 + 0x494) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x494));
  }
  *(undefined4 *)(param_1 + 0x494) = 0;
  FUN_004fdba0(param_1);
  return 0;
}


