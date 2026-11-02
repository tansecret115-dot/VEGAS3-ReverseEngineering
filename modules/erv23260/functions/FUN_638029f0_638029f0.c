/* Module: erv23260.dll
   Function: FUN_638029f0
   Address: 638029f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638029f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  byte bVar10;
  int local_10;
  int local_c;
  int local_8;
  
  puVar6 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  iVar8 = 3;
  switch(*param_1) {
  case 2:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0xf0 + (int)this);
        return 0;
      }
      iVar8 = FUN_638037a0(this,local_10,local_c,local_8);
      if ((iVar8 == 0) && (local_c <= local_8)) {
        do {
          *(int *)(local_c * 0x77c + 0xf0 + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 3:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0xf4 + (int)this);
        return 0;
      }
      if (local_c <= local_8) {
        do {
          *(int *)(local_c * 0x77c + 0xf4 + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 4:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0xf8 + (int)this);
        return 0;
      }
      iVar8 = FUN_638037f0(this,local_10);
      if ((iVar8 == 0) && (local_c <= local_8)) {
        do {
          *(int *)(local_c * 0x77c + 0xf8 + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 5:
    if (param_1[1] == 10) {
      if (1 < *(int *)((int)this + 0x80)) {
        return 3;
      }
      if (*(char *)((int)this + 0x7c5) != '\0') {
        return 3;
      }
      iVar8 = FUN_638038a0((int)this);
      if (iVar8 == 0) {
        *(undefined4 *)((int)this + 400) = 0;
        *(undefined1 *)((int)this + 0x6f0) = 1;
        *(undefined1 *)((int)this + 0x6f1) = 0xa4;
        *(undefined1 *)((int)this + 0x7c5) = 1;
        return 0;
      }
    }
    else if (param_1[1] == 0xb) {
      *(undefined4 *)((int)this + 400) = 0xffffffff;
      *(undefined1 *)((int)this + 0x6f0) = 1;
      *(undefined1 *)((int)this + 0x6f1) = 0xb4;
      *(undefined1 *)((int)this + 0x7c5) = 0;
      return 0;
    }
    break;
  case 6:
    iVar8 = param_1[1];
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        return 3;
      }
      if (iVar8 == 2) {
        param_1[2] = 0;
        return 0;
      }
      return 3;
    }
    goto LAB_63803665;
  case 8:
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x81c) = 0;
      *(undefined4 *)((int)this + 0x820) = 0;
      *(undefined4 *)((int)this + 0x824) = 0;
      return 0;
    }
    if (iVar2 == 1) {
      if (1 < *(int *)((int)this + 0x80)) {
        return 5;
      }
      if (((param_1[2] != 0) || (param_1[3] != 0)) &&
         (iVar8 = FUN_63802830(this,param_1[2],param_1[3]), iVar8 == 0)) {
        return 7;
      }
      *(undefined4 *)((int)this + 0x81c) = 1;
      *(undefined4 *)((int)this + 0x820) = puVar6[2];
      *(undefined4 *)((int)this + 0x824) = puVar6[3];
      return 0;
    }
    if (iVar2 == 2) {
      param_1[1] = (uint)(*(int *)((int)this + 0x81c) != 0);
      param_1[2] = *(undefined4 *)((int)this + 0x820);
      param_1[3] = *(undefined4 *)((int)this + 0x824);
      return 0;
    }
    break;
  case 0xb:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0xfc + (int)this);
        return 0;
      }
      if (local_c <= local_8) {
        do {
          *(int *)(local_c * 0x77c + 0xfc + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 0xc:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0x100 + (int)this);
        return 0;
      }
      iVar8 = FUN_63803810(this,local_10,local_c,local_8);
      if ((iVar8 == 0) && (local_c <= local_8)) {
        do {
          *(int *)(local_c * 0x77c + 0x100 + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 0xd:
    piVar1 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802630(this,(int *)&param_1,&local_c,&local_8,*piVar1,&local_10);
    if (iVar8 == 0) {
      if (puVar6[1] == 2) {
        puVar6[2] = *(undefined4 *)((int)param_1 * 0x77c + 0xec + (int)this);
        return 0;
      }
      if (local_c <= local_8) {
        do {
          *(int *)(local_c * 0x77c + 0xec + (int)this) = local_10;
          local_c = local_c + 1;
        } while (local_c <= local_8);
        return 0;
      }
    }
    break;
  case 0xe:
    iVar8 = param_1[1];
    if (iVar8 == 0) {
      iVar8 = FUN_63803760(this,0);
      if (iVar8 == 0) {
        *(undefined4 *)((int)this + 0x80c) = 0;
        return 0;
      }
    }
    else {
      if (iVar8 != 1) {
        if (iVar8 == 2) {
          param_1[2] = *(undefined4 *)((int)this + 0x80c);
          return 0;
        }
        return 3;
      }
      iVar8 = FUN_63803760(this,1);
      if (iVar8 == 0) {
        *(undefined4 *)((int)this + 0x80c) = 1;
        return 0;
      }
    }
    break;
  case 0x10:
    iVar2 = param_1[1];
    if (iVar2 == -1) {
      param_1[2] = *(undefined4 *)((int)this + 0x828);
      return 0;
    }
    if (iVar2 == 1) {
      *(undefined4 *)((int)this + 0x828) = 1;
      return 0;
    }
    if (iVar2 == 2) {
      *(undefined4 *)((int)this + 0x828) = 2;
      return 0;
    }
    break;
  case 0x13:
    uVar4 = param_1[1];
    if ((uVar4 < 0x40) || (0x2580 < uVar4)) {
      return 10;
    }
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_638025b0(this,(int)param_1,&local_c,&local_8);
    if ((iVar8 == 0) && (local_c <= local_8)) {
      do {
        *(uint *)(local_c * 0x77c + 0x108 + (int)this) = uVar4;
        local_c = local_c + 1;
      } while (local_c <= local_8);
      return 0;
    }
    break;
  case 0x14:
    param_1 = (undefined4 *)param_1[2];
    iVar8 = FUN_63802600(this,(int *)&param_1);
    if (iVar8 == 0) {
      puVar6[1] = *(undefined4 *)((int)param_1 * 0x77c + 0x108 + (int)this);
      return 0;
    }
    break;
  case 0x16:
    iVar2 = param_1[1];
    iVar8 = 4;
    if (iVar2 == 1) {
      if (param_1[2] == 0x63609696) {
        *(undefined4 *)((int)this + 0x838) = 1;
        return 0;
      }
    }
    else if (iVar2 == 2) {
      if (param_1[2] == 0x49629802) {
        *(undefined4 *)((int)this + 0x83c) = 1;
        return 0;
      }
    }
    else if ((iVar2 == 3) && (param_1[2] == 0x10b02090)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x34) = 0;
      return 0;
    }
    break;
  case 0x1b:
    piVar1 = param_1 + 1;
    FUN_637fa630(*(void **)((int)this + 0x748),piVar1,param_1 + 2);
    if (*piVar1 != 0) {
      *piVar1 = *piVar1 + -1;
      return 0;
    }
    goto LAB_63803665;
  case 0x1d:
    uVar4 = param_1[1];
    param_1 = (undefined4 *)param_1[2];
    if (0x2580 < uVar4) {
      return 10;
    }
    iVar8 = FUN_638025b0(this,(int)param_1,&local_c,&local_8);
    if ((iVar8 == 0) && (local_c <= local_8)) {
      do {
        *(uint *)(local_c * 0x77c + 0x10c + (int)this) = uVar4;
        local_c = local_c + 1;
      } while (local_c <= local_8);
      return 0;
    }
    break;
  case 0x20:
    if (*(int **)((int)this + 0x8a8) != (int *)0x0) {
      iVar8 = (**(code **)(**(int **)((int)this + 0x8a8) + 0x24))(param_1);
      return iVar8;
    }
    break;
  case 0x21:
    if (param_1[3] == 0) {
      return 6;
    }
    if (param_1[1] == 3) {
      iVar8 = FUN_638025b0(this,param_1[2],&local_c,&local_8);
      if (iVar8 == 0) {
        piVar1 = (int *)puVar6[3];
        iVar2 = *piVar1;
        if (iVar2 == 3) {
          bVar3 = true;
        }
        else if (((piVar1[1] < 0) || (10000 < piVar1[1])) ||
                (((iVar2 != 2 && ((iVar2 != 1 || (piVar1[2] == 0)))) &&
                 ((iVar2 != 0 || (((piVar1[2] == 0 || (piVar1[3] == 0)) || (piVar1[4] == 0)))))))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return 10;
        }
        if ((*piVar1 != 3) && (*piVar1 != 2)) {
          return 3;
        }
        if (local_c <= local_8) {
          do {
            puVar7 = (undefined4 *)puVar6[3];
            puVar9 = (undefined4 *)(local_c * 0x77c + 0xd8 + (int)this);
            for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            local_c = local_c + 1;
          } while (local_c <= local_8);
          return 0;
        }
      }
    }
    else {
      if (param_1[1] != 2) {
        return 3;
      }
      iVar8 = FUN_63802600(this,param_1 + 2);
      if (iVar8 == 0) {
        puVar7 = (undefined4 *)((int)param_1 * 0x77c + 0xd8 + (int)this);
        puVar6 = (undefined4 *)puVar6[3];
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        return 0;
      }
    }
    break;
  case 0x22:
    *(undefined1 *)((int)this + 0x841) = 1;
    return 0;
  case 0x23:
    if (param_1[1] == 2) {
      param_1[2] = (uint)*(byte *)((int)this + 0x840);
      return 0;
    }
    if (param_1[1] == 3) {
      *(bool *)((int)this + 0x840) = param_1[2] != 0;
      return 0;
    }
switchD_638034ce_default:
    return 3;
  case 0x24:
    if (8 < (uint)param_1[1]) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x844) = param_1[1];
    uVar4 = 0;
    if ((param_1[1] & 0x7fffffff) != 0) {
      puVar6 = (undefined4 *)((int)this + 0x848);
      do {
        uVar4 = uVar4 + 1;
        *puVar6 = *(undefined4 *)(param_1[2] + -4 + uVar4 * 4);
        puVar6 = puVar6 + 1;
      } while (uVar4 < (uint)(param_1[1] << 1));
    }
    iVar8 = (**(code **)(**(int **)((int)this + 0x8a8) + 0x24))(param_1);
    return iVar8;
  case 0x26:
    switch(param_1[1]) {
    case 0:
      (**(code **)**(undefined4 **)((int)this + 0x8d0))(0);
      return 0;
    case 1:
      (**(code **)**(undefined4 **)((int)this + 0x8d0))(1);
      return 0;
    case 2:
      param_1[2] = 0;
      iVar8 = (**(code **)(**(int **)((int)this + 0x8d0) + 4))();
      if (iVar8 != 0) {
        uVar4 = (**(code **)(**(int **)((int)this + 0x8d0) + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar6[2] = puVar6[2] | 1;
        }
        if ((uVar4 & 2) != 0) {
          puVar6[2] = puVar6[2] | 2;
        }
        if ((uVar4 & 4) != 0) {
          puVar6[2] = puVar6[2] | 4;
          return 0;
        }
      }
      break;
    case 3:
      uVar4 = param_1[2];
      if (uVar4 == 0) {
        return 1;
      }
      if ((uVar4 & 0xfffffff8) == 0) {
        bVar10 = (uVar4 & 1) != 0;
        if ((uVar4 & 2) != 0) {
          bVar10 = bVar10 | 2;
        }
        if ((uVar4 & 4) != 0) {
          bVar10 = bVar10 | 4;
        }
        iVar8 = (**(code **)(**(int **)((int)this + 0x8d0) + 0xc))(bVar10);
        if (iVar8 != 0) {
          return 3;
        }
        return 1;
      }
      return 1;
    default:
      goto switchD_638034ce_default;
    }
    goto LAB_63803665;
  case 0x27:
    iVar8 = param_1[1];
    if (iVar8 == 0) {
      *(undefined4 *)((int)this + 0x888) = 0;
      return 0;
    }
    if (iVar8 == 1) {
      *(undefined4 *)((int)this + 0x888) = 1;
      return 0;
    }
    if (iVar8 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x888);
      return 0;
    }
    return 3;
  case 0x28:
    if ((*(int *)((int)this + 0x8c0) != 0) &&
       ((uint)(param_1[3] * param_1[2]) <= *(uint *)((int)this + 0x8c8))) {
      *(undefined4 *)((int)this + 0x8c4) = 1;
      uVar4 = 0;
      if (param_1[3] * param_1[2] == 0) {
        return 0;
      }
      while ((bVar10 = *(byte *)(uVar4 + param_1[1]), bVar10 != 0 && (bVar10 < 0x20))) {
        uVar5 = uVar4 + 1;
        *(byte *)(uVar4 + *(int *)((int)this + 0x8c0)) = bVar10;
        uVar4 = uVar5;
        if ((uint)(param_1[3] * param_1[2]) <= uVar5) {
          return 0;
        }
      }
    }
    *(undefined4 *)((int)this + 0x8c4) = 0;
    return 1;
  case 0x29:
    iVar8 = param_1[1];
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        *(undefined1 *)((int)this + 0x88c) = 1;
        return 0;
      }
      if (iVar8 != 2) {
        return 3;
      }
      param_1[2] = (uint)*(byte *)((int)this + 0x88c);
      return 0;
    }
    *(undefined1 *)((int)this + 0x88c) = 0;
LAB_63803665:
    iVar8 = 0;
    break;
  case 0x65:
    param_1[1] = *(undefined4 *)((int)this + 0x78);
    return 0;
  }
  return iVar8;
}


