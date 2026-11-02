/* Module: sfnetmedia.dll
   Function: FUN_00404930
   Address: 00404930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00404930(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  if ((DAT_00447249 & 1) == 0) {
    DAT_00447249 = DAT_00447249 | 1;
    _DAT_0043f148 = &LAB_0040e480;
    DAT_0043f128 = &LAB_0040ddd0;
    _DAT_0043f168 = &LAB_0040e6f0;
    _DAT_0043f140 = 0x1c;
    _DAT_0043f160 = 0x1c;
    _DAT_0043f180 = 0x1c;
    _DAT_0043f188 = &DAT_0040e820;
    _DAT_0043f1a0 = 0x1c;
    _DAT_0043f1c0 = 0x1c;
    _DAT_0043f1e0 = 0x1c;
    _DAT_0043f1a8 = &DAT_0040e830;
    _DAT_0043f1e8 = &LAB_0040e8b0;
    DAT_0043f12c = 0;
    DAT_0043f130 = 0;
    DAT_0043f138 = 0x1f5;
    DAT_0043f13c = &DAT_0043c780;
    DAT_0043f144 = 0xfa;
    _DAT_0043f14c = 0;
    _DAT_0043f150 = 0;
    _DAT_0043f158 = 0x1f5;
    DAT_0043f15c = &DAT_0043c780;
    _DAT_0043f164 = 0xfc;
    _DAT_0043f16c = 0;
    _DAT_0043f170 = 0;
    _DAT_0043f178 = 0x1f5;
    _DAT_0043f17c = &DAT_0043c780;
    _DAT_0043f184 = 0x6a;
    _DAT_0043f18c = 0;
    _DAT_0043f190 = 0;
    _DAT_0043f198 = 0x1f5;
    _DAT_0043f19c = &DAT_0043c780;
    _DAT_0043f1a4 = 0x68;
    _DAT_0043f1ac = 0;
    _DAT_0043f1b0 = 0;
    _DAT_0043f1b8 = 0x1f5;
    _DAT_0043f1bc = &DAT_0043c780;
    _DAT_0043f1c4 = 0x6c;
    _DAT_0043f1c8 = &LAB_0040e840;
    _DAT_0043f1cc = 0;
    _DAT_0043f1d0 = 0;
    _DAT_0043f1d8 = 0x1f5;
    _DAT_0043f1dc = &DAT_0043c780;
    _DAT_0043f1e4 = 0x71;
    _DAT_0043f1ec = 0;
    _DAT_0043f1f0 = 0;
    _DAT_0043f1f8 = 0;
    _DAT_0043f1fc = 0;
    _DAT_0043f200 = 0;
    _DAT_0043f204 = 0;
    _DAT_0043f208 = 0;
    _DAT_0043f20c = 0;
    _DAT_0043f210 = 0;
  }
  piVar7 = &DAT_0043f118;
  if (PTR_DAT_0043f11c != (undefined *)0x0) {
    while (((*piVar7 != 0x1f5 || ((int *)piVar7[3] != param_2)) ||
           ((undefined4 *)piVar7[1] != &DAT_0043c780))) {
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
        iVar3 = (**(code **)(*param_1 + 0x1c))(&DAT_0043c780,param_2,param_4,local_4c);
        if (iVar3 < 0) {
          return 0;
        }
      }
      local_8 = piVar7[5];
      local_c = piVar7[4];
      if (param_1 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = param_1 + -7;
      }
      sVar2 = *(short *)((int)puVar6 + 6);
      if (sVar2 == 0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004323c0();
        param_1 = (int *)&stack0xffffffa8;
      }
      iVar3 = (int)sVar2;
      iVar5 = 0;
      piVar7 = param_1;
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 - iVar5;
          iVar5 = iVar5 + 1;
          *piVar7 = (iVar3 + -1) * 0x10 + *param_6;
          iVar3 = (int)*(short *)((int)puVar6 + 6);
          piVar7 = piVar7 + 1;
        } while (iVar5 < iVar3);
      }
      local_34 = &local_30;
      local_30 = &local_2c;
      local_28 = param_2;
      lpBaseAddress = &local_34;
      local_23 = (local_c - (int)&local_34) + -0x15;
      dwSize = 0x15;
      local_2c = 0x42444c7;
      local_24 = 0xe9;
      hProcess = GetCurrentProcess();
      FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
      local_1c[0] = 0;
      puVar4 = local_1c;
      if (param_7 != (undefined2 *)0x0) {
        puVar4 = param_7;
      }
      Ordinal_146(&local_34,0,*puVar6,
                  CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(puVar6 + 1)),
                  (int)*(short *)((int)puVar6 + 6),puVar6 + 2,param_1,puVar4);
      Ordinal_9(local_1c);
    }
  }
  return 0;
}


