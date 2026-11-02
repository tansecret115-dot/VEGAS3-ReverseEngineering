/* Module: vidcap30.exe
   Function: FUN_0050a8d0
   Address: 0050a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050a8d0(int param_1,HDC param_2,int *param_3)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  LPCSTR lpString;
  undefined4 uVar4;
  tagSIZE *ptVar5;
  tagSIZE local_30;
  tagSIZE local_28;
  CHAR local_20 [32];
  
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  pvVar2 = SelectObject(param_2,pvVar2);
  if (*(int *)(param_1 + 0x80) < 0x8001) {
    uVar4 = 0xc0568000;
  }
  else {
    uVar4 = 0xc0614000;
  }
  SfPrintF(local_20,param_1 + 0x98,0,uVar4);
  ptVar5 = &local_30;
  iVar3 = lstrlenA(local_20);
  GetTextExtentPoint32A(param_2,local_20,iVar3,ptVar5);
  local_28.cx = 0;
  local_28.cy = 0;
  if (((*(uint *)(param_1 + 4) & 0x800) == 0) && ((*(uint *)(param_1 + 4) & 4) != 0)) {
    bVar1 = false;
  }
  else {
    lpString = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1058);
    ptVar5 = &local_28;
    iVar3 = lstrlenA(lpString);
    GetTextExtentPoint32A(param_2,lpString,iVar3,ptVar5);
    bVar1 = true;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if ((bVar1) && (local_30.cy <= local_28.cy)) {
      local_30.cy = local_28.cy;
    }
  }
  else if ((bVar1) && (local_30.cx <= local_28.cx)) {
    local_30.cx = local_28.cx;
  }
  *param_3 = local_30.cx + 2;
  param_3[1] = local_30.cy + 2;
  SelectObject(param_2,pvVar2);
  return;
}


