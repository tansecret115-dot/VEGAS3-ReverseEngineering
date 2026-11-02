/* Module: sfcdi.dll
   Function: cdtext_FillHash
   Address: 5bf13cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_FillHash(struct _sfcdtext *,struct _toc *) */

long cdtext_FillHash(_sfcdtext *param_1,_toc *param_2)

{
  ulong uVar1;
  int iVar2;
  _sfcdtext *p_Var3;
  
  p_Var3 = param_1;
                    /* 0x13cd0  211  ?cdtext_FillHash@@YGJPAU_sfcdtext@@PAU_toc@@@Z */
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = p_Var3 + 4;
  }
  *(undefined4 *)param_1 = 0x18;
  uVar1 = cddb_DiscID(param_2);
  *(ulong *)(param_1 + 4) = uVar1;
  uVar1 = sfcddb_DiscID(param_2);
  *(ulong *)(param_1 + 0xc) = uVar1;
  uVar1 = cdpi_DiscID(param_2);
  *(ulong *)(param_1 + 0x14) = uVar1;
  return 0;
}


