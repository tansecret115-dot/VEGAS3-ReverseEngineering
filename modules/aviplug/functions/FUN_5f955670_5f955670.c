/* Module: aviplug.dll
   Function: FUN_5f955670
   Address: 5f955670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f955670(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  
  if ((((param_2 == 0) || (param_3 < 0x30)) || (*(int *)(param_2 + 0xc) == 0)) ||
     (*(int *)(param_2 + 4) == 0)) {
    return 0xfffffffa;
  }
  if (*(undefined4 **)(param_2 + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(param_2 + 0x18) = 0x10;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (((((param_1[0x16] == (uint)*(ushort *)(iVar1 + 0xe)) && (param_1[0x13] == *(int *)(iVar1 + 4))
        ) && ((param_1[0x14] == *(int *)(iVar1 + 8) &&
              ((param_1[0x15] == *(int *)(iVar1 + 0x10) &&
               (iVar2 = *(int *)(param_2 + 4), param_1[0x17] <= *(int *)(iVar2 + 0x14))))))) &&
      (param_1[0x1b] == (uint)*(ushort *)(iVar2 + 0xe))) &&
     (((param_1[0x18] == *(int *)(iVar2 + 4) && (param_1[0x19] == *(int *)(iVar2 + 8))) &&
      (param_1[0x1a] == *(int *)(iVar2 + 0x10))))) {
    (*(code *)param_1[0x12])
              (param_1[6],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),param_1[0x1c]
              );
    if (param_1[3] != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)(param_2 + 8));
      return unaff_ESI;
    }
  }
  else {
    pcVar3 = (code *)(**(code **)(*param_1 + 0x3c))(param_1,iVar1,*(undefined4 *)(param_2 + 4),0);
    if (pcVar3 == (code *)0x0) {
      return 0xfffffffe;
    }
    if (*(int *)(param_1[6] + 0x4738) == 0) {
      FUN_5f967330(param_1[6]);
    }
    if (*(int *)(param_1[6] + 0x4738) == 0) {
      return 0xfffffffd;
    }
    uVar4 = (uint)*(ushort *)(*(int *)(param_2 + 0xc) + 0xe) * *(int *)(*(int *)(param_2 + 0xc) + 4)
            + 0x1f;
    (*pcVar3)(param_1[6],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
              -((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3));
    if (param_1[3] != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)(param_2 + 8));
    }
    FUN_5f967430(param_1[6]);
  }
  return unaff_EBX;
}


