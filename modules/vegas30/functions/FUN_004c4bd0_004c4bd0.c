/* Module: vegas30.exe
   Function: FUN_004c4bd0
   Address: 004c4bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c4bd0(HDC param_1,RECT *param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD DVar1;
  HGDIOBJ pvVar2;
  UINT align;
  UINT UVar3;
  CHAR local_50 [80];
  
  DVar1 = GetSysColor(0xf);
  SetBkColor(param_1,DVar1);
  DVar1 = GetSysColor(0x12);
  SetTextColor(param_1,DVar1);
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
  pvVar2 = SelectObject(param_1,pvVar2);
  align = SetTextAlign(param_1,0);
  UVar3 = FUN_004c4980(param_3,param_4,local_50);
  ExtTextOutA(param_1,param_2->left,param_2->top,4,param_2,local_50,UVar3,(INT *)0x0);
  SetTextAlign(param_1,2);
  UVar3 = FUN_004c4530(param_3,param_4,local_50);
  ExtTextOutA(param_1,param_2->right,param_2->top,4,param_2,local_50,UVar3,(INT *)0x0);
  SelectObject(param_1,pvVar2);
  SetTextAlign(param_1,align);
  return;
}


