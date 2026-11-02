/* Module: sfcdi.dll
   Function: FUN_5bf0d390
   Address: 5bf0d390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5bf0d551) */

long FUN_5bf0d390(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,int *param_6)

{
  bool bVar1;
  long lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  uint uVar5;
  HGLOBAL hMem;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_EBP;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uStack00000028;
  int in_stack_000001ba;
  undefined4 *in_stack_00002060;
  
  FUN_5bf52dd0();
  puVar11 = &stack0x00000028;
  for (iVar7 = 0x53; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *in_stack_00002060;
    in_stack_00002060 = in_stack_00002060 + 1;
    puVar11 = puVar11 + 1;
  }
  uStack00000028 = cdr_FindInterface("Generic CD-ROM");
  lVar2 = cdr_Open((tPARAMETERS_DEVDES *)&stack0x00000028,(HSFCD__ **)&stack0x00000000);
  if (-1 < lVar2) {
    param_1 = 1;
    do {
      uVar5 = param_1;
      cdr_SetReadMethod((HSFCD__ *)0x0,param_1);
      DVar3 = timeGetTime();
      while (lVar2 = cdr_ReadTOC((HSFCD__ *)0x0,(_toc *)&stack0x000002cc,0x20,
                                 (_func_int_void_ptr_uint_long *)0x0), lVar2 != 0) {
        cdr_GetErrorState((HSFCD__ *)0x0,(tCDR_ERRORDATA *)&stack0x00000174);
        if (((in_stack_000001ba != 0x7b) && (in_stack_000001ba != 0x78)) ||
           (DVar4 = timeGetTime(), DVar3 + 30000 < DVar4)) {
          if (lVar2 < 0) goto LAB_5bf0d53a;
          break;
        }
        FUN_5bf2bd60((uint *)&stack0x000002d8);
      }
      bVar1 = FUN_5bf2bcc0((int)&stack0x000002cc);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        uVar5 = FUN_5bf2bb90((int)&stack0x000002cc);
        uVar9 = 0;
        if (uVar5 != 0) {
LAB_5bf0d48b:
          iVar7 = FUN_5bf2bbb0((int)&stack0x000002cc,uVar9);
          if ((iVar7 == 0) || ((*(uint *)(iVar7 + 8) & 4) != 0)) goto LAB_5bf0d4a9;
          hMem = GlobalAlloc(0x40,0x28);
          piVar6 = GlobalLock(hMem);
          piVar10 = (int *)0x0;
          if (piVar6 != (int *)0x0) {
            piVar6[1] = 0;
            *piVar6 = (int)&PTR_LAB_5bf556b8;
            piVar10 = piVar6;
          }
          (**(code **)(*piVar10 + 4))();
          puVar11 = (undefined4 *)register0x00000010;
          for (iVar8 = 8; puVar11 = puVar11 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = 0;
          }
          param_3 = *(undefined4 *)(iVar7 + 0x14);
          param_1 = 2;
          param_4 = 0xe1;
          if (*(uint *)(iVar7 + 0x18) < 0xe2) {
            param_4 = *(uint *)(iVar7 + 0x18);
          }
          param_2 = unaff_EBP;
          param_6 = piVar10;
          lVar2 = cdr_ReadAudio((cdreadaudiotag *)&param_1);
          (**(code **)(*piVar10 + 8))();
        }
      }
LAB_5bf0d529:
      FUN_5bf2bd60((uint *)&stack0x000002d8);
      uVar5 = param_1;
LAB_5bf0d53a:
      param_1 = uVar5 + 1;
    } while (param_1 < 9);
  }
  return lVar2;
LAB_5bf0d4a9:
  uVar9 = uVar9 + 1;
  if (uVar5 <= uVar9) goto LAB_5bf0d529;
  goto LAB_5bf0d48b;
}


