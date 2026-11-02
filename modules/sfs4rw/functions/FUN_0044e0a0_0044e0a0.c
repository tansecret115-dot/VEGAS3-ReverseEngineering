/* Module: sfs4rw.dll
   Function: FUN_0044e0a0
   Address: 0044e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0044e0a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  if (((param_7 == (char *)0x0) || (*param_7 != *PTR_s_1_1_3_004a6f3c)) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_0043e2b0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 **)(param_1 + 0x24) = &LAB_0043e2d0;
    }
    if (param_2 == -1) {
      param_2 = 6;
    }
    bVar7 = param_4 < 0;
    if (bVar7) {
      param_4 = -param_4;
    }
    if (((((0 < param_5) && (param_5 < 10)) &&
         ((param_3 == 8 && ((7 < param_4 && (param_4 < 0x10)))))) && (-1 < param_2)) &&
       (((param_2 < 10 && (-1 < param_6)) && (param_6 < 3)))) {
      piVar2 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b1);
      if (piVar2 == (int *)0x0) {
        return 0xfffffffc;
      }
      *(int **)(param_1 + 0x1c) = piVar2;
      piVar2[6] = (uint)bVar7;
      iVar6 = 1 << ((byte)param_4 & 0x1f);
      *(int *)((int)piVar2 + 0x26) = param_4;
      *piVar2 = param_1;
      *(int *)((int)piVar2 + 0x46) = param_2 + 7;
      *(int *)((int)piVar2 + 0x22) = iVar6;
      *(int *)((int)piVar2 + 0x2a) = iVar6 + -1;
      iVar3 = 1 << ((byte)(param_2 + 7) & 0x1f);
      *(int *)((int)piVar2 + 0x42) = iVar3;
      *(int *)((int)piVar2 + 0x4a) = iVar3 + -1;
      *(uint *)((int)piVar2 + 0x4e) = (param_2 + 9U) / 3;
      uVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar6,2);
      *(undefined4 *)((int)piVar2 + 0x2e) = uVar4;
      uVar4 = *(undefined4 *)(param_1 + 0x28);
      uVar5 = (**(code **)(param_1 + 0x20))(uVar4,*(undefined4 *)((int)piVar2 + 0x22),2);
      *(undefined4 *)((int)piVar2 + 0x36) = uVar5;
      uVar5 = (**(code **)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)((int)piVar2 + 0x42),2);
      *(undefined4 *)((int)piVar2 + 0x3a) = uVar5;
      iVar3 = 1 << ((char)param_2 + 6U & 0x1f);
      *(int *)((int)piVar2 + 0x168f) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,4);
      uVar1 = *(uint *)((int)piVar2 + 0x168f);
      piVar2[2] = iVar3;
      piVar2[3] = uVar1 * 4;
      if (((*(int *)((int)piVar2 + 0x2e) != 0) && (*(int *)((int)piVar2 + 0x36) != 0)) &&
         ((*(int *)((int)piVar2 + 0x3a) != 0 && (iVar3 != 0)))) {
        *(undefined1 *)((int)piVar2 + 0x1d) = 8;
        *(uint *)((int)piVar2 + 0x1697) = iVar3 + (uVar1 & 0xfffffffe);
        *(uint *)((int)piVar2 + 0x168b) = iVar3 + uVar1 * 3;
        *(int *)((int)piVar2 + 0x7e) = iVar6;
        *(undefined4 *)((int)piVar2 + 0x7a) = uVar4;
        uVar4 = FUN_0044e3a0(param_1);
        return uVar4;
      }
      *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_004a6ac8;
      FUN_0044e860(param_1);
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}


