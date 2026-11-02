/* Module: vegas30.exe
   Function: FUN_005895a0
   Address: 005895a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005895a0(int *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,uint param_8,int param_9,
                 uint param_10,int param_11,uint param_12,undefined4 param_13,undefined4 param_14)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_0065a06c;
  uVar2 = param_3[1];
  uVar3 = *param_3;
  uVar6 = 0;
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      if (_DAT_00610fd8 <= (double)CONCAT44(param_9,param_8)) {
        if ((*(int *)(DAT_0065a06c + 0xd4) == 0) &&
           (puVar1 = (undefined4 *)(DAT_0065a06c + 0xd8), *(int *)(DAT_0065a06c + 0xd8) != 0)) {
          *(undefined4 *)(DAT_0065a06c + 0xd4) = 1;
          *puVar1 = 0;
        }
      }
      else if (((*(int *)(DAT_0065a06c + 0xd4) != 0) && (param_11 <= *(int *)(DAT_0065a06c + 0xbc)))
              && ((param_11 < *(int *)(DAT_0065a06c + 0xbc) ||
                  (param_10 < *(uint *)(DAT_0065a06c + 0xb8))))) {
        *(undefined4 *)(DAT_0065a06c + 0xd4) = 0;
        *(undefined4 *)(iVar5 + 0xd8) = 1;
      }
      uVar6 = FUN_00594550(DAT_0065a068,uVar3,param_4,param_5,param_13,0x20,param_7,param_8,param_9,
                           param_6,param_10,param_11,param_12,param_12,0);
      iVar5 = DAT_0065a06c;
      if ((param_6 == 0) && (0 < (int)uVar6)) {
        uVar4 = *(uint *)(DAT_0065a06c + 0x60);
        *(uint *)(DAT_0065a06c + 0x60) = uVar4 + uVar6;
        *(uint *)(iVar5 + 100) =
             *(int *)(iVar5 + 100) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar4,uVar6);
        return uVar6;
      }
    }
    else {
      switch(param_2) {
      case 0:
        (**(code **)(*param_1 + 0x34))(param_1,&DAT_0065a078,0);
        return 0;
      case 1:
        FUN_00595d10(DAT_0065a06c);
        return 0;
      case 2:
        FUN_00595d10(DAT_0065a06c);
        return 0;
      case 4:
        (**(code **)(*param_1 + 0x1b8))(param_1,DAT_0065a06c + 0xb0);
        if (*(int *)(DAT_0065a06c + 0xd4) != 0) {
          iVar5 = *(int *)(DAT_0065a06c + 0xcc) + *(int *)(DAT_0065a06c + 0xbc) +
                  (uint)CARRY4(*(uint *)(DAT_0065a06c + 200),*(uint *)(DAT_0065a06c + 0xb8));
          if ((iVar5 <= param_9) &&
             ((iVar5 < param_9 ||
              (*(uint *)(DAT_0065a06c + 200) + *(uint *)(DAT_0065a06c + 0xb8) < param_8)))) {
            *(undefined4 *)(DAT_0065a06c + 0xd4) = 0;
          }
        }
        FUN_005943f0(DAT_0065a068);
        FUN_00595ca0(DAT_0065a06c,uVar3,param_2,param_8,param_9);
        _DAT_0064b4c0 = 0;
        return 0;
      case 6:
        FUN_00595d10(DAT_0065a06c);
        FUN_005943f0(DAT_0065a068);
        (**(code **)(*param_1 + 0x1b8))(param_1,DAT_0065a06c + 0xb0);
        if (*(int *)(DAT_0065a06c + 0xd4) != 0) {
          iVar5 = *(int *)(DAT_0065a06c + 0xcc) + *(int *)(DAT_0065a06c + 0xbc) +
                  (uint)CARRY4(*(uint *)(DAT_0065a06c + 200),*(uint *)(DAT_0065a06c + 0xb8));
          if ((iVar5 <= param_9) &&
             ((iVar5 < param_9 ||
              (*(uint *)(DAT_0065a06c + 200) + *(uint *)(DAT_0065a06c + 0xb8) < param_8)))) {
            *(undefined4 *)(DAT_0065a06c + 0xd4) = 0;
          }
        }
        FUN_00595ca0(DAT_0065a06c,uVar3,param_2,param_8,param_9);
        return 0;
      case 7:
        (**(code **)(*param_1 + 0x1b8))(param_1,DAT_0065a06c + 0xb0);
        if (*(int *)(DAT_0065a06c + 0xd4) != 0) {
          iVar5 = *(int *)(DAT_0065a06c + 0xcc) + *(int *)(DAT_0065a06c + 0xbc) +
                  (uint)CARRY4(*(uint *)(DAT_0065a06c + 200),*(uint *)(DAT_0065a06c + 0xb8));
          if ((iVar5 <= param_9) &&
             ((iVar5 < param_9 ||
              (*(uint *)(DAT_0065a06c + 200) + *(uint *)(DAT_0065a06c + 0xb8) < param_8)))) {
            *(undefined4 *)(DAT_0065a06c + 0xd4) = 0;
            return 0;
          }
        }
        break;
      case 0x10:
      case 0x11:
        uVar6 = FUN_00593ab0(uVar3,uVar2,param_4,param_7);
        FUN_00593600();
        return uVar6;
      case 0x13:
      case 0x15:
        FUN_00593a40(uVar3,uVar2,param_4,param_10,param_11,param_7);
        return 0;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x21:
      return 0xfffffffe;
    case 0x22:
      uVar6 = FUN_00594550(DAT_0065a068,uVar3,param_4,param_5,param_13,param_2,param_7,param_8,
                           param_9,param_6,param_10,param_11,param_12,param_12,0);
      return uVar6;
    case 0x23:
      uVar6 = FUN_00593650(uVar3,uVar2,param_4,param_5,param_7,param_10,param_11,param_12,param_12,
                           param_3[2]);
      return uVar6;
    case 0x27:
      uVar6 = FUN_00593c50(uVar3,uVar2,param_4,param_5,param_7,param_10,param_11,param_12,param_12,
                           param_3[2]);
      return uVar6;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      return param_12;
    case 0x40:
    case 0x41:
      uVar6 = FUN_005941d0(uVar3,uVar2,param_4,param_7);
      FUN_00593be0();
      return uVar6;
    case 0x43:
      FUN_00594160(uVar3,uVar2,param_4,param_10,param_11,param_7);
      return 0;
    case 0x45:
      FUN_00594160(uVar3,uVar2,param_4,param_10,param_11,param_7);
      return 0;
    case 0x50:
      uVar6 = FUN_00593150(DAT_0065a074,param_4,param_5,param_8,param_9,param_6,param_10,param_11,
                           param_12,param_13,param_14);
      return uVar6;
    case 0x100:
      if (DAT_0064b138 != (undefined4 *)0x0) {
        *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x4000;
      }
    }
  }
  return uVar6;
}


