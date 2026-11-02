/* Module: vegas30k.dll
   Function: FUN_01010fa0
   Address: 01010fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01010fa0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  
  FUN_0100ff10(param_1);
  iVar1 = FUN_0100ffb0(&param_1,0x10);
  if (-1 < iVar1) {
    iVar4 = param_1 * 0x10000;
    iVar1 = FUN_0100ffb0(&param_1,0x10);
    if (-1 < iVar1) {
      if (iVar4 + (param_1 & 0xffff) == 0x1ba) {
        iVar4 = 0;
        do {
          iVar1 = FUN_0100ffe0(&local_40,8);
          if (iVar1 < 0) goto LAB_01011165;
          iVar3 = 1;
          uVar5 = local_40 & 0xff | 0x1ba00;
          if (uVar5 == 0x1ba) {
LAB_0101117a:
            iVar1 = 1;
            goto LAB_01011165;
          }
          do {
            switch(uVar5) {
            case 0x1bb:
            case 0x1be:
            case 0x1c0:
            case 0x1e0:
              iVar1 = FUN_0100ffb0(&local_3c,0x10);
              if (iVar1 < 0) goto LAB_01011165;
              FUN_010101e0(&local_38);
              uVar5 = (local_3c & 0xffff) * 8;
              uVar2 = uVar5 + local_38;
              FUN_01010200(uVar2 - 0x20,
                           (local_34 + (uint)CARRY4(uVar5,local_38)) - (uint)(uVar2 < 0x20));
              iVar1 = FUN_0100ffb0(&param_1,0x10);
              if (iVar1 < 0) goto LAB_01011165;
              iVar6 = param_1 * 0x10000;
              iVar1 = FUN_0100ffb0(&param_1,0x10);
              if (iVar1 < 0) goto LAB_01011165;
              uVar5 = iVar6 + (param_1 & 0xffff);
              iVar3 = iVar3 + 2 + (local_3c & 0xffff);
            }
            iVar1 = FUN_0100ffe0(&local_40,8);
            if (iVar1 < 0) goto LAB_01011165;
            uVar5 = uVar5 << 8 | local_40 & 0xff;
            iVar3 = iVar3 + 1;
          } while (uVar5 != 0x1ba);
          if ((iVar3 != 0x900) && (iVar3 != 0x914)) goto LAB_0101117a;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 5);
        iVar1 = 0;
      }
      else {
        iVar1 = -0x7fffbffb;
      }
    }
  }
LAB_01011165:
  FUN_0100ff40();
  return iVar1;
}


