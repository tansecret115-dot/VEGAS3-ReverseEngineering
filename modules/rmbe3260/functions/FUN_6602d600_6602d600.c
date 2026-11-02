/* Module: rmbe3260.dll
   Function: FUN_6602d600
   Address: 6602d600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6602d600(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 == (undefined4 *)0x0) || (param_3 == (uint *)0x0)) || (param_4 == (undefined4 *)0x0)
     ) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
LAB_6602d678:
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *param_5 = 0;
      goto LAB_6602d6c2;
    }
    uVar1 = *(uint *)(param_1 + 0xbc);
LAB_6602d685:
    *param_5 = uVar1;
    uVar1 = *(uint *)(param_1 + 0xbc);
    uVar2 = *(uint *)(param_1 + 0xc4);
  }
  else if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_6602d678;
    *param_5 = *(uint *)(param_1 + 0xac);
    uVar1 = *(uint *)(param_1 + 0xac);
    uVar2 = *(uint *)(param_1 + 0xb4);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xbc);
    if (uVar1 <= *(uint *)(param_1 + 0xac)) goto LAB_6602d685;
    *param_5 = *(uint *)(param_1 + 0xac);
    uVar1 = *(uint *)(param_1 + 0xac);
    uVar2 = *(uint *)(param_1 + 0xb4);
  }
  if (uVar1 < uVar2) {
    *(uint *)(param_1 + 0xcc) = (uVar1 - uVar2) + -1;
  }
  else {
    *(uint *)(param_1 + 0xcc) = uVar1 - uVar2;
  }
LAB_6602d6c2:
  *param_2 = *(undefined4 *)(param_1 + 0xcc);
  *param_4 = *(undefined4 *)(param_1 + 0xd0);
  if ((((*(int *)(param_1 + 0xd0) == 0) || (*(int *)(param_1 + 0xcc) == 0)) ||
      ((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4)))))
     || ((*(int *)(param_1 + 0x54) != 0 && (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc4)))))
  {
    *param_3 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar4 = FUN_6602d7d0(*(uint *)(param_1 + 0xb0),*(int *)(param_1 + 0xb4),
                           *(uint *)(param_1 + 0xb8),*(int *)(param_1 + 0xac),
                           *(int *)(param_1 + 0xd0));
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = FUN_6602d7d0(*(uint *)(param_1 + 0xc0),*(int *)(param_1 + 0xc4),
                           *(uint *)(param_1 + 200),*(int *)(param_1 + 0xbc),
                           *(int *)(param_1 + 0xd0));
    }
    *param_3 = iVar3 + iVar4;
    if ((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
      *param_3 = (uint)(iVar3 + iVar4) >> 1;
      return 0;
    }
  }
  return 0;
}


