/* Module: vegas30.exe
   Function: FUN_0051d490
   Address: 0051d490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051d490(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Memory;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CHAR *pCVar7;
  int local_110;
  undefined4 local_10c;
  int local_108;
  CHAR local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0xf0);
  iVar6 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x98) + 0x9c);
  local_108 = iVar4;
  LVar1 = SendMessageA(hWnd,0x147,0,0);
  local_10c = 0;
  FUN_0051d430(iVar4,&local_10c);
  GetWindowTextA(hWnd,local_104,0x104);
  if ((0x32 < LVar1) || (LVar1 < 5)) {
    pCVar7 = local_104;
    uVar5 = _SfGetString_8(DAT_00647204,0x82);
    SfMsgBox(DAT_00647624,0x30,uVar5,pCVar7);
    return -0x7ff8fffb;
  }
  if (iVar4 == 0) {
    iVar2 = 0x898;
  }
  else if (iVar4 == 1) {
    iVar2 = 0x8ca;
  }
  else if (iVar4 == 2) {
    iVar2 = 0x8fc;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = LVar1 + -5 + iVar2;
  iVar3 = _SfDeleteMetric_12(DAT_00647200,iVar2,1);
  if (-1 < iVar3) {
    iVar3 = _SfDeleteMetric_12(DAT_00647200,iVar2,3);
  }
  if (iVar4 == 0) {
    iVar6 = 0x7c;
  }
  else if ((0 < iVar4) && (iVar4 < 3)) {
    iVar6 = 0x84;
  }
  _Memory = calloc(1,iVar6 + 8);
  local_110 = iVar2;
  if (_Memory != (undefined4 *)0x0) {
    while (iVar2 = iVar2 + 1, -1 < iVar3) {
      if (local_108 == 0) {
        iVar4 = 0x898;
      }
      else if (local_108 == 1) {
        iVar4 = 0x8ca;
      }
      else if (local_108 == 2) {
        iVar4 = 0x8fc;
      }
      else {
        iVar4 = 0;
      }
      if (((iVar4 + 0x32 <= iVar2) ||
          (iVar4 = _SfGetMetricStringEx_24(DAT_00647200,iVar2,local_104,0x103,0,0), iVar4 == 0)) ||
         (iVar4 = _SfGetMetricBinary_16(DAT_00647200,iVar2,_Memory,iVar6), iVar6 != iVar4)) break;
      iVar4 = _SfSetMetricString_12(DAT_00647200,local_110,local_104);
      if (-1 < iVar4) {
        _SfSetMetricBinary_16(DAT_00647200,local_110,_Memory,*_Memory);
      }
      iVar3 = _SfDeleteMetric_12(DAT_00647200,iVar2,1);
      if (-1 < iVar3) {
        iVar3 = _SfDeleteMetric_12(DAT_00647200,iVar2,3);
      }
      local_110 = local_110 + 1;
    }
    free(_Memory);
  }
  FUN_0051ddc0(param_1,0);
  return iVar3;
}


