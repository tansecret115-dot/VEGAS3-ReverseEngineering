/* Module: mpegin.dll
   Function: FUN_100094e0
   Address: 100094e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100094e0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 1;
    *(undefined4 *)(param_1 + 0x20c) = 1;
    *(undefined4 *)(param_1 + 0x1f0) = 3;
    *(undefined4 *)(param_1 + 0x1f8) = 1;
    *(undefined4 *)(param_1 + 400) = 1;
    *(undefined4 *)(param_1 + 0x1b0) = 5;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x30) = 0xffffffff;
  if (1 < *(int *)(*(int *)(param_1 + 0x12e54) + 0x308)) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xd08);
  if (iVar4 < 0x35353553) {
    if (iVar4 == 0x35353552) {
LAB_100096e8:
      uVar2 = *(int *)(param_1 + 0x2c) * 2 + 2U & 0xfffffffc;
      *(uint *)(param_1 + 0x54) = uVar2;
      iVar4 = *(int *)(param_1 + 0x30) * uVar2;
    }
    else {
      if (iVar4 < 0x3259555a) {
        if (iVar4 != 0x32595559) {
          if ((iVar4 != 0x30323449) && (iVar4 != 0x32315659)) {
            return 0;
          }
          *(int *)(param_1 + 100) = *(int *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x30);
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x2c) >> 1;
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
          iVar4 = 0;
          do {
            if (iVar4 == 0) {
              iVar3 = *(int *)(param_1 + 100);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x6c);
            }
            iVar3 = iVar3 * *(int *)(param_1 + 0x68);
            uVar1 = (**(code **)(param_1 + 0x12e4c))(iVar3);
            *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x10 + iVar4 * 4) = uVar1;
            if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x10 + iVar4 * 4) == 0) {
              FUN_10007e90(param_1,(byte *)s_pic_buffer_0___d__malloc_failed_10018f3c);
              return 1;
            }
            uVar1 = (**(code **)(param_1 + 0x12e4c))(iVar3);
            *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x1c + iVar4 * 4) = uVar1;
            if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x1c + iVar4 * 4) == 0) {
              FUN_10007e90(param_1,(byte *)s_pic_buffer_1___d__malloc_failed_10018f1c);
              return 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 3);
          return 0;
        }
        goto LAB_10009707;
      }
      if (iVar4 != 0x33524742) {
        if (iVar4 != 0x34524742) {
          return 0;
        }
LAB_1000966d:
        iVar3 = *(int *)(param_1 + 0x2c) * 4;
        iVar4 = *(int *)(param_1 + 0x30) * iVar3;
        *(int *)(param_1 + 0x54) = iVar3;
        uVar1 = (**(code **)(param_1 + 0x12e4c))(iVar4);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x10) = uVar1;
        if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x10) == 0) {
          FUN_10007e90(param_1,(byte *)s_pic_buffer_0__malloc_failed_10018f00);
          return 1;
        }
        goto LAB_100096b0;
      }
      uVar2 = (*(int *)(param_1 + 0x2c) + 1) * 3 & 0xfffffffc;
      *(uint *)(param_1 + 0x54) = uVar2;
      iVar4 = *(int *)(param_1 + 0x30) * uVar2;
    }
  }
  else {
    if (iVar4 < 0x5659555a) {
      if (iVar4 != 0x56595559) {
        if (iVar4 != 0x35363552) {
          if (iVar4 != 0x41524742) {
            return 0;
          }
          goto LAB_1000966d;
        }
        goto LAB_100096e8;
      }
    }
    else if (iVar4 != 0x59565955) {
      return 0;
    }
LAB_10009707:
    iVar4 = *(int *)(param_1 + 0x2c) * 2;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 100) = iVar4;
    iVar4 = iVar4 * *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  uVar1 = (**(code **)(param_1 + 0x12e4c))(iVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x10) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x10) == 0) {
    FUN_10007e90(param_1,(byte *)s_pic_buffer_0__malloc_failed_10018f00);
    return 1;
  }
LAB_100096b0:
  uVar1 = (**(code **)(param_1 + 0x12e4c))(iVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x1c) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x1c) != 0) {
    return 0;
  }
  FUN_10007e90(param_1,(byte *)s_pic_buffer_1__malloc_failed_10018ee4);
  return 1;
}


