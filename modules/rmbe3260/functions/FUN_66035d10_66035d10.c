/* Module: rmbe3260.dll
   Function: FUN_66035d10
   Address: 66035d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66035d10(void *this,undefined4 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined2 extraout_var;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  int *piStack_44;
  int *piStack_40;
  byte *local_24 [3];
  undefined4 local_18;
  void *local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  local_14 = this;
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_6605d9c0(puVar3);
  }
  local_8 = piVar4;
  (**(code **)(*piVar4 + 4))();
  sVar2 = FUN_66035850((int)this);
  local_18 = CONCAT22(extraout_var,sVar2);
  local_10 = 0;
  if (sVar2 != 0) {
    do {
      iVar5 = FUN_66035860(this,(ushort)local_10);
      piStack_40 = (int *)0x66035d8e;
      FUN_6605bdf0(local_24,*(undefined4 **)(iVar5 + 7),(uint)*(byte *)(iVar5 + 6));
      iVar8 = *(int *)(iVar5 + 0xb);
      if (iVar8 == 0) {
        local_c = 0;
        FUN_6605b670(&piStack_44,(int *)local_24);
        iVar8 = FUN_660359d0(this);
        if (-1 < iVar8) {
          piStack_44 = (int *)0x66035ea7;
          piStack_40 = piVar4;
          (**(code **)(*piVar4 + 0xc))();
        }
      }
      else if (iVar8 == 1) {
        puVar3 = operator_new(0x28);
        if (puVar3 == (undefined4 *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_6605c060(puVar3);
        }
        (**(code **)(*piVar6 + 4))();
        piStack_40 = *(int **)(iVar5 + 0x11);
        piStack_44 = piVar6;
        (**(code **)(*piVar6 + 0x10))();
        (**(code **)(*piVar4 + 0x1c))(piVar4,local_24[0],piVar6);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))();
        }
      }
      else if (iVar8 == 2) {
        puVar3 = operator_new(0x28);
        if (puVar3 == (undefined4 *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_6605c060(puVar3);
        }
        (**(code **)(*piVar6 + 4))();
        piStack_40 = *(int **)(iVar5 + 0x11);
        piStack_44 = piVar6;
        (**(code **)(*piVar6 + 0x10))();
        piVar4 = local_8;
        pcVar9 = "Y@ASMRuleBook";
        pbVar7 = local_24[0];
        do {
          pcVar9 = pcVar9 + 2;
          bVar1 = *pbVar7;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_66035e08:
            iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_66035e0d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_66035e08;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_66035e0d:
        if (iVar8 != 0) {
          piStack_40 = local_8;
          piStack_44 = (int *)0x66035e1c;
          (**(code **)(*local_8 + 0x2c))();
        }
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))();
        }
      }
      FUN_6605b770((int *)local_24);
      local_10 = local_10 + 1;
      this = local_14;
    } while ((ushort)local_10 < (ushort)local_18);
  }
  *param_1 = piVar4;
  return 0;
}


