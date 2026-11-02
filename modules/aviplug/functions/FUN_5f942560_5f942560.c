/* Module: aviplug.dll
   Function: FUN_5f942560
   Address: 5f942560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f9426c7) */

int FUN_5f942560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBP;
  undefined4 *unaff_EDI;
  undefined1 *puStack_4c;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined *puStack_2c;
  int *piStack_28;
  undefined4 local_14;
  int local_10 [4];
  
  *param_4 = 0;
  *param_5 = 0;
  puStack_30 = (undefined4 *)*param_1;
  piStack_28 = local_10;
  local_14 = 0;
  local_10[0] = 0;
  local_10[2] = 0;
  local_10[1] = 0;
  puStack_2c = &DAT_5f9d9cc0;
  local_10[3] = 0;
  puStack_34 = (undefined4 *)0x5f94259e;
  iVar3 = (**(code **)*puStack_30)();
  if (iVar3 < 0) {
    puStack_34 = (undefined4 *)0x0;
    uStack_38 = 0;
    uStack_3c = 0;
    iStack_40 = 0;
    iStack_44 = 0;
    puStack_4c = &stack0xffffffe0;
    iVar3 = (**(code **)(*(int *)*param_1 + 0x3c))((int *)*param_1,param_1[8],param_1[9]);
  }
  else {
    puStack_34 = &local_14;
    uStack_38 = 0;
    uStack_3c = 0;
    iStack_40 = 0;
    iStack_44 = 0;
    puStack_4c = (undefined1 *)0x0;
    iVar3 = (**(code **)(*unaff_EBP + 0x58))(unaff_EBP,param_1[8],param_1[9],&stack0xffffffe0);
  }
  puVar1 = puStack_30;
  if (-1 < iVar3) {
    if (iVar3 == 0) {
      if (iStack_40 == 0) {
        iVar3 = FUN_5f9419c0((int)puStack_30,(int)puStack_4c,*(int *)(param_1[0x17] + 0x14),
                             param_1[0x34],&iStack_44);
        if (iVar3 < 0) goto LAB_5f9426bf;
        uStack_3c = 1;
        *piStack_28 = (int)puStack_4c;
      }
      else {
        iVar3 = FUN_5f941b10((int)puStack_30,(int)puStack_4c,*(int *)(param_1[0x17] + 0x14),
                             (int *)0x0,iStack_40,&iStack_44);
      }
      puStack_4c = (undefined1 *)0x0;
      if ((-1 < iVar3) && (iVar3 = FUN_5f941c30((int)puVar1,&puStack_34), -1 < iVar3)) {
        InterlockedIncrement((LONG *)(puStack_2c + 0x1c));
        puStack_34[2] = 3;
        puStack_34[4] = param_1 + 0x14;
        puStack_34[5] = iStack_44;
        puStack_34[6] = puStack_2c;
        FUN_5f98fe00(puVar1 + 8,puStack_34);
      }
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 0;
      iVar3 = 1;
    }
  }
LAB_5f9426bf:
  piVar2 = piStack_28;
  if (-1 < iVar3) {
    *unaff_EDI = uStack_3c;
  }
  if (puStack_4c == (undefined1 *)0x0) {
    if (iVar3 < 0) {
      if (iStack_44 != 0) {
        (**(code **)(iStack_44 + 0x2c))(iStack_44);
        return iVar3;
      }
      if (*piStack_28 != 0) {
        (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,*piStack_28);
        *piVar2 = 0;
      }
    }
    return iVar3;
  }
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,puStack_4c);
  return iVar3;
}


