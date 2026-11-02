/* Module: vegas30.exe
   Function: FUN_00411250
   Address: 00411250
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00411250(LPVOID param_1,LPCSTR param_2,WINDOWPLACEMENT *param_3)

{
  int X;
  int Y;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  HWND pHVar4;
  uint local_c;
  HWND local_4;
  
  puVar2 = DAT_0064762c;
  X = (param_3->rcNormalPosition).left;
  Y = (param_3->rcNormalPosition).top;
  local_4 = DAT_00647624;
  uVar1 = *(uint *)((int)param_1 + 0xc);
  uVar3 = uVar1 & 7;
  if ((((uVar1 & 1) != 0) && ((HWND)DAT_0064762c[0xc] != (HWND)0x0)) && ((uVar1 & 0x10) == 0)) {
    local_4 = (HWND)DAT_0064762c[0xc];
  }
  local_c = 0;
  if ((uVar1 & 0x400) != 0) {
    local_c = 0x100000;
  }
  if ((uVar1 & 0x800) != 0) {
    local_c = local_c | 0x200000;
  }
  if (uVar3 < 2) {
    local_4 = (HWND)*DAT_0064762c;
  }
  pHVar4 = CreateWindowExA(*(DWORD *)(&DAT_0063d154 + uVar3 * 4),"Vegas.Class.Doc",param_2,
                           *(uint *)(&DAT_0063d134 + uVar3 * 4) | local_c,X,Y,
                           (param_3->rcNormalPosition).right - X,
                           (param_3->rcNormalPosition).bottom - Y,local_4,(HMENU)0x0,DAT_006471fc,
                           param_1);
  if (pHVar4 != (HWND)0x0) {
    if (((byte)*(undefined4 *)((int)param_1 + 0xc) & 3) == 3) {
      FUN_00410bb0(puVar2,param_1,param_3);
    }
    SetWindowPlacement(*(HWND *)((int)param_1 + 8),param_3);
    return pHVar4;
  }
  return (HWND)0x0;
}


