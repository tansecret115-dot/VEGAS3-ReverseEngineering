/* Module: erv33260.dll
   Function: FUN_67072c10
   Address: 67072c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67072c10(void *this,undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  byte bVar10;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puVar6 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  iVar3 = 3;
  switch(*param_1) {
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    return 3;
  case 4:
    piVar7 = param_1 + 1;
    param_1 = (undefined4 *)param_1[2];
    iVar3 = FUN_67072960(this,(int *)&param_1,&local_10,&local_c,*piVar7,&local_8);
    if (iVar3 == 0) {
      if (puVar6[1] != 2) {
        *(undefined4 *)((int)this + 0xec) = local_8;
        return 0;
      }
      puVar6[2] = *(undefined4 *)((int)this + 0xec);
      return 0;
    }
    break;
  case 6:
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        return 3;
      }
      if (iVar3 == 2) {
        param_1[2] = 0;
        return 0;
      }
      return 3;
    }
    goto LAB_6707324a;
  case 8:
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x294) = 0;
      *(undefined4 *)((int)this + 0x298) = 0;
      *(undefined4 *)((int)this + 0x29c) = 0;
      return 0;
    }
    if (iVar1 == 1) {
      if (1 < *(int *)((int)this + 0x80)) {
        return 5;
      }
      if (((param_1[2] != 0) || (param_1[3] != 0)) &&
         (iVar3 = FUN_67072af0(param_1[2],param_1[3]), iVar3 == 0)) {
        return 7;
      }
      *(undefined4 *)((int)this + 0x294) = 1;
      *(undefined4 *)((int)this + 0x298) = puVar6[2];
      *(undefined4 *)((int)this + 0x29c) = puVar6[3];
      return 0;
    }
    if (iVar1 == 2) {
      param_1[1] = (uint)(*(int *)((int)this + 0x294) != 0);
      param_1[2] = *(undefined4 *)((int)this + 0x298);
      param_1[3] = *(undefined4 *)((int)this + 0x29c);
      return 0;
    }
    break;
  case 0x10:
    iVar1 = param_1[1];
    if (iVar1 == -1) {
      param_1[2] = *(undefined4 *)((int)this + 0x2a0);
      return 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)((int)this + 0x2a0) = 1;
      return 0;
    }
    if (iVar1 == 2) {
      *(undefined4 *)((int)this + 0x2a0) = 2;
      return 0;
    }
    break;
  case 0x13:
    uVar4 = param_1[1];
    if ((0x3f < uVar4) && (uVar4 < 0x2581)) {
      *(uint *)((int)this + 0xf4) = uVar4;
      return 0;
    }
    return 10;
  case 0x14:
    param_1[1] = *(undefined4 *)((int)this + 0xf4);
    return iVar3;
  case 0x16:
    iVar1 = param_1[1];
    iVar3 = 4;
    if (iVar1 == 1) {
      if (param_1[2] == 0x63609696) {
        *(undefined4 *)((int)this + 0x2b4) = 1;
        return 0;
      }
    }
    else if (iVar1 == 2) {
      if (param_1[2] == 0x49629802) {
        *(undefined4 *)((int)this + 0x2b8) = 1;
        return 0;
      }
    }
    else if ((iVar1 == 3) && (param_1[2] == 0x10b02090)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x34) = 0;
      return 0;
    }
    break;
  case 0x1b:
    piVar7 = param_1 + 1;
    FUN_6707acf0(*(void **)((int)this + 0x1c4),piVar7,param_1 + 2);
    if (*piVar7 != 0) {
      *piVar7 = *piVar7 + -1;
      return 0;
    }
    goto LAB_6707324a;
  case 0x1d:
    if ((uint)param_1[1] < 0x2581) {
      *(undefined4 *)((int)this + 0xf8) = param_1[1];
      return 0;
    }
    return 10;
  case 0x20:
    if (param_1[1] == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x25c);
      return 0;
    }
    if (param_1[1] == 3) {
      iVar3 = FUN_67079900((void *)((int)this + 600),param_1[2]);
      return iVar3;
    }
    break;
  case 0x21:
    if (param_1[3] == 0) {
      return 6;
    }
    if (param_1[1] == 3) {
      iVar3 = FUN_670728e0(this,param_1[2],&local_10,&local_c);
      if (iVar3 == 0) {
        piVar7 = (int *)puVar6[3];
        iVar3 = *piVar7;
        if (iVar3 == 3) {
          bVar2 = true;
        }
        else if (((piVar7[1] < 0) || (10000 < piVar7[1])) ||
                (((iVar3 != 2 && ((iVar3 != 1 || (piVar7[2] == 0)))) &&
                 ((iVar3 != 0 || (((piVar7[2] == 0 || (piVar7[3] == 0)) || (piVar7[4] == 0)))))))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 10;
        }
        if ((*piVar7 != 3) && (*piVar7 != 2)) {
          return 3;
        }
        piVar9 = (int *)((int)this + 0xd8);
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        return 0;
      }
    }
    else {
      if (param_1[1] != 2) {
        return 3;
      }
      iVar3 = FUN_67072930(this,param_1 + 2);
      if (iVar3 == 0) {
        puVar8 = (undefined4 *)((int)this + 0xd8);
        puVar6 = (undefined4 *)puVar6[3];
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 1;
        }
        return 0;
      }
    }
    break;
  case 0x22:
    *(undefined1 *)((int)this + 0x2bd) = 1;
    return 0;
  case 0x23:
    if (param_1[1] == 2) {
      param_1[2] = (uint)*(byte *)((int)this + 700);
      return 0;
    }
    if (param_1[1] != 3) {
      return 3;
    }
    *(bool *)((int)this + 700) = param_1[2] != 0;
    return 0;
  case 0x24:
    if (8 < (uint)param_1[1]) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x2c0) = param_1[1];
    uVar4 = 0;
    if ((param_1[1] & 0x7fffffff) != 0) {
      puVar6 = (undefined4 *)((int)this + 0x2c4);
      do {
        uVar4 = uVar4 + 1;
        *puVar6 = *(undefined4 *)(param_1[2] + -4 + uVar4 * 4);
        puVar6 = puVar6 + 1;
      } while (uVar4 < (uint)(param_1[1] << 1));
      return 0;
    }
    goto LAB_6707324a;
  case 0x26:
    switch(param_1[1]) {
    case 0:
      (**(code **)**(undefined4 **)((int)this + 0x340))(0);
      break;
    case 1:
      (**(code **)**(undefined4 **)((int)this + 0x340))(1);
      break;
    case 2:
      param_1[2] = 0;
      iVar3 = (**(code **)(**(int **)((int)this + 0x340) + 4))();
      if (iVar3 != 0) {
        uVar4 = (**(code **)(**(int **)((int)this + 0x340) + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar6[2] = puVar6[2] | 1;
        }
        if ((uVar4 & 2) != 0) {
          puVar6[2] = puVar6[2] | 2;
        }
        if ((uVar4 & 4) != 0) {
          puVar6[2] = puVar6[2] | 4;
        }
      }
      break;
    case 3:
      uVar4 = param_1[2];
      if ((uVar4 != 0) && ((uVar4 & 0xfffffff8) == 0)) {
        bVar10 = (uVar4 & 1) != 0;
        if ((uVar4 & 2) != 0) {
          bVar10 = bVar10 | 2;
        }
        if ((uVar4 & 4) != 0) {
          bVar10 = bVar10 | 4;
        }
        (**(code **)(**(int **)((int)this + 0x340) + 0xc))(bVar10);
      }
    }
  case 0x6c:
    (**(code **)(**(int **)((int)this + 0x16c) + 0x30))(puVar6[1],puVar6[2]);
LAB_6707324a:
    iVar3 = 0;
    break;
  case 0x27:
    iVar3 = param_1[1];
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x304) = 0;
      return 0;
    }
    if (iVar3 == 1) {
      *(undefined4 *)((int)this + 0x304) = 1;
      return 0;
    }
    if (iVar3 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x304);
      return 0;
    }
    return 3;
  case 0x28:
    if ((*(undefined4 **)((int)this + 0x330) != (undefined4 *)0x0) &&
       (uVar4 = param_1[2] * param_1[3], uVar4 <= *(uint *)((int)this + 0x338))) {
      puVar6 = (undefined4 *)param_1[1];
      puVar8 = *(undefined4 **)((int)this + 0x330);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined4 *)((int)this + 0x334) = 1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x334) = 0;
    return 1;
  case 0x65:
    param_1[1] = *(undefined4 *)((int)this + 0x78);
    return 0;
  }
  return iVar3;
}


