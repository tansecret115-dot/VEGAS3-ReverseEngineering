/* Module: Setup.exe
   Function: ValidateEntry
   Address: 0040faf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::ValidateEntry(char const *) */

long CArchive2::ValidateEntry(char *param_1)

{
  int iVar1;
  int iVar2;
  __int64 *in_stack_00000008;
  int local_678;
  undefined4 local_674;
  undefined4 local_670;
  uchar local_66c [260];
  WCHAR local_568 [259];
  undefined2 local_362;
  int local_360 [21];
  CHAR aCStack_30c [780];
  
                    /* 0xfaf0  67  ?ValidateEntry@CArchive2@@QAGJPBD@Z */
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 5)) {
    local_678 = 0;
    iVar1 = FUN_0040a570(param_1,(uchar *)in_stack_00000008,local_66c,&local_678);
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_674 = 0;
        local_670 = 0;
        MultiByteToWideChar(0,1,(LPCSTR)in_stack_00000008,-1,local_568,0x104);
        local_362 = 0;
        GetSizeExtractEntry(param_1,in_stack_00000008,(ulong)&local_674);
        (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_568,local_674,local_670);
      }
      iVar1 = FUN_00411200(param_1,local_360);
      while ((iVar1 == 0 &&
             (((iVar2 = FUN_0040a690(aCStack_30c,(LPCSTR)local_66c,local_678), iVar2 == 0 ||
               (iVar1 = FUN_0040fd20(param_1,(int)local_360), local_678 != 0)) && (-1 < iVar1))))) {
        iVar1 = FUN_004112c0(param_1,local_360);
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
    }
    return iVar1;
  }
  return -0x7fffbffb;
}


