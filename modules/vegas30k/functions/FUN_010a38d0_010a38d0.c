/* Module: vegas30k.dll
   Function: FUN_010a38d0
   Address: 010a38d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a38d0(undefined4 *param_1,HDC param_2,int param_3,int param_4)

{
  HPEN ho;
  HPEN pHVar1;
  int rop2;
  int iVar2;
  int iVar3;
  HPEN pHVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  GetWindowLongA((HWND)*param_1,-0x10);
  ho = CreatePen(0,1,0);
  pHVar1 = (HPEN)_SfGetUIPenWithStyle_8(0x8d,0);
  rop2 = SetROP2(param_2,10);
  iVar2 = param_1[0x28] + -1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar2 < param_3) {
    param_3 = iVar2;
  }
  iVar3 = param_3;
  if ((param_3 <= param_4) && (iVar3 = param_4, iVar2 < param_4)) {
    iVar3 = iVar2;
  }
  FUN_010a3660(param_1,param_1[0x2d] + param_3 * 8,&local_18);
  local_10 = local_18 + -5;
  local_8 = local_18 + 5;
  local_c = local_14 + -5;
  local_4 = local_14 + 5;
  pHVar4 = ho;
  if (((int)param_1[0xd] <= param_3) && (param_3 <= (int)param_1[0xe])) {
    pHVar4 = pHVar1;
  }
  FUN_010a3860(param_2,&local_10,pHVar4);
  MoveToEx(param_2,local_18,local_14,(LPPOINT)0x0);
  while (param_3 = param_3 + 1, param_3 <= iVar3) {
    FUN_010a3660(param_1,param_1[0x2d] + param_3 * 8,&local_18);
    local_10 = local_18 + -5;
    local_c = local_14 + -5;
    local_8 = local_18 + 5;
    local_4 = local_14 + 5;
    if (param_1[0x28] + -1 == param_3) {
      local_18 = local_18 + 1;
    }
    LineTo(param_2,local_18,local_14);
    pHVar4 = ho;
    if (((int)param_1[0xd] <= param_3) && (param_3 <= (int)param_1[0xe])) {
      pHVar4 = pHVar1;
    }
    FUN_010a3860(param_2,&local_10,pHVar4);
    MoveToEx(param_2,local_18,local_14,(LPPOINT)0x0);
  }
  SetROP2(param_2,rop2);
  DeleteObject(ho);
  return;
}


