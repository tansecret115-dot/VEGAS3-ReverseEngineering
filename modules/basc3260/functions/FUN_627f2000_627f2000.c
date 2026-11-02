/* Module: basc3260.dll
   Function: FUN_627f2000
   Address: 627f2000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2000(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_8;
  
  piVar3 = param_3;
  piVar2 = param_2;
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    *(int **)(param_1 + 0x34) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    (**(code **)**(undefined4 **)(param_1 + 0x34))
              (*(undefined4 **)(param_1 + 0x34),&DAT_627f5270,param_1 + 0x4c);
    *(int **)(param_1 + 0x30) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    if (*(int *)(param_1 + 0x4c) == 0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(*(int **)(param_1 + 0x30),0x80040009,piVar3);
      piVar2 = *(int **)(param_1 + 0x34);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      piVar2 = *(int **)(param_1 + 0x30);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0x80040009;
      }
    }
    else {
      param_3 = (int *)0x0;
      (**(code **)(*piVar3 + 0x10))(piVar3,&param_3);
      if (param_3 != (int *)0x0) {
        param_2 = (int *)0x0;
        (**(code **)(*param_3 + 0x30))(param_3,s_Authorization_627f6214,&param_2);
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 8))(param_3);
          param_3 = (int *)0x0;
        }
        if (param_2 != (int *)0x0) {
          pcVar4 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
          iVar5 = _strnicmp(pcVar4,s_Basic_627f60b4,5);
          if (iVar5 == 0) {
            local_8 = 0;
            iVar5 = (**(code **)(*param_2 + 0x1c))(param_2);
            uVar8 = 0xffffffff;
            pcVar4 = (char *)(iVar5 + 5);
            pcVar6 = pcVar4;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            pcVar6 = operator_new(~uVar8 - 1);
            cVar1 = *pcVar4;
            while ((cVar1 != '\0' && (iVar5 = isspace((int)cVar1), iVar5 != 0))) {
              cVar1 = pcVar4[1];
              pcVar4 = pcVar4 + 1;
            }
            uVar8 = 0xffffffff;
            pcVar9 = pcVar4;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            iVar5 = FUN_627f43c0((int)pcVar4,~uVar8 - 1,(int)pcVar6);
            if (0 < iVar5) {
              pcVar6[iVar5] = '\0';
              pcVar4 = strchr(pcVar6,0x3a);
              if (pcVar4 != (char *)0x0) {
                *pcVar4 = '\0';
                FUN_627f3160(pcVar6,(undefined4 *)(param_1 + 0x3c));
                FUN_627f3160(pcVar4 + 1,(undefined4 *)(param_1 + 0x40));
                piVar2 = *(int **)(param_1 + 0x2c);
                if (piVar2 != (int *)0x0) {
                  if (param_1 == 0x24) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = param_1 + 0xc;
                  }
                  local_8 = (**(code **)(*piVar2 + 0x14))
                                      (piVar2,iVar5,*(undefined4 *)(param_1 + 0x3c));
                }
              }
            }
            operator_delete(pcVar6);
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
            }
            return local_8;
          }
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
        }
        uVar7 = FUN_627f2260(param_1 + -0x24);
        return uVar7;
      }
      (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(*(int **)(param_1 + 0x30),0x80040009,piVar3);
      piVar2 = *(int **)(param_1 + 0x34);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      piVar2 = *(int **)(param_1 + 0x4c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      piVar2 = *(int **)(param_1 + 0x30);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0x80040009;
      }
    }
  }
  return 0x80040009;
}


