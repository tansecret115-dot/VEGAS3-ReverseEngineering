/* Module: vegas30.exe
   Function: FUN_0043db40
   Address: 0043db40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0043db40(undefined4 param_1,uint param_2,HSFCD__ *param_3,undefined4 param_4,int param_5)

{
  tPARAMETERS_DEVDES *ptVar1;
  long lVar2;
  ulong uVar3;
  _track *p_Var4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int unaff_retaddr;
  LPCSTR in_stack_00001dbc;
  undefined4 *in_stack_00001dc0;
  
  FUN_0060ac30();
  puVar8 = in_stack_00001dc0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_4 = 0x80004005;
  param_5 = 0;
  *in_stack_00001dc0 = DAT_0064a8c8;
  in_stack_00001dc0[1] = 0;
  lstrcpynA((LPSTR)&param_1,in_stack_00001dbc,3);
  param_1._2_1_ = 0;
  iVar5 = FUN_0043da60(in_stack_00001dbc,&stack0x00000000);
  if (iVar5 == 0) {
    return 0x80004005;
  }
  in_stack_00001dc0[7] = unaff_retaddr - 1U;
  if (DAT_0064b57c == (uint *)0x0) {
    param_2 = 0;
  }
  else {
    param_2 = *DAT_0064b57c;
  }
  uVar7 = 0;
  puVar6 = DAT_0064b57c;
  if (param_2 != 0) {
    do {
      ptVar1 = *(tPARAMETERS_DEVDES **)(puVar6[2] + uVar7 * 4);
      if ((ptVar1 != (tPARAMETERS_DEVDES *)0x0) && (0 < *(int *)(ptVar1 + 0x1ac))) {
        SfPrintF(&stack0x00000018,&DAT_00611e6c,*(int *)(ptVar1 + 0x1ac) + 0x40);
        iVar5 = lstrcmpiA((LPCSTR)&param_1,&stack0x00000018);
        puVar6 = DAT_0064b57c;
        if (iVar5 == 0) {
          in_stack_00001dc0[2] = *(undefined4 *)(ptVar1 + 8);
          in_stack_00001dc0[3] = *(undefined4 *)(ptVar1 + 4);
          lVar2 = cdr_Open(ptVar1,&param_3);
          puVar6 = DAT_0064b57c;
          if (-1 < lVar2) {
            puVar8 = (undefined4 *)&stack0x00000028;
            for (iVar5 = 0x764; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            lVar2 = cdr_ReadTOC(param_3,(_toc *)&stack0x00000028,0x20,
                                (_func_int_void_ptr_uint_long *)0x0);
            if (-1 < lVar2) {
              uVar3 = sfcddb_DiscID((_toc *)&stack0x00000028);
              in_stack_00001dc0[6] = uVar3;
              p_Var4 = cdrtoc_GetTrack((_toc *)&stack0x00000028,unaff_retaddr - 1U);
              if (p_Var4 != (_track *)0x0) {
                param_5 = 1;
                in_stack_00001dc0[4] = *(undefined4 *)(p_Var4 + 0x14);
                in_stack_00001dc0[5] = *(undefined4 *)(p_Var4 + 0x18);
                param_4 = 0;
              }
            }
            cdr_Close(param_3);
            puVar6 = DAT_0064b57c;
            if (param_5 != 0) {
              return param_4;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  return param_4;
}


