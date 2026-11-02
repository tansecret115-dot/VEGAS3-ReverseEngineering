/* Module: vegas30k.dll
   Function: GetCountAddEntry
   Address: 0106a3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetCountAddEntry(char const *,long &,unsigned long) */

long CArchive2::GetCountAddEntry(char *param_1,long *param_2,ulong param_3)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_stack_00000010;
  long *plVar5;
  int local_20c;
  long local_208 [65];
  undefined1 local_104 [260];
  
                    /* 0x6a3a0  78  ?GetCountAddEntry@CArchive2@@QAGJPBDAAJK@Z */
  iVar4 = 0;
  *(undefined4 *)param_3 = 0;
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  DVar1 = GetFileAttributesA((LPCSTR)param_2);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    iVar2 = _SfDoesFileExist_4(param_2);
    if (iVar2 == 0) {
      iVar4 = FUN_01069f40(param_2,local_208,&local_20c);
      if ((iVar4 < 0) || (local_20c == 0)) {
        FUN_01070600(0xaaaaaaac,"GetSizeAddEntry",0);
        return 1;
      }
      uVar3 = in_stack_00000010 & 1;
      plVar5 = local_208;
      goto LAB_0106a40f;
    }
  }
  else {
    _mbscpy((uchar *)local_208,(uchar *)param_2);
    _SfAddSlashToPathName_8(local_208,0x104);
    param_2 = local_208;
  }
  uVar3 = 0;
  plVar5 = (long *)0x0;
LAB_0106a40f:
  iVar2 = FUN_0106bef0(param_2,plVar5,uVar3,0);
  *(int *)param_3 = *(int *)param_3 + iVar2;
  return iVar4;
}


