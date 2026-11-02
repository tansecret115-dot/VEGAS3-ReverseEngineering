/* Module: encn3260.dll
   Function: FUN_66487ed0
   Address: 66487ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66487ed0(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  byte *local_8;
  
  iVar6 = 0;
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 != 1) {
    if ((param_1[1] != 0) || (param_1[2] != 0)) {
      if (DAT_664df578 < param_1[1]) {
        iVar6 = FUN_66486b30(this,(int)param_1);
        goto LAB_66488217;
      }
      if (param_1[2] <= DAT_664df57c) goto LAB_66487f2d;
    }
    iVar6 = FUN_66486b30(this,(int)param_1);
    goto LAB_66488217;
  }
LAB_66487f2d:
  uVar3 = (**(code **)(*param_1 + 4))();
  switch(uVar3) {
  case 1:
    pbVar4 = (byte *)param_1[0xd];
    local_8 = &DAT_664e25c4;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *local_8;
      if (bVar1 != *local_8) {
LAB_66487fa2:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_66487fa7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < local_8[1];
      if (bVar1 != local_8[1]) goto LAB_66487fa2;
      pbVar4 = pbVar4 + 2;
      local_8 = local_8 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_66487fa7:
    if (iVar2 == 0) {
      iVar6 = FUN_66486c80(this,param_1);
      break;
    }
    piVar5 = (int *)FUN_6648c530(this,param_1[3]);
    if (piVar5 == (int *)0x0) break;
    uVar3 = (**(code **)(*piVar5 + 4))();
    switch(uVar3) {
    case 6:
      iVar6 = FUN_66488550(this,param_1);
      (**(code **)*piVar5)(1);
      break;
    case 7:
      iVar6 = FUN_664884a0(this,(int)param_1);
      (**(code **)*piVar5)(1);
      break;
    case 8:
      iVar6 = FUN_66488360(this,param_1);
      (**(code **)*piVar5)(1);
      break;
    case 9:
      iVar6 = FUN_66489450(this,param_1);
      (**(code **)*piVar5)(1);
      break;
    case 10:
      iVar6 = FUN_66488800(this,(int)param_1);
      *(undefined4 *)((int)this + 0x74) = 0;
      (**(code **)*piVar5)(1);
      break;
    default:
      switch(*(undefined4 *)((int)this + 0x74)) {
      case 0:
        iVar6 = (**(code **)(*piVar5 + 4))();
        if (iVar6 != 2) {
          iVar6 = FUN_66486ac0(this,(int)param_1);
          (**(code **)*piVar5)(1);
          goto LAB_66488217;
        }
        iVar6 = FUN_66488a80(this,param_1,(int)piVar5);
        if (iVar6 != 0) break;
        goto LAB_664881fb;
      case 1:
        iVar6 = (**(code **)(*piVar5 + 4))();
        if (iVar6 == 2) {
          iVar6 = FUN_66488a80(this,param_1,(int)piVar5);
          (**(code **)*piVar5)(1);
          goto LAB_66488217;
        }
        if (iVar6 == 4) {
          iVar6 = FUN_66488970(this,param_1);
          if (iVar6 == 0) {
            *(undefined4 *)((int)this + 0x74) = 2;
            (**(code **)*piVar5)(1);
            goto LAB_66488217;
          }
        }
        else {
          if (iVar6 != 0xb) {
            iVar6 = FUN_66486ac0(this,(int)param_1);
            (**(code **)*piVar5)(1);
            goto LAB_66488217;
          }
          iVar6 = FUN_66488880(this,(int)param_1);
          if (iVar6 == 0) {
            *(undefined4 *)((int)this + 0x74) = 3;
            (**(code **)*piVar5)(1);
            goto LAB_66488217;
          }
        }
        break;
      case 2:
        iVar6 = (**(code **)(*piVar5 + 4))();
        if (iVar6 == 4) {
          iVar6 = FUN_66488970(this,param_1);
          (**(code **)*piVar5)(1);
          goto LAB_66488217;
        }
        if (iVar6 != 5) {
          iVar6 = FUN_66486ac0(this,(int)param_1);
          (**(code **)*piVar5)(1);
          goto LAB_66488217;
        }
        iVar6 = FUN_66486b90();
        goto joined_r0x664881f9;
      case 3:
        iVar6 = (**(code **)(*piVar5 + 4))();
        if (iVar6 != 5) {
          if (iVar6 == 0xb) {
            iVar6 = FUN_66488880(this,(int)param_1);
            (**(code **)*piVar5)(1);
          }
          else {
            iVar6 = FUN_66486ac0(this,(int)param_1);
            (**(code **)*piVar5)(1);
          }
          goto LAB_66488217;
        }
        iVar6 = FUN_66486b90();
joined_r0x664881f9:
        if (iVar6 == 0) {
LAB_664881fb:
          *(undefined4 *)((int)this + 0x74) = 1;
        }
      }
      (**(code **)*piVar5)(1);
      break;
    case 0xc:
      iVar6 = FUN_66489250(this,param_1);
      (**(code **)*piVar5)(1);
    }
    break;
  default:
    iVar6 = FUN_66486ac0(this,(int)param_1);
    break;
  case 3:
    iVar6 = FUN_66486d10(this,param_1);
    break;
  case 6:
    iVar6 = FUN_66486ba0(this,param_1);
    break;
  case 8:
    iVar6 = FUN_66486b90();
  }
LAB_66488217:
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return iVar6;
}


