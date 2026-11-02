/* Module: rmme3260.dll
   Function: FUN_66246420
   Address: 66246420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66246420(void *this,HDC param_1,HBITMAP param_2,undefined4 *param_3,undefined4 *param_4)

{
  SIZE_T dwBytes;
  ushort uVar1;
  SIZE_T SVar2;
  HGLOBAL pvVar3;
  LPBITMAPINFO lpbmi;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  LPBITMAPINFO ptVar7;
  DWORD local_4c [2];
  uint local_44;
  undefined2 local_40;
  ushort local_3e;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  uint local_1c;
  short local_14;
  short sStack_12;
  void *local_c;
  undefined4 local_8;
  
  *param_3 = 0;
  local_8 = 0;
  *param_4 = 0;
  if (param_1 == (HDC)0x0) {
    return 0x80004005;
  }
  if (param_2 == (HBITMAP)0x0) {
    return 0x80004005;
  }
  local_c = this;
  GetObjectA(param_2,0x18,local_24);
  local_3e = local_14 * sStack_12;
  local_4c[1] = local_20;
  local_4c[0] = 0x28;
  local_44 = local_1c;
  local_38 = (local_20 * (uint)local_3e + 0x1f >> 3 & 0x1ffffffc) * local_1c;
  local_40 = 1;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (local_3e < 9) {
    uVar5 = 1 << ((byte)local_3e & 0x1f);
  }
  else {
    uVar5 = 0;
  }
  dwBytes = local_38 + 0x28 + (uVar5 & 0xffff) * 4;
  if (*(HGLOBAL *)((int)this + 4) != (HGLOBAL)0x0) {
    SVar2 = GlobalSize(*(HGLOBAL *)((int)this + 4));
    if (SVar2 == dwBytes) goto LAB_662464f2;
    GlobalFree(*(HGLOBAL *)((int)this + 4));
  }
  pvVar3 = GlobalAlloc(2,dwBytes);
  *(HGLOBAL *)((int)this + 4) = pvVar3;
LAB_662464f2:
  lpbmi = GlobalLock(*(HGLOBAL *)((int)this + 4));
  if (lpbmi == (LPBITMAPINFO)0x0) {
    return 0x80004005;
  }
  pDVar6 = local_4c;
  ptVar7 = lpbmi;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    (ptVar7->bmiHeader).biSize = *pDVar6;
    pDVar6 = pDVar6 + 1;
    ptVar7 = (LPBITMAPINFO)&(ptVar7->bmiHeader).biWidth;
  }
  GetDIBits(param_1,param_2,0,local_44 & 0xffff,
            &lpbmi->bmiColors[(lpbmi->bmiHeader).biClrUsed - 10].rgbBlue + (lpbmi->bmiHeader).biSize
            ,lpbmi,0);
  if (((lpbmi->bmiHeader).biClrUsed == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
    uVar5 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    uVar5 = (uint)(ushort)(lpbmi->bmiHeader).biClrUsed;
  }
  (lpbmi->bmiHeader).biClrUsed = uVar5 & 0xffff;
  *param_3 = &lpbmi->bmiColors[(uVar5 & 0xffff) - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
  *param_4 = lpbmi;
  GlobalUnlock(*(HGLOBAL *)((int)local_c + 4));
  return local_8;
}


