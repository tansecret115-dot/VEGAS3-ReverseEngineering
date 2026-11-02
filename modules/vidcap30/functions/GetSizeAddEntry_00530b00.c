/* Module: vidcap30.exe
   Function: GetSizeAddEntry
   Address: 00530b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeAddEntry(char const *,__int64 &,unsigned long) */

long CArchive2::GetSizeAddEntry(char *param_1,__int64 *param_2,ulong param_3)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint in_stack_00000010;
  __int64 *p_Var6;
  int local_20c;
  __int64 local_208 [32];
  undefined1 local_104 [260];
  
                    /* 0x130b00  38  ?GetSizeAddEntry@CArchive2@@QAGJPBDAA_JK@Z */
  iVar4 = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  DVar1 = GetFileAttributesA((LPCSTR)param_2);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    iVar2 = _SfDoesFileExist_4(param_2);
    if (iVar2 == 0) {
      iVar4 = FUN_005307b0(param_2,local_208,&local_20c);
      if ((iVar4 < 0) || (local_20c == 0)) {
        FUN_00536e70(0xaaaaaaac,"GetSizeAddEntry",0);
        return 1;
      }
      uVar3 = in_stack_00000010 & 1;
      p_Var6 = local_208;
      goto LAB_00530b72;
    }
  }
  else {
    _mbscpy((uchar *)local_208,(uchar *)param_2);
    _SfAddSlashToPathName_8(local_208,0x104);
    param_2 = local_208;
  }
  uVar3 = 0;
  p_Var6 = (__int64 *)0x0;
LAB_00530b72:
  uVar5 = FUN_005324e0(param_2,p_Var6,uVar3,0);
  uVar3 = *(uint *)param_3;
  *(uint *)param_3 = uVar3 + (uint)uVar5;
  *(uint *)(param_3 + 4) =
       *(int *)(param_3 + 4) + (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar3,(uint)uVar5);
  return iVar4;
}


