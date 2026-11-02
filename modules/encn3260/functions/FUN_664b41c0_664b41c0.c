/* Module: encn3260.dll
   Function: FUN_664b41c0
   Address: 664b41c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b41c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = (int *)FUN_664b45a0((int)param_1);
  pcVar3 = (char *)FUN_664b45f0((int)param_1);
  FUN_664b4580(param_1,&local_10);
  iVar4 = FUN_664b4630(param_1);
  uVar5 = 0;
  uVar6 = 0;
  if (((4 < iVar4) && (iVar4 < 7)) && (local_8 = 0, 0 < local_c)) {
    do {
      iVar4 = 0;
      if (0 < local_10) {
        do {
          switch(uVar6) {
          case 0:
            uVar5 = 0;
            uVar6 = 1;
            break;
          case 1:
            iVar1 = *piVar2;
            piVar2 = piVar2 + 1;
            uVar5 = (uint)(iVar1 != 0) * 0x10000;
            uVar6 = 2;
            break;
          case 2:
            iVar1 = *piVar2;
            piVar2 = piVar2 + 1;
            uVar5 = (uint)(iVar1 != 0) * 0x100;
            uVar6 = 3;
            break;
          case 3:
            uVar5 = (uint)(*piVar2 != 0);
            piVar2 = piVar2 + 1;
            uVar6 = 0;
          }
          iVar4 = iVar4 + 1;
          *pcVar3 = -(uVar5 != 0);
          pcVar3 = pcVar3 + 1;
        } while (iVar4 < local_10);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  FUN_664b45d0((int)param_1);
  return;
}


