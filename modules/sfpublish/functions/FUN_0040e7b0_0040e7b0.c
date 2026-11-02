/* Module: sfpublish.dll
   Function: FUN_0040e7b0
   Address: 0040e7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040e7b0(void *this,int param_1)

{
  int iVar1;
  tm *ptVar2;
  uchar *puVar3;
  HWND hWnd;
  undefined1 local_78 [6];
  short sStack_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uchar local_64 [100];
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else {
    iVar1 = **(int **)((int)this + 0x5c) + -1;
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
  }
  **(int **)((int)this + 0x60) = param_1;
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 8) + **(int **)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x58) = iVar1;
  iVar1 = FUN_00413370(iVar1);
  if (iVar1 != 0) {
    FUN_00413490(*(void **)((int)this + 0x58),(undefined4 *)local_78);
    stack0xffffff8c = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    ptVar2 = localtime((time_t *)local_78);
    local_70._2_2_ = (short)ptVar2->tm_mday;
    ptVar2 = localtime((time_t *)local_78);
    local_6c = CONCAT22(local_6c._2_2_,(short)ptVar2->tm_hour);
    ptVar2 = localtime((time_t *)local_78);
    local_6c = CONCAT22((short)ptVar2->tm_min,(undefined2)local_6c);
    ptVar2 = localtime((time_t *)local_78);
    sStack_72 = (short)ptVar2->tm_mon + 1;
    ptVar2 = localtime((time_t *)local_78);
    stack0xffffff8c = CONCAT22(sStack_72,(short)ptVar2->tm_year + 0x76c);
    ptVar2 = localtime((time_t *)local_78);
    local_70 = CONCAT22(local_70._2_2_,(short)ptVar2->tm_wday);
    local_64[0] = '\0';
    iVar1 = GetDateFormatA(0x800,1,(SYSTEMTIME *)(local_78 + 4),(LPCSTR)0x0,(LPSTR)local_64,100);
    if (iVar1 == 0) {
      puVar3 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x82);
      _mbscpy(local_64,puVar3);
    }
    puVar3 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x83);
    FUN_00419230(*(HWND *)((int)this + 4),0x40,puVar3);
  }
  FUN_00410f80(*(undefined4 **)((int)this + 0x58));
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),500);
  ShowWindow(hWnd,0);
  FUN_0040e6e0((int)this);
  return;
}


