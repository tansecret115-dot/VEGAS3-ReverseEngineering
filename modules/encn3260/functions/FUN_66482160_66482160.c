/* Module: encn3260.dll
   Function: FUN_66482160
   Address: 66482160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482160(void *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  
  piVar1 = param_3;
  iVar8 = 0;
  if (param_2 != 0) {
    FUN_66483190(param_1,param_2,s_Unable_to_process_file_header_664e2120);
    return 0;
  }
  iVar2 = (**(code **)(*param_3 + 0x10))(param_3,s_StreamCount_664e2114,&param_2);
  if (iVar2 == 0) {
    *(int **)((int)param_1 + 0x6a) = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    *(short *)((int)param_1 + 0x48) = (short)param_2;
    uVar3 = param_2 & 0xffff;
    puVar4 = operator_new(uVar3 * 4);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      puVar7 = puVar4;
      if (-1 < (int)(uVar3 - 1)) {
        do {
          *puVar7 = 0;
          puVar7[1] = 0;
          uVar3 = uVar3 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar3 != 0);
      }
    }
    *(undefined2 **)((int)param_1 + 0x44) = puVar4;
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_664ba900(puVar5);
    }
    *(undefined4 *)((int)param_1 + 0x38) = uVar6;
    if (*(short *)((int)param_1 + 0x48) != 0) {
      do {
        (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x14))(*(int **)((int)param_1 + 0x2c),iVar8);
        iVar8 = iVar8 + 1;
      } while ((ushort)iVar8 < *(ushort *)((int)param_1 + 0x48));
    }
    return 0;
  }
  return 0x80004005;
}


