/* Module: vegas30.exe
   Function: FUN_0043ca20
   Address: 0043ca20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043ca20(short *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int *unaff_EBP;
  int *piVar5;
  int *local_294;
  int local_290;
  uint local_28c;
  undefined2 local_288 [2];
  undefined4 local_284;
  undefined1 local_280 [4];
  int local_27c [4];
  uint uStack_26c;
  undefined4 uStack_268;
  undefined4 local_260;
  int local_25c;
  undefined4 local_254;
  undefined4 local_24c;
  int iStack_248;
  undefined4 uStack_244;
  WCHAR aWStack_23c [24];
  undefined2 uStack_20c;
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  piVar5 = local_27c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_294 = (int *)0x0;
  local_24c = 0xf0000000;
  if ((DAT_0064b4f0 == 0) || (DAT_0064b4dc == 0)) {
    iVar3 = SfS4RWCreateInstance(0,&DAT_00611d10,&local_294);
    if (-1 < iVar3) {
      iVar3 = FUN_0043c5f0(local_294);
      if ((-1 < iVar3) && (iVar3 = (**(code **)(*local_294 + 0x4c))(local_294,3,0,0x4c), -1 < iVar3)
         ) {
        MultiByteToWideChar(0,1,"Sonic Foundry Vegas 3.0",-1,aWStack_208,0x104);
        uStack_2 = 0;
        iVar3 = (**(code **)(*local_294 + 0x28))(local_294,aWStack_208);
        if ((-1 < iVar3) && (iVar3 = FUN_0043c150(local_294,0), -1 < iVar3)) {
          MultiByteToWideChar(0,1,"",-1,aWStack_23c,0x19);
          uStack_20c = 0;
          (**(code **)(*local_294 + 0x20))(local_294,aWStack_23c);
          iVar3 = (**(code **)(*unaff_EBP + 0x30))(unaff_EBP,0,8);
          if (-1 < iVar3) {
            FUN_0043c7f0(local_294);
            if ((DAT_0064b4e8 != 0) && (DAT_0064b4ec != 0)) {
              uStack_268 = 0;
              uStack_26c = (uint)CONCAT11((char)DAT_0064b4ec,(char)DAT_0064b4e8);
            }
            local_24c = 0xf0000000;
            iVar3 = (**(code **)(*local_294 + 0x34))(local_294,&local_290,local_27c);
            if ((-1 < iVar3) && (iStack_248 != 0)) {
              *(undefined4 *)(DAT_0064b4f8 + 0x7f4) = uStack_244;
              iVar3 = FUN_006052e0();
              if ((iVar3 < 0) || (iVar3 = FUN_006053a0(0xf0000000), iVar3 < 0)) {
                FUN_0043cd90();
                local_290 = 0;
              }
            }
          }
        }
      }
      (**(code **)(*local_294 + 8))(local_294);
      if (-1 < iVar3) goto LAB_0043cbf1;
    }
    local_290 = 0;
  }
  else {
    local_27c[0] = DAT_0064b4dc;
    local_27c[2] = DAT_0064b4dc;
    local_25c = 1;
    local_290 = 1;
  }
LAB_0043cbf1:
  iVar3 = local_25c;
  *param_1 = (short)local_27c[0];
  *param_2 = local_260;
  *param_3 = local_254;
  FUN_00601810(1,local_27c[0]);
  uVar2 = 0;
  if (local_290 != 0) {
    if (iVar3 == 0) {
      if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
        iVar3 = FUN_00601ab0(&local_284,&local_28c,1);
        if (iVar3 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)(local_28c & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_284;
          DAT_0064b4e0 = local_28c & 0xff;
        }
      }
      iVar3 = FUN_00601ab0(local_280,local_288,2);
      local_28c = CONCAT22(local_28c._2_2_,local_288[0]);
      if (iVar3 < 0) {
        return 0;
      }
    }
    else {
      DAT_0064b4f0 = 1;
      sVar1 = (short)local_27c[2];
      local_28c = CONCAT22(local_28c._2_2_,sVar1);
      *param_1 = sVar1;
      if (sVar1 == 0) {
        local_28c = CONCAT22(local_28c._2_2_,0x4040);
        *param_1 = 0x4040;
      }
    }
    _mbscpy(&DAT_00647210,"Sonic Foundry Vegas 3.0");
    uVar2 = 0;
    iVar3 = 0;
    local_290 = 0;
    if (0 < DAT_0063dd5c) {
      puVar4 = &DAT_0063dcfc;
      while (((local_28c & 0xff) != puVar4[-1] || ((local_28c & 0xffff) >> 8 != *puVar4))) {
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x1b;
        if (DAT_0063dd5c <= iVar3) {
          return 0;
        }
      }
      _mbscpy(&DAT_00647210,(&PTR_s_Sonic_Foundry_Vegas_Video_3_0_0063dcf0)[iVar3 * 0x1b]);
      uVar2 = 1;
    }
  }
  return uVar2;
}


