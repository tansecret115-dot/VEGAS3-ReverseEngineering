/* Module: vegas30.exe
   Function: FUN_004d2520
   Address: 004d2520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2520(HDC param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,LONG param_8,int param_9,double param_10
                 ,undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  DWORD DVar4;
  uint uVar5;
  UINT c;
  undefined4 uVar6;
  int x;
  UINT UVar7;
  CHAR *pCVar8;
  undefined1 *puVar9;
  int nIndex;
  RECT local_120;
  int local_110;
  undefined1 local_10c [4];
  int local_108;
  CHAR local_104 [260];
  
  DVar4 = GetSysColor(0x10);
  SetBkColor(param_1,DVar4);
  local_120.left = param_6;
  local_120.right = param_6 + 1;
  local_120.top = param_7;
  local_120.bottom = param_9;
  ExtTextOutA(param_1,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
  param_6 = param_6 + 1;
  local_120.top = param_7;
  local_120.bottom = param_7 + 1;
  local_120.right = param_8;
  local_120.left = param_6;
  ExtTextOutA(param_1,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
  param_7 = param_7 + 1;
  GetSysColor(0xf);
  if (_DAT_00610fd8 < param_10) {
    ftol();
    ftol();
    ftol();
  }
  uVar2 = ftol();
  uVar3 = ftol();
  uVar5 = ftol();
  SetBkColor(param_1,(uint)CONCAT11(uVar2,uVar3) << 8 | uVar5 & 0xff);
  local_120.top = param_7;
  local_120.left = param_6;
  local_120.right = param_8;
  local_120.bottom = param_9;
  ExtTextOutA(param_1,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
  FUN_005bea00(param_4,param_5,local_104,0x104,&local_110);
  c = lstrlenA(local_104);
  puVar9 = local_10c;
  pCVar8 = local_104;
  UVar7 = c;
  uVar6 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar6,pCVar8,UVar7,puVar9);
  x = param_6 + 1;
  iVar1 = param_7 + param_9;
  if (local_110 == 0) {
    nIndex = 0x11;
  }
  else {
    nIndex = 0x12;
  }
  DVar4 = GetSysColor(nIndex);
  SetTextColor(param_1,DVar4);
  UVar7 = SetTextAlign(param_1,8);
  ExtTextOutA(param_1,x,iVar1 / 2 + local_108 / 2,4,(RECT *)&param_6,local_104,c,(INT *)0x0);
  SetTextAlign(param_1,UVar7);
  return;
}


