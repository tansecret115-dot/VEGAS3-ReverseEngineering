/* Module: sfcdi.dll
   Function: FUN_5bf1c300
   Address: 5bf1c300
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf1c300(void)

{
  bool bVar1;
  HCURSOR pHVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  BYTE *pBVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack00000004;
  int in_stack_0000014e;
  HWND in_stack_00001ff4;
  HSFCD__ *in_stack_00001ff8;
  uint uVar8;
  
  FUN_5bf52dd0();
  uStack00000004 = FUN_5bf0d070((int)in_stack_00001ff8);
  while( true ) {
    pHVar2 = (HCURSOR)FUN_5bf37b40(0x7f02);
    pHVar2 = SetCursor(pHVar2);
    DVar3 = timeGetTime();
    puVar7 = (undefined4 *)&stack0x00000260;
    for (iVar6 = 0x764; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    iVar6 = cdr_ReadTOC(in_stack_00001ff8,(_toc *)&stack0x00000260,0xc020,
                        (_func_int_void_ptr_uint_long *)0x0);
    while (iVar6 < 0) {
      if (iVar6 == -0x7ffb1f37) {
        pBVar5 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x92a);
        goto LAB_5bf1c3fc;
      }
      cdr_GetErrorState(in_stack_00001ff8,(tCDR_ERRORDATA *)&stack0x00000108);
      if ((in_stack_0000014e != 0x7b) || (DVar4 = timeGetTime(), 19999 < DVar4 - DVar3)) {
        uVar8 = 0x92b;
        goto LAB_5bf1c3eb;
      }
      FUN_5bf2bd60((uint *)&stack0x0000026c);
      puVar7 = (undefined4 *)&stack0x00000260;
      for (iVar6 = 0x764; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar6 = cdr_ReadTOC(in_stack_00001ff8,(_toc *)&stack0x00000260,0xc020,
                          (_func_int_void_ptr_uint_long *)0x0);
    }
    bVar1 = FUN_5bf2bcc0((int)&stack0x00000260);
    if (CONCAT31(extraout_var,bVar1) != 0) break;
    uVar8 = 0x92c;
LAB_5bf1c3eb:
    pBVar5 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,uVar8);
LAB_5bf1c3fc:
    FUN_5bf25750(&stack0x00000008,pBVar5);
    FUN_5bf2bd60((uint *)&stack0x0000026c);
    if (pHVar2 != (HCURSOR)0x0) {
      SetCursor(pHVar2);
    }
    iVar6 = FUN_5bf25b40(in_stack_00001ff4,&stack0x00000008,PTR_s_Performance_Wizard_5bf64ed8,0x41);
    if (iVar6 == 2) {
LAB_5bf1c46b:
      FUN_5bf0d090((int)in_stack_00001ff8,uStack00000004);
      return iVar6;
    }
  }
  iVar6 = 1;
  goto LAB_5bf1c46b;
}


