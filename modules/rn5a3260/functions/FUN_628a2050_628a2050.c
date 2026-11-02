/* Module: rn5a3260.dll
   Function: FUN_628a2050
   Address: 628a2050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2050(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  char *_Str1;
  int iVar5;
  undefined4 uVar6;
  
  piVar4 = param_3;
  piVar3 = param_2;
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    *(int **)(param_1 + 0x34) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    (**(code **)**(undefined4 **)(param_1 + 0x34))
              (*(undefined4 **)(param_1 + 0x34),&DAT_628a6270,param_1 + 0x50);
    *(int **)(param_1 + 0x30) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    if (*(int *)(param_1 + 0x50) == 0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(*(int **)(param_1 + 0x30),0x80040009,piVar4);
      piVar3 = *(int **)(param_1 + 0x34);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      piVar3 = *(int **)(param_1 + 0x30);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0x80040009;
      }
    }
    else {
      param_3 = (int *)0x0;
      (**(code **)(*piVar4 + 0x10))(piVar4,&param_3);
      if (param_3 != (int *)0x0) {
        param_2 = (int *)0x0;
        (**(code **)(*param_3 + 0x30))(param_3,s_Authorization_628a71c8,&param_2);
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 8))(param_3);
          param_3 = (int *)0x0;
        }
        if (param_2 != (int *)0x0) {
          _Str1 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
          iVar5 = _strnicmp(_Str1,&DAT_628a70a4,3);
          if (iVar5 == 0) {
            piVar3 = *(int **)(param_1 + 0x48);
            puVar1 = (undefined4 *)(param_1 + 0x48);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
              *puVar1 = 0;
            }
            piVar3 = *(int **)(param_1 + 0x3c);
            puVar2 = (undefined4 *)(param_1 + 0x3c);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
              *puVar2 = 0;
            }
            FUN_628a2ec0((void *)(param_1 + -0x24),param_2,puVar1);
            (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,s_Username_628a71bc,puVar2);
            piVar3 = *(int **)(param_1 + 0x2c);
            uVar6 = 0;
            if (piVar3 != (int *)0x0) {
              if (param_1 == 0x24) {
                iVar5 = 0;
              }
              else {
                iVar5 = param_1 + 0xc;
              }
              uVar6 = (**(code **)(*piVar3 + 0x14))(piVar3,iVar5,*puVar2);
            }
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
            }
            return uVar6;
          }
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
        }
        uVar6 = FUN_628a2230(param_1 + -0x24);
        return uVar6;
      }
      (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(*(int **)(param_1 + 0x30),0x80040009,piVar4);
      piVar3 = *(int **)(param_1 + 0x34);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      piVar3 = *(int **)(param_1 + 0x50);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      piVar3 = *(int **)(param_1 + 0x30);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0x80040009;
      }
    }
  }
  return 0x80040009;
}


