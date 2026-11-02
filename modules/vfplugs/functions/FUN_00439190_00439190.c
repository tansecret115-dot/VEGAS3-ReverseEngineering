/* Module: vfplugs.dll
   Function: FUN_00439190
   Address: 00439190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439190(LCID param_1,DWORD param_2,LPCSTR param_3,NUMBERFMTA *param_4,LPCSTR param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  param_4->NegativeOrder = 1;
  iVar2 = GetNumberFormatA(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar1 = DAT_00494c40;
  iVar3 = DAT_00494c40 + 1;
  FUN_00481790();
  FUN_00481790();
  lstrcpynA(&stack0xfffffff0,param_5,iVar3);
  (&stack0xfffffff0)[uVar1] = 0;
  (&stack0xfffffff0)[uVar1] = 0;
  lstrcpynA(&stack0xfffffff0,&DAT_00494c38,iVar3);
  (&stack0xfffffff0)[uVar1] = 0;
  (&stack0xfffffff0)[uVar1] = 0;
  iVar3 = lstrcmpA(&stack0xfffffff0,&stack0xfffffff0);
  if (iVar3 == 0) {
    *param_5 = '-';
    if (1 < DAT_00494c40) {
      memmove(param_5 + 1,param_5 + DAT_00494c40,iVar2 - DAT_00494c40);
    }
  }
  lstrlenA(param_5);
  return;
}


