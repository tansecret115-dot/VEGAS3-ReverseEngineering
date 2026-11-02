/* Module: sfcdi.dll
   Function: cdtext_FillTOCINFO
   Address: 5bf10890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_FillTOCINFO(struct _sfcdtext *,struct _toc *) */

long cdtext_FillTOCINFO(_sfcdtext *param_1,_toc *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  _sfcdtext *p_Var4;
  uint uVar5;
  
                    /* 0x10890  212  ?cdtext_FillTOCINFO@@YGJPAU_sfcdtext@@PAU_toc@@@Z */
  uVar1 = FUN_5bf2bb90((int)param_2);
  uVar5 = 0;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x49c) = 1;
    puVar2 = (undefined4 *)FUN_5bf2bbb0((int)param_2,0);
    *(undefined4 *)(param_1 + 0x4a0) = *puVar2;
    puVar2 = (undefined4 *)FUN_5bf2bbb0((int)param_2,uVar1 - 1);
    *(undefined4 *)(param_1 + 0x4a4) = *puVar2;
    *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x1d8c);
    if (uVar1 != 0) {
      p_Var4 = param_1 + 0x4ac;
      do {
        iVar3 = FUN_5bf2bbb0((int)param_2,uVar5);
        uVar5 = uVar5 + 1;
        *(undefined4 *)p_Var4 = *(undefined4 *)(iVar3 + 0x14);
        p_Var4 = p_Var4 + 4;
      } while (uVar5 < uVar1);
      return 0;
    }
  }
  return 0;
}


