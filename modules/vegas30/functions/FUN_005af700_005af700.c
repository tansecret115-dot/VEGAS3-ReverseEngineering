/* Module: vegas30.exe
   Function: FUN_005af700
   Address: 005af700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005af700(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5,
                undefined4 param_6)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *unaff_retaddr;
  int *local_78;
  int local_70;
  int local_6c;
  int local_68;
  LONG local_58;
  LONG local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  LONG local_28;
  LONG local_24;
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_78 = (int *)*param_3;
  if (local_78 == (int *)0x0) {
    local_78 = (int *)FUN_005a5bd0(param_1 + 0x108,1,param_1 + 0x9c0);
    _SfDibFillRect_24(*local_78,local_78[0x10b],0,local_78[0x10c],param_4,3);
  }
  else if ((*(byte *)(local_78 + 0x10d) & 1) != 0) {
    local_78 = (int *)FUN_005a5de0(param_1 + 0x108,local_78,0,param_1 + 0x9c0);
  }
  iVar4 = _SfGetPixelType_4(*param_5);
  if (iVar4 != *(int *)(param_1 + 0x30)) {
    param_5 = (int *)FUN_005a5de0(param_1 + 0x108,param_5,0,param_1 + 0x9c0);
  }
  if ((((*(int **)(param_2 + 0x1440) != (int *)0x0) &&
       (iVar4 = **(int **)(param_2 + 0x1440), iVar4 != 0)) &&
      (iVar5 = FUN_005acbc0(param_1 + 0x1e0,param_2 + 0x1444), -1 < iVar5)) &&
     (local_70 = 0, 0 < iVar4)) {
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x1440) + 8) + local_70 * 4);
      piVar6 = (int *)FUN_005a5bd0(param_1 + 0x1e0,1,param_1 + 0x9c0);
      local_58 = *(LONG *)(param_2 + 0x1444);
      local_54 = *(LONG *)(param_2 + 0x1448);
      local_50 = *(undefined4 *)(*local_78 + 4);
      local_4c = *(undefined4 *)(*local_78 + 8);
      local_48 = *(undefined4 *)(*param_5 + 4);
      local_44 = *(undefined4 *)(*param_5 + 8);
      _SfDibFillRect_24(*piVar6,piVar6[0x10b],0,piVar6[0x10c],&DAT_00629e10,3);
      FUN_005af0e0(param_1,param_2,iVar5,piVar6,&local_58,param_5,&local_48,param_6);
      local_8 = local_50;
      local_4 = local_4c;
      local_10 = 0;
      local_c = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = local_58;
      local_24 = local_54;
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = local_58;
      local_20.bottom = local_54;
      OffsetRect(&local_20,-*(int *)(iVar5 + 0x5c),-*(int *)(iVar5 + 0x60));
      local_68 = piVar6[0x10c];
      piVar2 = (int *)*piVar6;
      local_6c = local_68;
      if (local_68 == 0) {
        uVar7 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
        local_6c = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      }
      piVar8 = (int *)piVar6[0x10b];
      if (piVar8 == (int *)0x0) {
        if (piVar2[4] == 0) {
          if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_005af9a3;
          iVar11 = *piVar2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
        }
        else {
          if (piVar2[4] == 3) {
            piVar8 = piVar2 + 0xd;
            goto LAB_005af9ae;
          }
LAB_005af9a3:
          iVar11 = *piVar2 + piVar2[8] * 4;
        }
        piVar8 = (int *)(iVar11 + (int)piVar2);
      }
LAB_005af9ae:
      if (local_68 == 0) {
        uVar7 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
        local_68 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      }
      piVar3 = (int *)*local_78;
      iVar11 = local_78[0x10c];
      if (iVar11 == 0) {
        uVar7 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
        iVar11 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      }
      piVar9 = (int *)local_78[0x10b];
      if (piVar9 == (int *)0x0) {
        if (piVar3[4] == 0) {
          if (((piVar3[8] != 0) || (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_005afa5a;
          piVar9 = (int *)(*piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar3);
        }
        else if (piVar3[4] == 3) {
          piVar9 = piVar3 + 0xd;
        }
        else {
LAB_005afa5a:
          piVar9 = (int *)(*piVar3 + piVar3[8] * 4 + (int)piVar3);
        }
      }
      iVar10 = local_78[0x10c];
      if (iVar10 == 0) {
        uVar7 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
        iVar10 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
      }
      FUN_005b2370((int *)((piVar3[2] + -1) * iVar10 + (int)piVar9),&local_10,-iVar11,&local_20,0,0,
                   0,0,(int *)((piVar2[2] + -1) * local_68 + (int)piVar8),&local_30,-local_6c,
                   &local_30,(-(uint)(*(int *)(param_1 + 0x30) != 0x20) & 0xfffffff4) + 0x10,
                   *(undefined4 *)(iVar5 + 100),iVar5 + 0x68,param_2 + 0x13d4);
      (*(code *)piVar6[0x114])(piVar6,piVar6[0x115],piVar6[0x116]);
      local_70 = local_70 + 1;
    } while (local_70 < iVar4);
  }
  local_38 = *(undefined4 *)(*local_78 + 4);
  local_34 = *(undefined4 *)(*local_78 + 8);
  local_40 = *(undefined4 *)(*param_5 + 4);
  local_3c = *(undefined4 *)(*param_5 + 8);
  FUN_005af0e0(param_1,param_2,0,local_78,&local_38,param_5,&local_40,param_6);
  (*(code *)param_5[0x114])(param_5,param_5[0x115],param_5[0x116]);
  *unaff_retaddr = local_78;
  return local_68;
}


