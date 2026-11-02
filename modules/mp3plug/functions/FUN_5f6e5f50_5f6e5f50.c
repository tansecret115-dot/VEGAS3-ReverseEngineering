/* Module: mp3plug.dll
   Function: FUN_5f6e5f50
   Address: 5f6e5f50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_5f6e5f50(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  
  if (param_2 != 0) {
    uVar1 = param_1[1];
    if (param_2 < (int)(param_1[3] - uVar1)) {
      local_18 = 0;
      uVar3 = 1 << ((byte)uVar1 & 0x1f);
      uVar2 = uVar1 >> 5;
      if (0 < param_2) {
        iVar4 = 0;
        local_18 = 0;
        do {
          local_18 = local_18 * 2;
          iVar4 = iVar4 + 1;
          if ((uVar3 & *(uint *)(*param_1 + uVar2 * 4)) != 0) {
            local_18 = local_18 | 1;
          }
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = 1;
            uVar2 = uVar2 + 1;
          }
        } while (iVar4 < param_2);
      }
      param_1[1] = uVar1 + param_2;
    }
    else {
      local_18 = 0;
      if (0 < param_2) {
        iVar4 = 0;
        do {
          uVar1 = param_1[1];
          uVar3 = *(uint *)(*param_1 + (uVar1 >> 5) * 4);
          param_1[1] = uVar1 + 1;
          if (uVar1 + 1 == param_1[3]) {
            param_1[1] = 0;
          }
          iVar4 = iVar4 + 1;
          local_18 = local_18 * 2 | (uint)((1 << ((byte)uVar1 & 0x1f) & uVar3) != 0);
        } while (iVar4 < param_2);
      }
    }
    return local_18;
  }
  return 0;
}


