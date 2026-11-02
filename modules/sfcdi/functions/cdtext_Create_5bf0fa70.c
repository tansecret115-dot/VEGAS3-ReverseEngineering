/* Module: sfcdi.dll
   Function: cdtext_Create
   Address: 5bf0fa70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_Create(struct _sfcdtext *) */

long cdtext_Create(_sfcdtext *param_1)

{
  uint uVar1;
  int iVar2;
  _sfcdtext *p_Var3;
  
  p_Var3 = param_1;
                    /* 0xfa70  209  ?cdtext_Create@@YGJPAU_sfcdtext@@@Z */
  for (iVar2 = 0x1c7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = p_Var3 + 4;
  }
  uVar1 = FUN_5bf2b110((int *)(param_1 + 0x498),4,-1,-1,0x40000002);
  return uVar1 & (-1 < (int)uVar1) - 1;
}


