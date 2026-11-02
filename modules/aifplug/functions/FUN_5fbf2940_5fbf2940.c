/* Module: aifplug.dll
   Function: FUN_5fbf2940
   Address: 5fbf2940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbf2940(LCID param_1,DWORD param_2,LPCSTR param_3,NUMBERFMTA *param_4,LPCSTR param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  param_4->NegativeOrder = 1;
  iVar2 = GetNumberFormatA(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar1 = DAT_5fc09ad8;
  iVar3 = DAT_5fc09ad8 + 1;
  FUN_5fbfd180();
  FUN_5fbfd180();
  lstrcpynA(&stack0xfffffff0,param_5,iVar3);
  (&stack0xfffffff0)[uVar1] = 0;
  (&stack0xfffffff0)[uVar1] = 0;
  lstrcpynA(&stack0xfffffff0,&DAT_5fc09ad0,iVar3);
  (&stack0xfffffff0)[uVar1] = 0;
  (&stack0xfffffff0)[uVar1] = 0;
  iVar3 = lstrcmpA(&stack0xfffffff0,&stack0xfffffff0);
  if (iVar3 == 0) {
    *param_5 = '-';
    if (1 < DAT_5fc09ad8) {
      memmove(param_5 + 1,param_5 + DAT_5fc09ad8,iVar2 - DAT_5fc09ad8);
    }
  }
  lstrlenA(param_5);
  return;
}


