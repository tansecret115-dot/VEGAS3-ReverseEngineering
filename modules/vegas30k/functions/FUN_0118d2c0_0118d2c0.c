/* Module: vegas30k.dll
   Function: FUN_0118d2c0
   Address: 0118d2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0118d2c0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined4 local_4;
  
  puStack_14 = &stack0x00000004;
  local_4 = *(undefined4 *)(param_1 + 0x168);
  uStack_18 = *(undefined4 *)(param_1 + 0x15c);
  uStack_10 = 0;
  puStack_1c = &local_4;
  iVar2 = (**(code **)(param_1 + 0x158))(param_1,0x4000);
  if (iVar2 < 0) goto LAB_0118d436;
  if (iVar2 != 0x4e001) {
    *(uint *)(param_1 + 0x164) = (uint)puStack_1c & 0xffff0000;
    *(uint *)(param_1 + 0x160) = (uint)puStack_1c & 0xffff;
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0xdc))
              (*(int **)(param_1 + 0x1f0),unaff_EDI,unaff_ESI);
    uVar3 = (uint)puStack_1c & 0x30000000;
    if (uVar3 == 0x10000000) {
      piVar1 = *(int **)(param_1 + 0x1f0);
      if (((uint)puStack_1c & 0x800000) == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x15c))(piVar1,puStack_14,uStack_10);
      }
      else {
        iVar2 = (**(code **)(*piVar1 + 0x168))(piVar1);
      }
LAB_0118d3cc:
      if (iVar2 < 0) goto LAB_0118d436;
    }
    else {
      if (uVar3 == 0x20000000) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x134))
                          (*(int **)(param_1 + 0x1f0),puStack_14,uStack_10);
        goto LAB_0118d3cc;
      }
      if (uVar3 == 0x30000000) {
        iVar2 = **(int **)(param_1 + 0x1f0);
        if (((uint)puStack_1c & 0x800000) == 0) {
          iVar2 = (**(code **)(iVar2 + 0x174))(*(int **)(param_1 + 0x1f0),puStack_14,uStack_10);
        }
        else {
          iVar2 = (**(code **)(iVar2 + 0x180))();
        }
        goto LAB_0118d3cc;
      }
    }
    uVar3 = (uint)puStack_1c & 0xc0000000;
    if (uVar3 == 0x40000000) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x28))(*(int **)(param_1 + 0x1fc));
    }
    else if (uVar3 == 0x80000000) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x18))
                        (*(int **)(param_1 + 0x1fc),puStack_14,uStack_10);
    }
    else if (uVar3 == 0xc0000000) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x48))(*(int **)(param_1 + 0x1fc));
    }
    else {
      iVar2 = 0;
    }
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  }
  if (-1 < iVar2) {
    return iVar2;
  }
LAB_0118d436:
  (**(code **)(param_1 + 0x158))(param_1,0x4007,&puStack_1c,*(undefined4 *)(param_1 + 0x15c),0,0);
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffffb;
  return iVar2;
}


