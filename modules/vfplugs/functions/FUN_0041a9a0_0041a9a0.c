/* Module: vfplugs.dll
   Function: FUN_0041a9a0
   Address: 0041a9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a9a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  float local_10 [4];
  
  iVar2 = FUN_0041a430(param_1,local_10);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x188);
  if (((&stack0x00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) &&
     (&stack0x00000000 != (undefined1 *)0x20)) {
    iVar4 = *(int *)(param_1 + 400);
    iVar2 = *piVar1;
    local_20 = ftol();
    local_1c = *(int *)(param_1 + 0x18c);
    if ((local_20 < iVar2) || (iVar2 = iVar4 + -1, iVar2 < local_20)) {
      local_20 = iVar2;
    }
    if ((!SBORROW4(local_1c,local_1c)) && (iVar2 = *(int *)(param_1 + 0x194) + -1, iVar2 < local_1c)
       ) {
      local_1c = iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 0x194) + 6;
  if ((((local_20 + -6 <= *param_2) && (*param_2 <= local_20 + 6)) &&
      (*(int *)(param_1 + 0x194) <= param_2[1])) && (param_2[1] <= iVar2)) {
    return 3;
  }
  if (((&stack0x00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) &&
     (&stack0x00000000 != (undefined1 *)0x20)) {
    iVar3 = *(int *)(param_1 + 400);
    iVar4 = *piVar1;
    local_20 = ftol();
    local_1c = *(int *)(param_1 + 0x18c);
    if ((local_20 < iVar4) || (iVar4 = iVar3 + -1, iVar4 < local_20)) {
      local_20 = iVar4;
    }
    if ((!SBORROW4(local_1c,local_1c)) && (iVar4 = *(int *)(param_1 + 0x194) + -1, iVar4 < local_1c)
       ) {
      local_1c = iVar4;
    }
  }
  if ((((local_20 + -6 <= *param_2) && (*param_2 <= local_20 + 6)) &&
      (*(int *)(param_1 + 0x194) <= param_2[1])) && (param_2[1] <= iVar2)) {
    return 4;
  }
  if (((&stack0x00000000 != (undefined1 *)0x10) && (piVar1 != (int *)0x0)) &&
     (&stack0x00000000 != (undefined1 *)0x20)) {
    iVar3 = *(int *)(param_1 + 400);
    iVar4 = *piVar1;
    local_20 = ftol();
    local_1c = *(int *)(param_1 + 0x18c);
    if ((local_20 < iVar4) || (iVar4 = iVar3 + -1, iVar4 < local_20)) {
      local_20 = iVar4;
    }
    if ((!SBORROW4(local_1c,local_1c)) && (iVar4 = *(int *)(param_1 + 0x194) + -1, iVar4 < local_1c)
       ) {
      local_1c = iVar4;
    }
  }
  iVar4 = *param_2;
  if ((((local_20 + -6 <= iVar4) && (iVar4 <= local_20 + 6)) &&
      (*(int *)(param_1 + 0x194) <= param_2[1])) && (param_2[1] <= iVar2)) {
    return 5;
  }
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    if (((&stack0x00000000 != (undefined1 *)0x10) && (param_1 != -0x1c8)) &&
       (&stack0x00000000 != (undefined1 *)0x20)) {
      iVar2 = *(int *)(param_1 + 0x1d4);
      local_1c = *(int *)(param_1 + 0x1cc);
      iVar3 = ftol();
      if ((local_1c <= iVar3) && (iVar2 = iVar2 + -1, local_1c = iVar3, iVar2 < iVar3)) {
        local_1c = iVar2;
      }
    }
    if ((((*(int *)(param_1 + 0x1d0) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x1d0) + 6)) &&
        (local_1c + -6 <= param_2[1])) && (param_2[1] <= local_1c + 6)) {
      return 6;
    }
  }
  if (((*(int *)(param_1 + 0x22c) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x234))) &&
     ((*(int *)(param_1 + 0x230) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x238))))) {
    return 3;
  }
  if (((*(int *)(param_1 + 0x23c) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x244))) &&
     ((*(int *)(param_1 + 0x240) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x248))))) {
    return 4;
  }
  if ((((*(int *)(param_1 + 0x24c) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x254))) &&
      (*(int *)(param_1 + 0x250) <= param_2[1])) && (param_2[1] <= *(int *)(param_1 + 600))) {
    return 5;
  }
  if (((*piVar1 <= iVar4) && (iVar4 <= *(int *)(param_1 + 400))) &&
     ((*(int *)(param_1 + 0x18c) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x194))))) {
    return 3;
  }
  if (((*(int *)(param_1 + 0x198) <= iVar4) && (iVar4 <= *(int *)(param_1 + 0x1a0))) &&
     ((*(int *)(param_1 + 0x19c) <= param_2[1] && (param_2[1] <= *(int *)(param_1 + 0x1a4))))) {
    return 4;
  }
  iVar2 = FUN_00420f40((int *)(param_1 + 0x1a8),param_2);
  if (iVar2 != 0) {
    return 5;
  }
  iVar2 = FUN_00420f40((int *)(param_1 + 0x1b8),param_2);
  if (iVar2 != 0) {
    return 8;
  }
  iVar2 = FUN_00420f40((int *)(param_1 + 0x1c8),param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_00420f40((int *)(param_1 + 0x1d8),param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_00420f40((int *)(param_1 + 0x1e8),param_2);
      if (iVar2 != 0) {
        return 2;
      }
      iVar2 = FUN_00420f40((int *)(param_1 + 0x25c),param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_00420f40((int *)(param_1 + 0x29c),param_2), iVar2 != 0)) {
        return 9;
      }
      iVar2 = FUN_00420f40((int *)(param_1 + 0x26c),param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_00420f40((int *)(param_1 + 0x2ac),param_2), iVar2 != 0)) {
        return 10;
      }
      iVar2 = FUN_00420f40((int *)(param_1 + 0x27c),param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_00420f40((int *)(param_1 + 700),param_2), iVar2 != 0)) {
        return 0xb;
      }
      iVar2 = FUN_00420f40((int *)(param_1 + 0x28c),param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_00420f40((int *)(param_1 + 0x2cc),param_2), iVar2 != 0)) {
        return 0xc;
      }
      iVar2 = FUN_00420f40((int *)(param_1 + 0x20c),param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_00420f40((int *)(param_1 + 0x21c),param_2), iVar2 != 0)) {
        return 7;
      }
    }
    else if (*(int *)(param_1 + 0x134) != 0) {
      return 1;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 2) != 0) {
    return 6;
  }
  return 0;
}


