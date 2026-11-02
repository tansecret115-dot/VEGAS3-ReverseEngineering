/* Module: vegas30k.dll
   Function: FUN_01010240
   Address: 01010240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01010240(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5,
                undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34 [13];
  
  local_44 = 0;
  FUN_0100ff10(param_2);
  FUN_01010220(param_5,param_6);
  FUN_01010200(param_3,param_4);
  puVar1 = param_1;
LAB_01010285:
  FUN_010101e0(&param_3);
  iVar2 = FUN_01010010(&local_54,0x18);
  if (iVar2 < 0) goto LAB_0101091a;
  iVar3 = 0;
  while (local_54 != 1) {
    bVar4 = 0xfffffffe < param_3;
    param_3 = param_3 + 1;
    param_4 = param_4 + (uint)bVar4;
    FUN_01010200(param_3,param_4);
    iVar2 = FUN_01010010(&local_54,0x18);
    if (iVar2 < 0) goto LAB_0101091a;
    iVar3 = iVar3 + 1;
    if (100 < iVar3) goto switchD_0101032f_caseD_1;
  }
  FUN_0100ffe0(&local_50,8);
  switch(local_50 & 0xff) {
  case 0:
    FUN_010101e0(&param_3);
    FUN_01010200(param_3 + 10,param_4 + (uint)(0xfffffff5 < param_3));
    iVar2 = FUN_0100ffe0(&param_1,3);
    if (iVar2 < 0) goto LAB_0101091a;
    if (((char)param_1 == '\x02') || ((char)param_1 == '\x03')) {
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 4,param_4 + (uint)(0xfffffffb < param_3));
      if ((char)param_1 == '\x03') {
        FUN_010101e0(&param_3);
        FUN_01010200(param_3 + 4,param_4 + (uint)(0xfffffffb < param_3));
      }
    }
    iVar2 = FUN_0100ff80(&local_48,1);
    while( true ) {
      if (iVar2 < 0) goto LAB_0101091a;
      if (local_48 == 0) break;
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 8,param_4 + (uint)(0xfffffff7 < param_3));
      iVar2 = FUN_0100ff80(&local_48,1);
    }
    goto LAB_01010285;
  case 0xb2:
    iVar2 = FUN_01010010(&local_4c,0x18);
    if (iVar2 < 0) goto LAB_0101091a;
    for (; local_4c != 1; local_4c = (local_4c & 0x1fffff) << 3 | local_34[0] & 0xff) {
      iVar2 = FUN_0100ffe0(local_34,8);
      if (iVar2 < 0) goto LAB_0101091a;
    }
    FUN_010101e0(&param_3);
    FUN_01010200(param_3 - 0x18,param_4 - (uint)(param_3 < 0x18));
    goto LAB_01010285;
  case 0xb3:
    iVar2 = FUN_0100ff80(puVar1 + 1,0xc);
    if ((((-1 < iVar2) && (iVar2 = FUN_0100ff80(puVar1 + 2,0xc), -1 < iVar2)) &&
        (iVar2 = FUN_0100ff80(puVar1 + 3,4), -1 < iVar2)) &&
       ((iVar2 = FUN_0100ff80(puVar1 + 5,4), -1 < iVar2 &&
        (iVar2 = FUN_0100ff80(puVar1 + 6,0x12), -1 < iVar2)))) {
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 0xc,param_4 + (uint)(0xfffffff3 < param_3));
      iVar2 = FUN_0100ff80(&param_5,1);
      if (-1 < iVar2) {
        if (param_5 != 0) {
          FUN_010101e0(&param_3);
          FUN_01010200(param_3 + 0x200,param_4 + (uint)(0xfffffdff < param_3));
        }
        iVar2 = FUN_0100ff80(&param_5,1);
        if (-1 < iVar2) {
          if (param_5 != 0) {
            FUN_010101e0(&param_3);
            FUN_01010200(param_3 + 0x200,param_4 + (uint)(0xfffffdff < param_3));
          }
          FUN_010101e0(&param_3);
          iVar2 = FUN_01010010(&local_54,0x18);
          if (-1 < iVar2) {
            if (local_54 != 1) break;
            iVar2 = FUN_0100ffe0(&local_50,8);
            if (-1 < iVar2) goto code_r0x010104b9;
          }
        }
      }
    }
    goto LAB_0101091a;
  case 0xb5:
    iVar2 = FUN_0100ffe0(&local_40,4);
    if (iVar2 < 0) goto LAB_0101091a;
    switch(local_40 & 0xff) {
    case 1:
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 0x2c,param_4 + (uint)(0xffffffd3 < param_3));
      *puVar1 = 1;
      goto LAB_01010285;
    case 2:
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 3,param_4 + (uint)(0xfffffffc < param_3));
      FUN_0100ff80(&local_3c,1);
      if (local_3c != 0) {
        FUN_010101e0(&param_3);
        FUN_01010200(param_3 + 0x18,param_4 + (uint)(0xffffffe7 < param_3));
      }
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 0x1d,param_4 + (uint)(0xffffffe2 < param_3));
      goto LAB_01010285;
    case 5:
      iVar2 = FUN_0100ffe0(&param_2,2);
      if (iVar2 < 0) goto LAB_0101091a;
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 4,param_4 + (uint)(0xfffffffb < param_3));
      if ((char)param_2 == '\x01') {
        FUN_010101e0(&param_3);
        FUN_01010200(param_3 + 0x31,param_4 + (uint)(0xffffffce < param_3));
      }
      if ((char)param_2 == '\x03') {
        iVar2 = FUN_0100ff80(&local_38,1);
        if (iVar2 < 0) goto LAB_0101091a;
        if (local_38 != 0) {
          FUN_010101e0(&param_3);
          FUN_01010200(param_3 + 1,param_4 + (uint)(0xfffffffe < param_3));
        }
        FUN_010101e0(&param_3);
        FUN_01010200(param_3 + 6,param_4 + (uint)(0xfffffff9 < param_3));
      }
      goto LAB_01010285;
    case 8:
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 0x14,param_4 + (uint)(0xffffffeb < param_3));
      iVar2 = FUN_0100ff80(&param_1,1);
      if (iVar2 < 0) goto LAB_0101091a;
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 7,param_4 + (uint)(0xfffffff8 < param_3));
      iVar2 = FUN_0100ff80(&param_2,1);
      if (iVar2 < 0) goto LAB_0101091a;
      if (param_2 == 0) {
        if (param_1 == (undefined4 *)0x0) {
          puVar1[4] = 2;
        }
        else {
          puVar1[4] = 1;
        }
      }
      else {
        puVar1[4] = 0;
      }
      goto LAB_01010918;
    }
    break;
  case 0xb8:
    FUN_010101e0(&param_3);
    FUN_01010200(param_3 + 0x1b,param_4 + (uint)(0xffffffe4 < param_3));
    goto LAB_01010285;
  }
switchD_0101032f_caseD_1:
  iVar2 = -0x7fffbffb;
  goto LAB_0101091a;
code_r0x010104b9:
  if ((char)local_50 == -0x4b) {
    *puVar1 = 1;
    puVar1[4] = 0xffffffff;
  }
  else {
    *puVar1 = 0;
    puVar1[4] = 0;
    local_44 = 1;
  }
  FUN_01010200(param_3,param_4);
  if (local_44 != 0) {
LAB_01010918:
    iVar2 = 0;
LAB_0101091a:
    FUN_0100ff40();
    return iVar2;
  }
  goto LAB_01010285;
}


