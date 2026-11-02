/* Module: erv33260.dll
   Function: FUN_67073480
   Address: 67073480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67073480(void *this,int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  if (((param_1 == 1) && (param_2[0xf] == 0)) && ((uint)param_2[0x10] < 0x11)) {
    if (*param_2 != 0) {
      return 1;
    }
    iVar3 = FUN_67072af0(param_2[1],param_2[2]);
    if (iVar3 == 0) {
      return 7;
    }
    iVar3 = param_2[3];
    if (iVar3 == 3) {
      bVar2 = true;
    }
    else if (((param_2[4] < 0) || (10000 < param_2[4])) ||
            (((iVar3 != 2 && ((iVar3 != 1 || (param_2[5] == 0)))) &&
             ((iVar3 != 0 || (((param_2[5] == 0 || (param_2[6] == 0)) || (param_2[7] == 0)))))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2[3] != 3)) {
      if (((param_2[8] == 0) || ((param_2[8] == 1 && (param_2[9] != 0)))) &&
         (iVar3 = param_2[10], iVar3 != 0)) {
        if (iVar3 == 3) {
          bVar2 = true;
        }
        else if (((param_2[0xb] < 0) || (10000 < param_2[0xb])) ||
                (((iVar3 != 2 && ((iVar3 != 1 || (param_2[0xc] == 0)))) &&
                 ((iVar3 != 0 ||
                  (((param_2[0xc] == 0 || (param_2[0xd] == 0)) || (param_2[0xe] == 0)))))))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar7 = 0;
          iVar3 = 0;
          uVar4 = 0;
          if (param_2[0x10] != 0) {
            do {
              cVar1 = *(char *)(uVar4 + 0x44 + (int)param_2);
              if (cVar1 == '\x01') {
                iVar3 = iVar3 + 1;
              }
              else {
                if (cVar1 != '\x02') {
                  return 3;
                }
                iVar7 = iVar7 + 1;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < (uint)param_2[0x10]);
          }
          if ((iVar7 == 0) && (iVar3 == 0)) {
            return 3;
          }
          *(undefined4 *)((int)this + 0x224) = 0;
          *(undefined4 *)((int)this + 0x1c) = 1;
          *(int *)((int)this + 0x18) = param_2[0x10];
          piVar5 = param_2;
          piVar8 = (int *)((int)this + 0x20);
          for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar8 = piVar8 + 1;
          }
          uVar4 = 0;
          if (param_2[0x10] != 0) {
            puVar6 = (undefined4 *)((int)this + 200);
            do {
              cVar1 = *(char *)(uVar4 + 0x44 + (int)param_2);
              if (cVar1 == '\x01') {
                *puVar6 = 2;
              }
              else {
                if (cVar1 != '\x02') {
                  return 3;
                }
                *puVar6 = 1;
              }
              uVar4 = uVar4 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar4 < (uint)param_2[0x10]);
          }
          iVar3 = (**(code **)(*(int *)this + 0xc))(0,param_2 + 3);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = (**(code **)(*(int *)this + 0x10))(0,param_2 + 8);
          return iVar3;
        }
      }
    }
  }
  return 10;
}


