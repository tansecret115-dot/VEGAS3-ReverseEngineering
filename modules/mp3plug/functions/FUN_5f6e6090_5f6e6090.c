/* Module: mp3plug.dll
   Function: FUN_5f6e6090
   Address: 5f6e6090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e6090(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_24;
  
  if (0 < param_3 + -0x20) {
    iVar4 = param_3 + -0x20;
    local_24 = param_3;
    do {
      param_3 = local_24 + -0x20;
      iVar4 = iVar4 + -0x20;
      uVar2 = param_2[1];
      if ((int)(param_2[3] - uVar2) < 0x21) {
        uVar1 = 0;
        iVar6 = -0x20;
        do {
          uVar2 = param_2[1];
          uVar3 = *(uint *)(*param_2 + (uVar2 >> 5) * 4);
          param_2[1] = uVar2 + 1;
          if (uVar2 + 1 == param_2[3]) {
            param_2[1] = 0;
          }
          uVar1 = uVar1 * 2 | (uint)((1 << ((byte)uVar2 & 0x1f) & uVar3) != 0);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      else {
        uVar3 = 1 << ((byte)uVar2 & 0x1f);
        iVar6 = -0x20;
        uVar1 = 0;
        uVar5 = uVar2 >> 5;
        do {
          uVar1 = uVar1 * 2;
          if ((uVar3 & *(uint *)(*param_2 + uVar5 * 4)) != 0) {
            uVar1 = uVar1 | 1;
          }
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = 1;
            uVar5 = uVar5 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        param_2[1] = uVar2 + 0x20;
      }
      FUN_5f6e62dc(0x20,uVar1);
      local_24 = param_3;
    } while (0 < iVar4);
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2[1];
    if (param_3 < (int)(param_2[3] - uVar1)) {
      uVar2 = 0;
      uVar5 = uVar1 >> 5;
      uVar3 = 1 << ((byte)uVar1 & 0x1f);
      if (0 < param_3) {
        uVar2 = 0;
        iVar4 = 0;
        do {
          uVar2 = uVar2 * 2;
          if ((uVar3 & *(uint *)(*param_2 + uVar5 * 4)) != 0) {
            uVar2 = uVar2 | 1;
          }
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = 1;
            uVar5 = uVar5 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_3);
      }
      param_2[1] = uVar1 + param_3;
    }
    else {
      uVar2 = 0;
      if (0 < param_3) {
        iVar4 = 0;
        do {
          uVar1 = param_2[1];
          uVar3 = *(uint *)(*param_2 + (uVar1 >> 5) * 4);
          param_2[1] = uVar1 + 1;
          if (uVar1 + 1 == param_2[3]) {
            param_2[1] = 0;
          }
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 * 2 | (uint)((1 << ((byte)uVar1 & 0x1f) & uVar3) != 0);
        } while (iVar4 < param_3);
      }
    }
  }
  FUN_5f6e62dc(param_3,uVar2);
  return 1;
}


