/* Module: sfpublish.dll
   Function: FUN_0040dcd0
   Address: 0040dcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0040dcd0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,undefined2 *param_7)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  HANDLE hProcess;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
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
  
  if ((DAT_00447149 & 1) == 0) {
    DAT_00447149 = DAT_00447149 | 1;
    DAT_0043f2f0 = FUN_0040ca50;
    _DAT_0043f310 = FUN_0040c470;
    _DAT_0043f330 = &LAB_0040c4e0;
    DAT_0043f2f4 = 0;
    DAT_0043f2f8 = 0;
    DAT_0043f300 = 500;
    DAT_0043f304 = &DAT_0043cb30;
    _DAT_0043f308 = 0x1c;
    DAT_0043f30c = 0x103;
    _DAT_0043f314 = 0;
    _DAT_0043f318 = 0;
    _DAT_0043f320 = 500;
    DAT_0043f324 = &DAT_0043cb30;
    _DAT_0043f328 = 0x1c;
    _DAT_0043f32c = 0x6c;
    _DAT_0043f334 = 0;
    _DAT_0043f338 = 0;
    _DAT_0043f340 = 0;
    _DAT_0043f344 = 0;
    _DAT_0043f348 = 0;
    _DAT_0043f34c = 0;
    _DAT_0043f350 = 0;
    _DAT_0043f354 = 0;
    _DAT_0043f358 = 0;
  }
  piVar7 = &DAT_0043f2e0;
  if (PTR_DAT_0043f2e4 != (undefined *)0x0) {
    while (((*piVar7 != 500 || ((int *)piVar7[3] != param_2)) ||
           ((undefined4 *)piVar7[1] != &DAT_0043cb30))) {
      piVar1 = piVar7 + 9;
      piVar7 = piVar7 + 8;
      if (*piVar1 == 0) {
        return 0;
      }
    }
    if (piVar7 != (int *)0x0) {
      puVar6 = (undefined4 *)piVar7[6];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = local_4c;
        iVar3 = (**(code **)(*param_1 + 0x1c))(&DAT_0043cb30,param_2,param_4,local_4c);
        if (iVar3 < 0) {
          return 0;
        }
      }
      param_2 = (int *)&stack0xffffffa8;
      local_c = piVar7[4];
      local_8 = piVar7[5];
      if (param_1 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = param_1 + -7;
      }
      sVar2 = *(short *)((int)puVar6 + 6);
      if (sVar2 == 0) {
        param_2 = (int *)0x0;
      }
      else {
        FUN_004328f0();
      }
      iVar3 = (int)sVar2;
      iVar5 = 0;
      piVar7 = param_2;
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 - iVar5;
          iVar5 = iVar5 + 1;
          *piVar7 = (iVar3 + -1) * 0x10 + *param_6;
          iVar3 = (int)*(short *)((int)puVar6 + 6);
          piVar7 = piVar7 + 1;
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
      Ordinal_146(&local_34,0,*puVar6,
                  CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(puVar6 + 1)),
                  (int)*(short *)((int)puVar6 + 6),puVar6 + 2,param_2,puVar4);
      Ordinal_9(local_1c);
    }
  }
  return 0;
}


