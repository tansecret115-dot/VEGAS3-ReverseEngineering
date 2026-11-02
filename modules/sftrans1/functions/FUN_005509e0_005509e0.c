/* Module: sftrans1.dll
   Function: FUN_005509e0
   Address: 005509e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_005509e0(int param_1,HDC param_2,int param_3,int param_4,COLORREF param_5,char param_6,
            char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RECT local_10;
  
  iVar1 = param_3;
  iVar4 = param_3 + -2;
  iVar2 = 5;
  iVar3 = param_4 + -2;
  param_3 = 5;
  if (param_7 != '\0') {
    iVar2 = 7;
    iVar4 = iVar1 + -3;
    iVar3 = param_4 + -3;
    param_3 = 7;
  }
  if (param_6 != '\0') {
    SetBkColor(param_2,*(COLORREF *)(param_1 + 0x188));
    local_10.left = iVar4 + -1;
    local_10.right = iVar4 + 1 + iVar2;
    local_10.top = iVar3 + -1;
    local_10.bottom = iVar3 + 1 + param_3;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_2,param_5);
  local_10.right = iVar2 + iVar4;
  local_10.bottom = param_3 + iVar3;
  local_10.left = iVar4;
  local_10.top = iVar3;
  ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  if (param_7 != '\0') {
    SetBkColor(param_2,0xffffff);
    local_10.left = iVar4 + 2;
    local_10.right = iVar4 + -2 + iVar2;
    local_10.top = iVar3 + 2;
    local_10.bottom = param_3 + -4 + local_10.top;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  return;
}


