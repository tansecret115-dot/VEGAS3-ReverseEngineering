/* Module: encn3260.dll
   Function: FUN_66482f70
   Address: 66482f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66482f70(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  piVar4 = param_1;
  piVar2 = (int *)param_1[0xd];
  if (piVar2 == (int *)0x0) {
    return -0x7fffbffb;
  }
  piVar3 = param_1 + 0xe;
  param_1 = (int *)0x0;
  iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,&DAT_664dcf90,piVar3);
  if (iVar5 == 0) {
    piVar2 = (int *)piVar4[0xd];
    iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,&DAT_664dcf60,&param_1);
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      *(undefined4 *)((int)piVar4 + 0xa2) = 1;
      pcVar7 = &DAT_664e2278;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*param_1 + 0x10))(param_1,&DAT_664e2278,~uVar6);
      piVar3 = (int *)*piVar3;
      (**(code **)(*piVar3 + 0x2c))(piVar3,s_ConnectionlessControl_664e2260,param_1);
      (**(code **)(*param_1 + 8))(param_1);
      iVar5 = 0;
    }
  }
  return iVar5;
}


