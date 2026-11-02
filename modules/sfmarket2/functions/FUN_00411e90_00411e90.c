/* Module: sfmarket2.dll
   Function: FUN_00411e90
   Address: 00411e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00411e90(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,undefined2 *param_7)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  HANDLE hProcess;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 ***lpBaseAddress;
  SIZE_T dwSize;
  undefined4 local_4c [6];
  undefined4 **local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined1 local_24;
  int local_23;
  undefined2 local_1c [8];
  int local_c;
  int local_8;
  
  if ((DAT_004d0434 & 1) == 0) {
    DAT_004d0434 = DAT_004d0434 | 1;
    DAT_004a7388 = &LAB_004134c0;
    _DAT_004a73a8 = &LAB_00413510;
    DAT_004a738c = 0;
    DAT_004a7390 = 0;
    DAT_004a7398 = 500;
    DAT_004a739c = &DAT_004a4090;
    _DAT_004a73a0 = 0x1c;
    DAT_004a73a4 = 0x6c;
    _DAT_004a73ac = 0;
    _DAT_004a73b0 = 0;
    _DAT_004a73b8 = 0;
    DAT_004a73bc = 0;
    _DAT_004a73c0 = 0;
    _DAT_004a73c4 = 0;
    _DAT_004a73c8 = 0;
    _DAT_004a73cc = 0;
    _DAT_004a73d0 = 0;
  }
  piVar6 = &DAT_004a7378;
  if (PTR_DAT_004a737c != (undefined *)0x0) {
    while (((*piVar6 != 500 || ((int *)piVar6[3] != param_2)) ||
           ((undefined4 *)piVar6[1] != &DAT_004a4090))) {
      piVar1 = piVar6 + 9;
      piVar6 = piVar6 + 8;
      if (*piVar1 == 0) {
        return 0;
      }
    }
    if (piVar6 != (int *)0x0) {
      puVar7 = (undefined4 *)piVar6[6];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = local_4c;
        iVar3 = (**(code **)(*param_1 + 0x1c))(&DAT_004a4090,param_2,param_4,local_4c);
        if (iVar3 < 0) {
          return 0;
        }
      }
      param_2 = (int *)&stack0xffffffa8;
      local_c = piVar6[4];
      local_8 = piVar6[5];
      if (param_1 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = param_1 + -7;
      }
      sVar2 = *(short *)((int)puVar7 + 6);
      if (sVar2 == 0) {
        param_2 = (int *)0x0;
      }
      else {
        FUN_00492f90();
      }
      iVar3 = (int)sVar2;
      iVar5 = 0;
      piVar6 = param_2;
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 - iVar5;
          iVar5 = iVar5 + 1;
          *piVar6 = (iVar3 + -1) * 0x10 + *param_6;
          iVar3 = (int)*(short *)((int)puVar7 + 6);
          piVar6 = piVar6 + 1;
        } while (iVar5 < iVar3);
      }
      local_30 = &local_2c;
      local_34 = &local_30;
      local_23 = (local_c - (int)&local_34) + -0x15;
      lpBaseAddress = &local_34;
      dwSize = 0x15;
      local_2c = 0x42444c7;
      local_28 = param_1;
      local_24 = 0xe9;
      hProcess = GetCurrentProcess();
      FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
      local_1c[0] = 0;
      puVar4 = local_1c;
      if (param_7 != (undefined2 *)0x0) {
        puVar4 = param_7;
      }
      Ordinal_146(&local_34,0,*puVar7,
                  CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(puVar7 + 1)),
                  (int)*(short *)((int)puVar7 + 6),puVar7 + 2,param_2,puVar4);
      Ordinal_9(local_1c);
    }
  }
  return 0;
}


