/* Module: encn3260.dll
   Function: FUN_664d0530
   Address: 664d0530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d0530(void *this,byte *param_1,void *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  int iVar4;
  undefined3 extraout_var_11;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_8;
  
  uVar5 = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar2 != 0);
  local_8 = (uint)this & 0xff000000;
  pbVar3 = operator_new((~uVar5 - 1) * 3);
  bVar2 = *param_1;
  pbVar6 = pbVar3;
  do {
    if (bVar2 == 0) {
      *pbVar6 = 0;
      FUN_664bb5e0(param_2,(char *)pbVar3);
      operator_delete(pbVar3);
      return 0;
    }
    if ((((((char)*param_1 < ' ') || ('~' < (char)*param_1)) ||
         (bVar1 = FUN_664d1c90((LPCSTR)param_1,' '), CONCAT31(extraout_var,bVar1) != 0)) ||
        ((((bVar1 = FUN_664d1c90((LPCSTR)param_1,'{'), CONCAT31(extraout_var_00,bVar1) != 0 ||
           (bVar1 = FUN_664d1c90((LPCSTR)param_1,'}'), CONCAT31(extraout_var_01,bVar1) != 0)) ||
          ((bVar1 = FUN_664d1c90((LPCSTR)param_1,'|'), CONCAT31(extraout_var_02,bVar1) != 0 ||
           ((bVar1 = FUN_664d1c90((LPCSTR)param_1,'\\'), CONCAT31(extraout_var_03,bVar1) != 0 ||
            (bVar1 = FUN_664d1c90((LPCSTR)param_1,'^'), CONCAT31(extraout_var_04,bVar1) != 0))))))
         || (bVar1 = FUN_664d1c90((LPCSTR)param_1,'~'), CONCAT31(extraout_var_05,bVar1) != 0)))) ||
       ((((bVar1 = FUN_664d1c90((LPCSTR)param_1,'['), CONCAT31(extraout_var_06,bVar1) != 0 ||
          (bVar1 = FUN_664d1c90((LPCSTR)param_1,']'), CONCAT31(extraout_var_07,bVar1) != 0)) ||
         (bVar1 = FUN_664d1c90((LPCSTR)param_1,'`'), CONCAT31(extraout_var_08,bVar1) != 0)) ||
        ((bVar1 = FUN_664d1c90((LPCSTR)param_1,','), CONCAT31(extraout_var_09,bVar1) != 0 ||
         (bVar1 = FUN_664d1c90((LPCSTR)param_1,';'), CONCAT31(extraout_var_10,bVar1) != 0)))))) {
      iVar4 = sprintf((char *)&local_8,&DAT_664ef910,(uint)*param_1);
      *pbVar6 = 0x25;
      pbVar6[1] = (byte)local_8;
      pbVar6[2] = local_8._1_1_;
      pbVar7 = pbVar6 + 3;
      bVar2 = FUN_664d1e50(CONCAT31((int3)((uint)iVar4 >> 8),*param_1));
      if (CONCAT31(extraout_var_11,bVar2) != 0) {
        sprintf((char *)&local_8,&DAT_664ef910,(uint)param_1[1]);
        *pbVar7 = 0x25;
        pbVar6[4] = (byte)local_8;
        pbVar6 = pbVar6 + 5;
        bVar2 = local_8._1_1_;
        goto LAB_664d069c;
      }
    }
    else {
      bVar2 = *param_1;
LAB_664d069c:
      *pbVar6 = bVar2;
      pbVar7 = pbVar6 + 1;
    }
    param_1 = (byte *)FUN_664d1c60((LPCSTR)param_1);
    bVar2 = *param_1;
    pbVar6 = pbVar7;
  } while( true );
}


