/* Module: Setup.exe
   Function: ValidateEntry
   Address: 0040fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::ValidateEntry(int) */

long CArchive2::ValidateEntry(int param_1)

{
  long lVar1;
  int iVar2;
  int in_stack_00000008;
  undefined4 local_570;
  undefined4 local_56c;
  WCHAR local_568 [259];
  undefined2 local_362;
  int local_360 [21];
  __int64 local_30c [97];
  
                    /* 0xfc30  66  ?ValidateEntry@CArchive2@@QAGJH@Z */
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 5)) &&
     (-1 < in_stack_00000008)) {
    lVar1 = GetArchiveCount();
    if (in_stack_00000008 < lVar1) {
      iVar2 = FUN_004113d0((void *)param_1,in_stack_00000008,local_360);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x20) != 0) {
          local_570 = 0;
          local_56c = 0;
          MultiByteToWideChar(0,1,(LPCSTR)local_30c,-1,local_568,0x104);
          local_362 = 0;
          GetSizeExtractEntry((char *)param_1,local_30c,(ulong)&local_570);
          (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_568,local_570,local_56c);
        }
        FUN_0040fd20((void *)param_1,(int)local_360);
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
      }
    }
  }
  return 0;
}


