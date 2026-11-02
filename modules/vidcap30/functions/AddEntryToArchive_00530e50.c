/* Module: vidcap30.exe
   Function: AddEntryToArchive
   Address: 00530e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::AddEntryToArchive(char const *,unsigned long,unsigned
   long,unsigned long,char const *) */

long CArchive2::AddEntryToArchive
               (char *param_1,ulong param_2,ulong param_3,ulong param_4,char *param_5)

{
  long lVar1;
  DWORD DVar2;
  int iVar3;
  long lVar4;
  int in_stack_00000018;
  long local_314;
  long local_310;
  undefined1 local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
                    /* 0x130e50  4  ?AddEntryToArchive@CArchive2@@QAGJPBDKKK0@Z */
  lVar4 = 0;
  *(char **)(param_1 + 0x884) = param_5;
  if ((*(int *)(param_1 + 0x24) != 1) && (*(int *)(param_1 + 0x24) != 3)) {
    lVar1 = IsSpaceForAddEntry(param_1,param_2);
    if (lVar1 == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_314 = lVar1;
        local_310 = lVar1;
        MultiByteToWideChar(0,1,(LPCSTR)param_2,-1,local_208,0x104);
        local_2 = 0;
        if ((param_1[0x884] & 2U) == 0) {
          lVar4 = GetSizeAddEntry(param_1,(__int64 *)param_2,(ulong)&local_314);
          (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_208,local_314,local_310);
        }
        else {
          FUN_00555170(local_208);
        }
      }
      *(char **)(param_1 + 0x884) = param_5;
      *(ulong *)(param_1 + 0x28) = param_3;
      *(ulong *)(param_1 + 0x2c) = param_4;
      _SfGetPathNameFromFilePath_12(param_2,local_30c,0x104);
      DVar2 = GetFileAttributesA((LPCSTR)param_2);
      if (((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) || (in_stack_00000018 != 0)) {
        iVar3 = _SfDoesFileExist_4(param_2);
        if (iVar3 == 0) {
          if (in_stack_00000018 == 0) {
            lVar4 = FUN_00531740(param_2,local_30c);
          }
        }
        else {
          lVar4 = FUN_00531300(param_2,local_30c,in_stack_00000018);
        }
      }
      else {
        lVar4 = FUN_00532350(param_2,local_30c,0);
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
      return lVar4;
    }
    FUN_00536e70(0xaaaaaaa8,"AddEntryToArchive",0);
    return -0x7ffb1f38;
  }
  FUN_00536e70(0xaaaaaaa1,"AddEntryToArchive",0);
  return -0x7fffbffb;
}


