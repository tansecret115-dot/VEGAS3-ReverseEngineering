/* Module: Setup.exe
   Function: GetSizeAddEntry
   Address: 0040a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeAddEntry(char const *,__int64 &,unsigned long) */

long CArchive2::GetSizeAddEntry(char *param_1,__int64 *param_2,ulong param_3)

{
  bool bVar1;
  DWORD DVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint in_stack_00000010;
  __int64 *p_Var6;
  int local_20c;
  __int64 local_208 [32];
  uchar local_104 [260];
  
                    /* 0xa8c0  34  ?GetSizeAddEntry@CArchive2@@QAGJPBDAA_JK@Z */
  iVar4 = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  _SfGetPathNameFromFilePath_12((uchar *)param_2,local_104,0x104);
  DVar2 = GetFileAttributesA((LPCSTR)param_2);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
    bVar1 = _SfDoesFileExist_4((LPCSTR)param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar4 = FUN_0040a570(param_1,(uchar *)param_2,(uchar *)local_208,&local_20c);
      if ((iVar4 < 0) || (local_20c == 0)) {
        FUN_00410c30(param_1,0xaaaaaaac,(uchar *)"GetSizeAddEntry",(uchar *)0x0);
        return 1;
      }
      uVar3 = in_stack_00000010 & 1;
      p_Var6 = local_208;
      goto LAB_0040a932;
    }
  }
  else {
    _mbscpy((uchar *)local_208,(uchar *)param_2);
    _SfAddSlashToPathName_8((BYTE *)local_208,0x104);
    param_2 = local_208;
  }
  uVar3 = 0;
  p_Var6 = (__int64 *)0x0;
LAB_0040a932:
  lVar5 = FUN_0040c2a0((uchar *)param_2,(uchar *)p_Var6,uVar3,0);
  uVar3 = *(uint *)param_3;
  *(uint *)param_3 = uVar3 + (uint)lVar5;
  *(uint *)(param_3 + 4) =
       *(int *)(param_3 + 4) + (int)((ulonglong)lVar5 >> 0x20) + (uint)CARRY4(uVar3,(uint)lVar5);
  return iVar4;
}


