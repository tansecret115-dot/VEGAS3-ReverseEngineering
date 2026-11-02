/* Module: vegas30k.dll
   Function: ValidateEntry
   Address: 0106f4c0
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
  undefined1 local_66c [260];
  WCHAR local_568 [259];
  undefined2 local_362;
  undefined1 local_360 [84];
  undefined1 auStack_30c [780];
  
                    /* 0x6f4c0  587  ?ValidateEntry@CArchive2@@QAGJPBD@Z */
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 5)) {
    local_678 = 0;
    iVar1 = FUN_01069f40(in_stack_00000008,local_66c,&local_678);
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_674 = 0;
        local_670 = 0;
        MultiByteToWideChar(0,1,(LPCSTR)in_stack_00000008,-1,local_568,0x104);
        local_362 = 0;
        GetSizeExtractEntry(param_1,in_stack_00000008,(ulong)&local_674);
        (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_568,local_674,local_670);
      }
      iVar1 = FUN_01070bd0(local_360);
      while ((iVar1 == 0 &&
             (((iVar2 = FUN_0106a060(auStack_30c,local_66c,local_678), iVar2 == 0 ||
               (iVar1 = FUN_0106f6f0(local_360), local_678 != 0)) && (-1 < iVar1))))) {
        iVar1 = FUN_01070c90(local_360);
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
    }
    return iVar1;
  }
  return -0x7fffbffb;
}


