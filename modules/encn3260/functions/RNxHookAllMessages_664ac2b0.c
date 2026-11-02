/* Module: encn3260.dll
   Function: RNxHookAllMessages
   Address: 664ac2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664ac2f2) */
/* WARNING: Removing unreachable block (ram,0x664ac356) */
/* long __stdcall RNxHookAllMessages(int,unsigned int,long) */

long RNxHookAllMessages(int param_1,uint param_2,long param_3)

{
  long lParam;
  int iVar1;
  undefined4 *puVar2;
  LRESULT LVar3;
  int local_c;
  long local_8;
  
                    /* 0x2c2b0  8  ?RNxHookAllMessages@@YGJHIJ@Z */
  lParam = param_3;
  if (*(int *)(param_3 + 8) == 3) {
    iVar1 = FUN_664c3eb0(&DAT_664f0738,*(uint *)(param_3 + 0xc),&param_3);
    if (iVar1 != 0) {
      local_c = *(int *)(param_3 + 4);
      local_8 = param_3;
      while (local_c != 0) {
        puVar2 = (undefined4 *)FUN_664bab80(local_c);
        FUN_664ab050((void *)*puVar2,*(undefined4 *)(lParam + 0xc),*(int *)(lParam + 8));
        FUN_664bab40(&local_c);
      }
    }
  }
  else if ((*(int *)(param_3 + 8) == 0x7e) &&
          (iVar1 = FUN_664c3eb0(&DAT_664f0738,*(uint *)(param_3 + 0xc),&param_3), iVar1 != 0)) {
    local_c = *(int *)(param_3 + 4);
    local_8 = param_3;
    while (local_c != 0) {
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      FUN_664ac3a0((void *)*puVar2,(HDC)0x0);
      FUN_664bab40(&local_c);
    }
  }
  LVar3 = CallNextHookEx(DAT_664f07d8,param_1,param_2,lParam);
  return LVar3;
}


