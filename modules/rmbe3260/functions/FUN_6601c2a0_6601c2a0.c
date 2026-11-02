/* Module: rmbe3260.dll
   Function: FUN_6601c2a0
   Address: 6601c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6601c448) */
/* WARNING: Removing unreachable block (ram,0x6601c4b2) */

int FUN_6601c2a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_stack_ffffff88;
  int local_38 [5];
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1;
  if ((((*(int *)(param_1 + 0x6c) == 0) || (*(int **)(param_1 + 0x68) == (int *)0x0)) ||
      (*(int *)(param_1 + 100) == 0)) || (*(int *)(param_1 + 0x70) == 0)) {
    return -0x7ffbfff9;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    return -0x7ffbfda8;
  }
  if (((*(int *)(param_1 + 0x98) == 0) && (*(int *)(param_1 + 0x9c) == 0)) &&
     ((*(int *)(param_1 + 0xa0) == 0 &&
      ((*(int *)(param_1 + 0xa4) == 0 && (*(int *)(param_1 + 0xa8) == 0)))))) {
    return -0x7ffbfda9;
  }
  (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x68) + 0x14))();
  iVar3 = **(int **)(param_1 + 0x68);
  FUN_6605bc10((void *)(param_1 + 0xd4),0xff);
  iVar3 = (**(code **)(iVar3 + 0x1c))();
  FUN_6605bc90((void *)(param_1 + 0xd4),-1);
  if ((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0xb8) == 0)) {
    return -0x7ffbfdba;
  }
  if (-1 < iVar3) {
    if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
      local_18 = (int *)0x0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1ca) + 0xc))();
      FUN_660143a0(&local_24,(undefined4 *)s_01VR0_6606c2bc);
      iVar4 = FUN_66004760();
      if (iVar4 != 0) {
        FUN_66051690(&local_24);
      }
      if ((((-1 < iVar3) && (iVar3 = (**(code **)(*local_18 + 0x10))(), -1 < iVar3)) &&
          (iVar3 = (**(code **)(iRam00000000 + 0xc))(), -1 < iVar3)) &&
         ((local_24 == local_14 && (local_20 == local_10)))) {
        iVar3 = -0x7ff8ffa9;
      }
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
    }
    if (-1 < iVar3) {
      if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
        iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x6c))();
        local_20 = (int *)0x0;
        if (-1 < iVar4) {
          iVar4 = (**(code **)(iRam00000000 + 0x30))();
        }
        if ((-1 < iVar4) && (local_20 < (int *)0x6)) {
          local_18 = (int *)0x0;
          local_10 = (int *)0x0;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x78) + 0x10))();
          if (-1 < iVar4) {
            iVar4 = (**(code **)*local_10)();
            local_8 = 0;
            local_c = 0;
            if (-1 < iVar4) {
              iVar4 = (**(code **)(*local_18 + 0x34))();
            }
            if ((local_8 == 0) && (local_c == 0)) {
              iVar4 = (**(code **)(*local_18 + 0xc))();
            }
            if (((-1 < iVar4) && (0x280 < local_8)) || (0x1e0 < local_c)) {
              iVar3 = -0x7ffbfd98;
            }
          }
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 8))();
            local_10 = (int *)0x0;
          }
          if (local_18 != (int *)0x0) {
            (**(code **)(*local_18 + 8))();
          }
        }
      }
      if (-1 < iVar3) {
        FUN_660522e0(local_38);
        FUN_66052330(local_38,*(char **)(param_1 + 200));
        iVar4 = FUN_66052600((int)local_38);
        if (iVar4 == 0) {
          FUN_660525e0(local_38);
        }
        FUN_66052300(local_38);
        if (((-1 < iVar3) && (FUN_6601dab0(param_1 + -0x10), -1 < iVar3)) &&
           (iVar3 = (**(code **)(*(int *)(param_1 + -0x10) + 0x28))(), -1 < iVar3)) {
          *(undefined4 *)(param_1 + 0xbc) = 1;
        }
      }
    }
  }
  local_1c = (int *)0x0;
  iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x1c6))();
  if (-1 < iVar4) {
    in_stack_ffffff88 = (int *)0x6601c5f5;
    (**(code **)(*local_1c + 0x10))();
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
      local_1c = (int *)0x0;
    }
  }
  if (-1 < iVar3) {
    if (*(int *)(param_1 + 0xb8) != 0) {
      *(undefined4 *)(param_1 + 0x1ce) = 0;
      iVar3 = FUN_6601d130(param_1 + -0x10);
    }
    if ((-1 < iVar3) && (*(int *)(param_1 + 0xac) != 0)) {
      *(undefined4 *)(param_1 + 0x1ce) = 0;
      iVar3 = FUN_6601d510((void *)(param_1 + -0x10),(int *)(param_1 + 0xf8));
      if (-1 < iVar3) {
        FUN_6605b670(&stack0xffffff88,(int *)(param_1 + 0xf8));
        iVar3 = FUN_6601ce80((void *)(param_1 + -0x10),(int *)(param_1 + 0x60),
                             (int)in_stack_ffffff88);
      }
    }
  }
  piVar1 = (int *)(param_1 + 0x98);
  param_1._0_2_ = 0;
  if ((*piVar1 != 0) && (-1 < iVar3)) {
    if (*(int *)(iVar2 + 0xac) == 0) {
      iVar3 = FUN_6601d510((void *)(iVar2 + -0x10),(int *)(iVar2 + 0xe0));
      if (-1 < iVar3) {
        FUN_6605b670(&stack0xffffff88,(int *)(iVar2 + 0xe0));
        iVar3 = FUN_6601ce80((void *)(iVar2 + -0x10),(int *)(iVar2 + 0x58),(int)in_stack_ffffff88);
        if (-1 < iVar3) {
          in_stack_ffffff88 = (int *)0x6601c6ca;
          iVar3 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x74) + 0x48) + 0x10))();
        }
      }
    }
    else {
      in_stack_ffffff88 = (int *)0x6601cb88;
      iVar3 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x74) + 0x48) + 0x10))();
    }
    if (-1 < iVar3) {
      (**(code **)(**(int **)(iVar2 + 0x74) + 0x40))();
      in_stack_ffffff88 = *(int **)(iVar2 + 0x74);
      iVar3 = (**(code **)(*in_stack_ffffff88 + 0x28))();
      if (-1 < iVar3) {
        in_stack_ffffff88 = (int *)0x6601c701;
        iVar3 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x74) + 0x48) + 0x18))();
      }
    }
  }
  if ((*(int *)(iVar2 + 0x9c) != 0) && (-1 < iVar3)) {
    if (*(int *)(iVar2 + 0xac) == 0) {
      iVar3 = FUN_6601d510((void *)(iVar2 + -0x10),(int *)(iVar2 + 0xec));
      if (-1 < iVar3) {
        FUN_6605b670(&stack0xffffff88,(int *)(iVar2 + 0xec));
        iVar3 = FUN_6601ce80((void *)(iVar2 + -0x10),(int *)(iVar2 + 0x5c),(int)in_stack_ffffff88);
        if (-1 < iVar3) {
          iVar3 = *(int *)(*(int *)(iVar2 + 0x78) + 0x48);
          goto LAB_6601c779;
        }
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x78) + 0x48);
LAB_6601c779:
      iVar3 = (**(code **)(iVar3 + 0x10))();
      if (-1 < iVar3) {
        if (*(int *)(iVar2 + 0x1ce) == 1) {
          FUN_6601dbd0(iVar2 + -0x10);
          FUN_6601d390(iVar2 + -0x10);
        }
        (**(code **)(**(int **)(iVar2 + 0x78) + 0x40))();
        if ((*(int *)(iVar2 + 0x1ce) == 1) || (*(int *)(iVar2 + 0x1ce) == 2)) {
          (**(code **)(**(int **)(iVar2 + 0x78) + 0x74))(*(int **)(iVar2 + 0x78));
        }
        iVar3 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x28))();
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x78) + 0x48) + 0x18))();
          param_1._0_2_ = (short)local_20;
        }
      }
    }
  }
  if (*(int *)(iVar2 + 0x1c6) == 0) {
LAB_6601c80a:
    if (((-1 < iVar3) && (local_20 = *(int **)(iVar2 + 0x1e6), local_20 != (int *)0x0)) &&
       (local_20[4] != 0)) {
      iVar4 = *(int *)(iVar2 + 0x80);
      if (*(undefined4 **)(iVar4 + 0x44) != (undefined4 *)0x0) {
        FUN_6603c1b0(*(undefined4 **)(iVar4 + 0x44));
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      *(int **)(iVar4 + 0x44) = local_20;
      if (local_20 != (int *)0x0) {
        FUN_6603c1a0((int)local_20);
      }
      iVar4 = *(int *)(iVar2 + 0x78);
      local_20 = *(int **)(iVar2 + 0x1e6);
      if (*(undefined4 **)(iVar4 + 0x44) != (undefined4 *)0x0) {
        FUN_6603c1b0(*(undefined4 **)(iVar4 + 0x44));
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      *(int **)(iVar4 + 0x44) = local_20;
      if (local_20 != (int *)0x0) {
        FUN_6603c1a0((int)local_20);
      }
      iVar4 = *(int *)(iVar2 + 0x74);
      local_20 = *(int **)(iVar2 + 0x1e6);
      if (*(undefined4 **)(iVar4 + 0x44) != (undefined4 *)0x0) {
        FUN_6603c1b0(*(undefined4 **)(iVar4 + 0x44));
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      *(int **)(iVar4 + 0x44) = local_20;
      if (local_20 != (int *)0x0) {
        FUN_6603c1a0((int)local_20);
      }
      iVar4 = *(int *)(iVar2 + 0x7c);
      local_20 = *(int **)(iVar2 + 0x1e6);
      if (*(undefined4 **)(iVar4 + 0x44) != (undefined4 *)0x0) {
        FUN_6603c1b0(*(undefined4 **)(iVar4 + 0x44));
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      *(int **)(iVar4 + 0x44) = local_20;
      if (local_20 != (int *)0x0) {
        FUN_6603c1a0((int)local_20);
      }
    }
  }
  else if (-1 < iVar3) {
    param_1._0_2_ = (short)param_1 + 1;
    goto LAB_6601c80a;
  }
  if ((*(int *)(iVar2 + 0xa0) != 0) && (-1 < iVar3)) {
    FUN_66015cc0(*(void **)(iVar2 + 0x7c),(short)param_1);
    FUN_66015c70(*(void **)(iVar2 + 0x7c),FUN_6601f2a0,iVar2 + -0x10);
    param_1._0_2_ = (short)param_1 + 1;
    (**(code **)(**(int **)(iVar2 + 0x7c) + 0x40))();
    iVar3 = (**(code **)(**(int **)(iVar2 + 0x7c) + 0x28))();
  }
  if ((*(int *)(iVar2 + 0xa4) != 0) && (-1 < iVar3)) {
    FUN_66015cc0(*(void **)(iVar2 + 0x80),(short)param_1);
    FUN_66015c70(*(void **)(iVar2 + 0x80),FUN_6601f2a0,iVar2 + -0x10);
    (**(code **)(**(int **)(iVar2 + 0x80) + 0x40))();
    iVar3 = (**(code **)(**(int **)(iVar2 + 0x80) + 0x28))();
  }
  if (*(int *)(iVar2 + 0xa8) != 0) {
    if (iVar3 < 0) goto LAB_6601cad4;
    iVar3 = (**(code **)(**(int **)(iVar2 + 0x84) + 0x28))();
  }
  if (-1 < iVar3) {
    if (*(int *)(iVar2 + 0xb8) != 0) {
      iVar3 = FUN_6601e0a0(iVar2 + -0x10);
    }
    if (-1 < iVar3) {
      if (*(int *)(iVar2 + 0xb8) != 0) {
        if (*(int *)(iVar2 + 0x58) != 0) {
          iVar3 = FUN_6603c130(*(int *)(iVar2 + 0x58));
          iVar3 = FUN_660157a0(iVar3);
        }
        if ((*(int *)(iVar2 + 0x5c) != 0) && (-1 < iVar3)) {
          iVar3 = FUN_6603c130(*(int *)(iVar2 + 0x5c));
          iVar3 = FUN_660157a0(iVar3);
        }
        if (*(int *)(iVar2 + 0x60) != 0) {
          if (iVar3 < 0) goto LAB_6601cad4;
          iVar3 = FUN_6603c130(*(int *)(iVar2 + 0x60));
          iVar3 = FUN_660157a0(iVar3);
        }
      }
      if (((-1 < iVar3) && (iVar3 = (**(code **)(*(int *)(iVar2 + 0x30) + 0x1c))(), -1 < iVar3)) &&
         (*(int *)(iVar2 + 0xb4) != 0)) {
        puVar5 = FUN_6604fb50(0);
        *(undefined4 **)(iVar2 + 0x120) = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          return -0x7ff8fff2;
        }
        *(undefined4 *)(iVar2 + 0x124) = 0;
        *(undefined4 *)(iVar2 + 0x128) = 0;
        iVar3 = (**(code **)(**(int **)(iVar2 + 0x120) + 0x14))(*(undefined4 *)(iVar2 + 0xd4));
        if (iVar3 < 0) {
          iVar3 = (**(code **)(**(int **)(iVar2 + 0x120) + 0x14))(*(undefined4 *)(iVar2 + 0xd4));
          *(undefined4 *)(iVar2 + 0x124) = 1;
          if (iVar3 < 0) {
            iVar3 = -0x7ffbfdb8;
          }
        }
      }
    }
  }
LAB_6601cad4:
  if (iVar3 == 0x40012) {
    iVar3 = 0;
  }
  if (iVar3 < 0) {
    (**(code **)(*(int *)(iVar2 + -0x10) + 0x40))();
    (**(code **)(*(int *)(iVar2 + -0x10) + 0x3c))();
    FUN_6601dab0(iVar2 + -0x10);
    *(undefined4 *)(iVar2 + 0xbc) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc0) = 1;
    FUN_6601dda0(iVar2 + -0x10);
    if ((((*(int *)(iVar2 + 0xb8) != 0) && (*(int *)(iVar2 + 0xa0) != 0)) &&
        ((*(int *)(iVar2 + 0x98) == 0 &&
         ((*(int *)(iVar2 + 0x9c) == 0 && (*(int *)(iVar2 + 0x7c) != 0)))))) &&
       (*(int *)(iVar2 + 0x68) != 0)) {
      FUN_6601c1f0(iVar2 + -0x10);
      return iVar3;
    }
  }
  return iVar3;
}


