/* Module: sfppack2.dll
   Function: FUN_5cd0ea40
   Address: 5cd0ea40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0ea40(int param_1,HDC param_2,int *param_3)

{
  bool bVar1;
  HFONT h;
  HGDIOBJ h_00;
  int iVar2;
  LPCSTR lpString;
  tagSIZE *ptVar3;
  tagSIZE local_30;
  tagSIZE local_28;
  uchar local_20 [32];
  
  h = FUN_5cd2ba40(0x6e);
  h_00 = SelectObject(param_2,h);
  FUN_5cd20ca0(local_20,(BYTE *)(param_1 + 0x98));
  ptVar3 = &local_30;
  iVar2 = lstrlenA((LPCSTR)local_20);
  GetTextExtentPoint32A(param_2,(LPCSTR)local_20,iVar2,ptVar3);
  local_28.cx = 0;
  local_28.cy = 0;
  if (((*(uint *)(param_1 + 4) & 0x800) == 0) && ((*(uint *)(param_1 + 4) & 4) != 0)) {
    bVar1 = false;
  }
  else {
    lpString = FUN_5cd08210(DAT_5cd67a38,0x1057);
    ptVar3 = &local_28;
    iVar2 = lstrlenA(lpString);
    GetTextExtentPoint32A(param_2,lpString,iVar2,ptVar3);
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
  SelectObject(param_2,h_00);
  return;
}


