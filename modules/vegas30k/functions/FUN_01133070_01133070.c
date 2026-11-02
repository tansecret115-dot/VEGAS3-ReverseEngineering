/* Module: vegas30k.dll
   Function: FUN_01133070
   Address: 01133070
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_01133070(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  LRESULT LVar4;
  int *piVar5;
  int local_20 [4];
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  FUN_011319b0(param_2);
  param_2 = 0;
  iVar2 = _SfList_CreateExZ_32(&param_2,4,0x40,0x10,0x40000002,0,0,0);
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = FUN_011327d0(iVar1,param_2,1);
  if (iVar2 < 1) {
    _SfList_Destroy_4(param_2);
    return 0;
  }
  piVar5 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_20[1] = *(undefined4 *)(iVar1 + 0x2c);
  local_20[0] = param_1;
  local_8 = *(undefined4 *)(iVar1 + 0x3c);
  local_20[2] = (param_3 != 0) + 0x11;
  local_c = param_2;
  DVar3 = GetMessagePos();
  local_20[3] = (int)(short)DVar3;
  local_10 = (int)(short)(DVar3 >> 0x10);
  LVar4 = SendMessageA(*(HWND *)(iVar1 + 8),0x4e,*(WPARAM *)(iVar1 + 0x2c),(LPARAM)local_20);
  if (LVar4 == 0) {
    _SfList_DeleteList_16(param_2,0,0xffffffff,0);
    _SfList_Destroy_4(param_2);
  }
  return LVar4;
}


