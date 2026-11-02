/* Module: Setup.exe
   Function: GetCountAddEntry
   Address: 0040a9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetCountAddEntry(char const *,long &,unsigned long) */

long CArchive2::GetCountAddEntry(char *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  uint in_stack_00000010;
  long *plVar6;
  int local_20c;
  long local_208 [65];
  uchar local_104 [260];
  
                    /* 0xa9d0  16  ?GetCountAddEntry@CArchive2@@QAGJPBDAAJK@Z */
  iVar5 = 0;
  *(undefined4 *)param_3 = 0;
  _SfGetPathNameFromFilePath_12((uchar *)param_2,local_104,0x104);
  DVar2 = GetFileAttributesA((LPCSTR)param_2);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
    bVar1 = _SfDoesFileExist_4((LPCSTR)param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar5 = FUN_0040a570(param_1,(uchar *)param_2,(uchar *)local_208,&local_20c);
      if ((iVar5 < 0) || (local_20c == 0)) {
        FUN_00410c30(param_1,0xaaaaaaac,(uchar *)"GetSizeAddEntry",(uchar *)0x0);
        return 1;
      }
      uVar4 = in_stack_00000010 & 1;
      plVar6 = local_208;
      goto LAB_0040aa3f;
    }
  }
  else {
    _mbscpy((uchar *)local_208,(uchar *)param_2);
    _SfAddSlashToPathName_8((BYTE *)local_208,0x104);
    param_2 = local_208;
  }
  uVar4 = 0;
  plVar6 = (long *)0x0;
LAB_0040aa3f:
  iVar3 = FUN_0040c520((uchar *)param_2,(uchar *)plVar6,uVar4,0);
  *(int *)param_3 = *(int *)param_3 + iVar3;
  return iVar5;
}


