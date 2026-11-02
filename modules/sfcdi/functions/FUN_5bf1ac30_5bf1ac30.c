/* Module: sfcdi.dll
   Function: FUN_5bf1ac30
   Address: 5bf1ac30
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5bf1ac30(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,undefined4 param_6,int *param_7)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined3 extraout_var;
  int iVar4;
  HGLOBAL hMem;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined4 unaff_EBX;
  int *piVar8;
  uint *puVar9;
  HSFCD__ *pHVar10;
  undefined4 uStack00000034;
  uint in_stack_00000068;
  tPARAMETERS_DEVDES *in_stack_00001eac;
  uchar *in_stack_00001eb0;
  char *pcVar11;
  
  FUN_5bf52dd0();
  _mbscpy(in_stack_00001eb0,(uchar *)"0Start");
  if ((*(uint *)(in_stack_00001eac + 0x1a0) & 0x2000) != 0) {
    uVar2 = cdr_FindInterface("CD Performance");
    *(uint *)in_stack_00001eac = uVar2;
  }
  pHVar10 = (HSFCD__ *)0x0;
  lVar3 = cdr_Open(in_stack_00001eac,(HSFCD__ **)&stack0x00000000);
  if (lVar3 < 0) {
    FUN_5bf25750(&stack0x00000098,(BYTE *)"G=0x%xR=0x%xW=0x%x");
    FUN_5bf25750(in_stack_00001eb0,(BYTE *)"1Open=%x");
    _mbscat(in_stack_00001eb0,&stack0x00000098);
    if ((*(uint *)(in_stack_00001eac + 0x1a0) & 0x2000) != 0) {
      *(undefined4 *)in_stack_00001eac = 0xffffffff;
    }
    return lVar3;
  }
  cdr_SetTestCapsMode((HSFCD__ *)0x0,1);
  lVar3 = cdr_ReadTOC((HSFCD__ *)0x0,(_toc *)&stack0x00000118,0x20,
                      (_func_int_void_ptr_uint_long *)0x0);
  if (lVar3 < 0) {
    if (lVar3 != -0x7ffb1f37) {
      FUN_5bf25750(in_stack_00001eb0,(BYTE *)"3ReadTOC=%x");
      goto LAB_5bf1ae66;
    }
    pcVar11 = "2NoDisc";
  }
  else {
    bVar1 = FUN_5bf2bcc0((int)&stack0x00000118);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = FUN_5bf2bb90((int)&stack0x00000118);
      uVar2 = 0;
      if (param_2 != 0) {
        do {
          iVar4 = FUN_5bf2bbb0((int)&stack0x00000118,uVar2);
          if ((iVar4 != 0) && ((*(uint *)(iVar4 + 8) & 4) == 0)) {
            hMem = GlobalAlloc(0x40,0xc);
            piVar5 = GlobalLock(hMem);
            piVar8 = (int *)0x0;
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0;
              *piVar5 = (int)&PTR_LAB_5bf562f4;
              piVar8 = piVar5;
            }
            (**(code **)(*piVar8 + 4))(piVar8);
            puVar9 = &param_2;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            param_4 = *(undefined4 *)(iVar4 + 0x14);
            param_2 = 2;
            param_5 = 0x10;
            if (*(uint *)(iVar4 + 0x18) < 0x11) {
              param_5 = *(uint *)(iVar4 + 0x18);
            }
            param_3 = unaff_EBX;
            param_7 = piVar8;
            pHVar10 = (HSFCD__ *)cdr_ReadAudio((cdreadaudiotag *)&param_2);
            (**(code **)(*piVar8 + 8))(piVar8);
            if ((int)pHVar10 < 0) {
              pcVar11 = "5Read=%x";
            }
            else {
              pcVar11 = "6ReadGood";
            }
            FUN_5bf25750(in_stack_00001eb0,(BYTE *)pcVar11);
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_2);
      }
      goto LAB_5bf1ae66;
    }
    pcVar11 = "4DataDisc";
  }
  FUN_5bf25750(in_stack_00001eb0,(BYTE *)pcVar11);
LAB_5bf1ae66:
  FUN_5bf2bd60((uint *)&stack0x00000124);
  uStack00000034 = 100;
  lVar6 = cdr_GetDeviceCaps(pHVar10,(cdrcaps_tag *)&stack0x00000034);
  if (-1 < lVar6) {
    *(uint *)(in_stack_00001eac + 0x1a0) = *(uint *)(in_stack_00001eac + 0x1a0) | in_stack_00000068;
    FUN_5bf25750(&stack0x00000098,(BYTE *)"G=0x%xR=0x%xW=0x%x");
    _mbscat(in_stack_00001eb0,&stack0x00000098);
  }
  if (pHVar10 != (HSFCD__ *)0x0) {
    cdr_GetTestCapsResults(pHVar10);
    FUN_5bf25750((uchar *)&param_3,(BYTE *)"T=0x%x");
    _mbscat(in_stack_00001eb0,(uchar *)&param_3);
    cdr_Close(pHVar10);
  }
  if ((*(uint *)(in_stack_00001eac + 0x1a0) & 0x2000) != 0) {
    *(undefined4 *)in_stack_00001eac = 0xffffffff;
  }
  return lVar3;
}


