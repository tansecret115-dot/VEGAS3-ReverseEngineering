/* Module: rmbe3260.dll
   Function: FUN_6605ae70
   Address: 6605ae70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6605ae70(int param_1,undefined4 param_2,int *param_3,uint param_4,uint param_5,uint param_6,
                uint *param_7,uint *param_8)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  uint *this;
  uint uVar15;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  this = (uint *)0x0;
  *param_8 = 0;
  uVar5 = param_4 + param_6;
  local_c = *(int *)(param_1 + 0x3c);
  uVar15 = param_5 + CARRY4(param_4,param_6);
  local_10 = 0;
  bVar2 = false;
  if (local_c == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      param_1 = 0x4025c;
      goto LAB_6605af09;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      param_1 = -0x7ffbfda0;
      goto LAB_6605af09;
    }
  }
  piVar6 = (int *)FUN_6605c600(local_c);
  this = (uint *)*piVar6;
  uVar13 = this[2] + (uint)CARRY4(this[1],*this);
  if ((uVar15 < uVar13) || ((uVar15 <= uVar13 && (uVar5 <= this[1] + *this)))) {
    param_1 = 0;
  }
  else {
    param_1 = (-(uint)(*(int *)(param_1 + 0x48) != 0) & 0xfffbfda4) + 0x4025c;
  }
LAB_6605af09:
  if (param_1 == 0) {
    local_c = *(int *)(iVar3 + 0x38);
    do {
      if (local_c == 0) goto LAB_6605af87;
      local_8 = local_c;
      puVar7 = (undefined4 *)FUN_6605c5e0(&local_c);
      this = (uint *)*puVar7;
      uVar13 = this[2];
      uVar14 = *this + this[1];
      uVar8 = uVar13 + CARRY4(*this,this[1]);
    } while (((param_5 < uVar13) || ((param_5 == uVar13 && (param_4 < this[1])))) ||
            ((uVar8 <= param_5 && ((uVar8 < param_5 || (uVar14 <= param_4))))));
    local_10 = local_8;
    if ((uVar8 <= uVar15) && ((uVar15 != uVar8 || (uVar14 < uVar5)))) {
      bVar2 = true;
    }
    param_1 = 0;
LAB_6605af87:
    if (local_10 == 0) {
      param_1 = -0x7ffbfda0;
    }
    if (param_1 == 0) {
      local_8 = 0;
      (**(code **)(*(int *)(iVar3 + -0x10) + 0x2c))(iVar3 + -0x10,param_2,&local_8,&local_c);
      uVar13 = this[3];
      iVar9 = param_4 - this[1];
      *param_8 = uVar13;
      if ((iVar9 != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
        iVar10 = ftol();
        *param_8 = uVar13 - iVar10;
      }
      if (bVar2) {
        uVar13 = iVar9 + param_6;
        if (*(uint *)(iVar3 + 8) < uVar13) {
          *(uint *)(iVar3 + 8) = uVar13;
          if (*(void **)(iVar3 + 4) != (void *)0x0) {
            operator_delete(*(void **)(iVar3 + 4));
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          pvVar11 = operator_new(*(uint *)(iVar3 + 8));
          *(void **)(iVar3 + 4) = pvVar11;
          if (pvVar11 == (void *)0x0) {
            param_1 = -0x7ff8fff2;
          }
        }
        if ((-1 < param_1) &&
           (param_1 = (**(code **)(*(int *)(iVar3 + -0x10) + 0x38))
                                (iVar3 + -0x10,local_10,*(undefined4 *)(iVar3 + 4),uVar13,param_7),
           -1 < param_1)) {
          uVar8 = *param_7;
          if (uVar8 < uVar13) {
            uVar14 = *(int *)(iVar3 + 8) - uVar8;
            uVar4 = (undefined1)*(undefined2 *)(iVar3 + 0x4c);
            puVar7 = (undefined4 *)(uVar8 + *(int *)(iVar3 + 4));
            for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar7 = CONCAT22(CONCAT11(uVar4,uVar4),CONCAT11(uVar4,uVar4));
              puVar7 = puVar7 + 1;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)puVar7 = uVar4;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            if ((((*(int *)(iVar3 + 0x4e) == 0x10) && ((*(uint *)(iVar3 + 4) & 1) == 0)) &&
                ((*param_7 & 1) == 0)) && ((*(byte *)(iVar3 + 8) & 1) == 0)) {
              iVar10 = *(int *)(iVar3 + 4);
              iVar1 = *(int *)(iVar3 + 8);
              for (psVar12 = (short *)(*param_7 + *(uint *)(iVar3 + 4));
                  psVar12 < (short *)(iVar10 + -6 + iVar1); psVar12 = psVar12 + 0x68) {
                *psVar12 = *(short *)(iVar3 + 0x4c) + 1;
                psVar12[1] = *(short *)(iVar3 + 0x4c) + 1;
                psVar12[2] = *(short *)(iVar3 + 0x4c) + -1;
                psVar12[3] = *(short *)(iVar3 + 0x4c) + -1;
              }
            }
          }
          if (local_8 != 0) {
            *(uint *)(local_8 + 4) = uVar5;
            *(uint *)(local_8 + 8) = uVar15;
          }
          *param_3 = iVar9 + *(int *)(iVar3 + 4);
          *param_7 = *param_7 - iVar9;
        }
      }
      else {
        param_8 = (uint *)0x0;
        param_1 = FUN_6605b330(this,&param_8);
        if (-1 < param_1) {
          *param_3 = (int)param_8 + iVar9;
          if (local_8 != 0) {
            *(uint *)(local_8 + 4) = uVar5;
            *(uint *)(local_8 + 8) = uVar15;
          }
          *param_7 = param_6;
          return param_1;
        }
      }
    }
  }
  return param_1;
}


