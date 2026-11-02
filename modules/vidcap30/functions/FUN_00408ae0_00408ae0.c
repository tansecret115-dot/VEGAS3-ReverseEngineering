/* Module: vidcap30.exe
   Function: FUN_00408ae0
   Address: 00408ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00408ae0(LPVOID param_1,LPCSTR param_2,WINDOWPLACEMENT *param_3)

{
  int X;
  int Y;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  HWND pHVar4;
  uint local_c;
  HWND local_4;
  
  puVar2 = DAT_005ba4c0;
  X = (param_3->rcNormalPosition).left;
  Y = (param_3->rcNormalPosition).top;
  local_4 = DAT_005ba4bc;
  uVar1 = *(uint *)((int)param_1 + 0xc);
  uVar3 = uVar1 & 7;
  if ((((uVar1 & 1) != 0) && ((HWND)DAT_005ba4c0[0xd] != (HWND)0x0)) && ((uVar1 & 0x10) == 0)) {
    local_4 = (HWND)DAT_005ba4c0[0xd];
  }
  local_c = 0;
  if ((uVar1 & 0x400) != 0) {
    local_c = 0x100000;
  }
  if ((uVar1 & 0x800) != 0) {
    local_c = local_c | 0x200000;
  }
  if (uVar3 < 2) {
    local_4 = (HWND)*DAT_005ba4c0;
  }
  pHVar4 = CreateWindowExA(*(DWORD *)(&DAT_005b2650 + uVar3 * 4),"VIDCAP.3.0.Class.Doc",param_2,
                           *(uint *)(&DAT_005b2630 + uVar3 * 4) | local_c,X,Y,
                           (param_3->rcNormalPosition).right - X,
                           (param_3->rcNormalPosition).bottom - Y,local_4,(HMENU)0x0,DAT_005ba298,
                           param_1);
  if (pHVar4 != (HWND)0x0) {
    if (((byte)*(undefined4 *)((int)param_1 + 0xc) & 3) == 3) {
      FUN_00408cb0(puVar2,0);
      FUN_00408500(puVar2,param_1,param_3);
    }
    SetWindowPlacement(*(HWND *)((int)param_1 + 8),param_3);
    return pHVar4;
  }
  return (HWND)0x0;
}


