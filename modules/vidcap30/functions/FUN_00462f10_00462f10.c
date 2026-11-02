/* Module: vidcap30.exe
   Function: FUN_00462f10
   Address: 00462f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00462f10(HDC param_1,int *param_2,int param_3,int *param_4)

{
  BOOL BVar1;
  UINT c;
  int iVar2;
  int iVar3;
  INT *lpDx;
  int local_168;
  tagRECT local_164;
  UINT local_154;
  int local_150;
  RECT local_14c;
  tagTEXTMETRICA local_13c;
  CHAR local_104 [260];
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  if ((param_3 < 0) || (iVar2 + -1 < param_3)) {
    local_168 = 0;
  }
  else {
    local_168 = *(int *)(param_2[2] + param_3 * 4);
  }
  if (local_168 != 0) {
    local_164.left = *param_4;
    local_164.top = param_4[1];
    local_164.right = param_4[2];
    local_164.bottom = param_4[3];
    InflateRect(&local_164,-4,-3);
    local_164.right = local_164.left + 3;
    DrawEdge(param_1,&local_164,4,0xf);
    iVar2 = *param_4;
    iVar3 = 2;
    local_14c.left = *param_4;
    local_14c.top = param_4[1];
    local_14c.right = param_4[2];
    local_14c.bottom = param_4[3];
    BVar1 = GetTextMetricsA(param_1,&local_13c);
    if (BVar1 != 0) {
      iVar3 = ((param_4[3] - param_4[1]) - local_13c.tmHeight) / 2;
    }
    local_154 = SetTextAlign(param_1,0);
    local_150 = SetBkMode(param_1,1);
    _SfLoadString_16(DAT_005ba2a0,*(undefined4 *)(local_168 + 4),local_104,0x104);
    lpDx = (INT *)0x0;
    c = lstrlenA(local_104);
    ExtTextOutA(param_1,iVar2 + 10,param_4[1] + iVar3,4,&local_14c,local_104,c,lpDx);
    SetBkMode(param_1,local_150);
    SetTextAlign(param_1,local_154);
  }
  return;
}


