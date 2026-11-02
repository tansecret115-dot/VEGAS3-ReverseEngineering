/* Module: Setup.exe
   Function: AddEntryToArchive
   Address: 0040ac10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::AddEntryToArchive(char const *,unsigned long,unsigned
   long,unsigned long,char const *) */

long CArchive2::AddEntryToArchive
               (char *param_1,ulong param_2,ulong param_3,ulong param_4,char *param_5)

{
  bool bVar1;
  long lVar2;
  DWORD DVar3;
  undefined3 extraout_var;
  int iVar4;
  uchar *in_stack_00000018;
  long local_314;
  long local_310;
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
                    /* 0xac10  4  ?AddEntryToArchive@CArchive2@@QAGJPBDKKK0@Z */
  iVar4 = 0;
  *(char **)(param_1 + 0x884) = param_5;
  if ((*(int *)(param_1 + 0x24) != 1) && (*(int *)(param_1 + 0x24) != 3)) {
    lVar2 = IsSpaceForAddEntry(param_1,param_2);
    if (lVar2 == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_314 = lVar2;
        local_310 = lVar2;
        MultiByteToWideChar(0,1,(LPCSTR)param_2,-1,local_208,0x104);
        local_2 = 0;
        if ((param_1[0x884] & 2U) == 0) {
          iVar4 = GetSizeAddEntry(param_1,(__int64 *)param_2,(ulong)&local_314);
          (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_208,local_314,local_310);
        }
        else {
          FUN_0041d0f0(*(void **)(param_1 + 0x20),local_208);
        }
      }
      *(char **)(param_1 + 0x884) = param_5;
      *(ulong *)(param_1 + 0x28) = param_3;
      *(ulong *)(param_1 + 0x2c) = param_4;
      _SfGetPathNameFromFilePath_12((uchar *)param_2,local_30c,0x104);
      DVar3 = GetFileAttributesA((LPCSTR)param_2);
      if (((DVar3 == 0xffffffff) || ((DVar3 & 0x10) == 0)) || (in_stack_00000018 != (uchar *)0x0)) {
        bVar1 = _SfDoesFileExist_4((LPCSTR)param_2);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          if (in_stack_00000018 == (uchar *)0x0) {
            iVar4 = FUN_0040b500(param_1,(LPCSTR)param_2,local_30c);
          }
        }
        else {
          iVar4 = FUN_0040b0c0(param_1,(LPCSTR)param_2,(LPCSTR)local_30c,in_stack_00000018);
        }
      }
      else {
        iVar4 = FUN_0040c110(param_1,(uchar *)param_2,(LPCSTR)local_30c,0);
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
      return iVar4;
    }
    FUN_00410c30(param_1,0xaaaaaaa8,(uchar *)"AddEntryToArchive",(uchar *)0x0);
    return -0x7ffb1f38;
  }
  FUN_00410c30(param_1,0xaaaaaaa1,(uchar *)"AddEntryToArchive",(uchar *)0x0);
  return -0x7fffbffb;
}


