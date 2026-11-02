/* Module: vegas30.exe
   Function: FUN_004fc6e0
   Address: 004fc6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fc6e0(HDC param_1,LONG *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  DWORD DVar5;
  COLORREF color;
  int iVar6;
  RECT local_10;
  
  LVar1 = *param_2;
  LVar2 = param_2[1];
  LVar3 = param_2[3];
  LVar4 = ftol();
  if (param_5 == 0) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0xf;
  }
  DVar5 = GetSysColor(iVar6);
  color = SetBkColor(param_1,DVar5);
  local_10.left = LVar1;
  local_10.top = LVar2;
  local_10.right = LVar4;
  local_10.bottom = LVar3;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  LVar1 = param_2[2];
  if (param_5 == 0) {
    iVar6 = 0xf;
  }
  else {
    iVar6 = 2;
  }
  DVar5 = GetSysColor(iVar6);
  SetBkColor(param_1,DVar5);
  local_10.left = LVar4;
  local_10.top = LVar2;
  local_10.right = LVar1;
  local_10.bottom = LVar3;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_1,color);
  return;
}


