/* Module: sfnetmedia.dll
   Function: FUN_0040dae0
   Address: 0040dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040dae0(int param_1)

{
  tm *ptVar1;
  int iVar2;
  uchar *puVar3;
  undefined1 local_78 [6];
  short sStack_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uchar local_64 [100];
  
  FUN_00410370(*(void **)(param_1 + 0x70),(undefined4 *)local_78);
  stack0xffffff8c = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  ptVar1 = localtime((time_t *)local_78);
  local_70._2_2_ = (short)ptVar1->tm_mday;
  ptVar1 = localtime((time_t *)local_78);
  local_6c = CONCAT22(local_6c._2_2_,(short)ptVar1->tm_hour);
  ptVar1 = localtime((time_t *)local_78);
  local_6c = CONCAT22((short)ptVar1->tm_min,(undefined2)local_6c);
  ptVar1 = localtime((time_t *)local_78);
  sStack_72 = (short)ptVar1->tm_mon + 1;
  ptVar1 = localtime((time_t *)local_78);
  stack0xffffff8c = CONCAT22(sStack_72,(short)ptVar1->tm_year + 0x76c);
  ptVar1 = localtime((time_t *)local_78);
  local_70 = CONCAT22(local_70._2_2_,(short)ptVar1->tm_wday);
  local_64[0] = '\0';
  iVar2 = GetDateFormatA(0x800,1,(SYSTEMTIME *)(local_78 + 4),(LPCSTR)0x0,(LPSTR)local_64,100);
  if (iVar2 == 0) {
    puVar3 = (uchar *)FUN_00418380(DAT_0044172c,0x81);
    _mbscpy(local_64,puVar3);
  }
  puVar3 = (uchar *)FUN_00418380(DAT_0044172c,0x86);
  FUN_00415bc0(*(HWND *)(param_1 + 4),0x40,puVar3);
  return;
}


