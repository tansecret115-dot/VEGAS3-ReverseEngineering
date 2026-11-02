/* Module: vegas30.exe
   Function: FUN_00435ee0
   Address: 00435ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00435ee0(undefined4 param_1,int param_2,IID *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  LPOLESTR local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130 [5];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int *local_108;
  CHAR local_104 [259];
  undefined1 local_1;
  
  FUN_005b83b0(param_1,1);
  StringFromCLSID(param_3,&local_148);
  if ((local_148 == (LPCWSTR)0x0) || (*local_148 != L'\0')) {
    WideCharToMultiByte(0,0,local_148,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x104) {
    local_104[0] = '\0';
  }
  local_1 = 0;
  CoTaskMemFree(local_148);
  local_148 = (LPOLESTR)0x0;
  FUN_00435ea0(&local_138,&local_150);
  FUN_004e9f70(param_1,0x14,0);
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    piVar2 = (int *)FUN_005b87b0(param_1);
    if (piVar2 == (int *)0x0) {
      local_158 = 0;
    }
    else {
      local_158 = *piVar2;
    }
    iVar1 = 0;
    local_13c = 0;
    if (0 < local_158) {
      piVar3 = (int *)piVar2[2];
      iVar4 = local_158;
      do {
        if (((*(byte *)(*piVar3 + 0x10) & 0x10) != 0) && (*(int *)(*piVar3 + 4) == 3)) {
          iVar1 = iVar1 + 1;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
        local_13c = iVar1;
      } while (iVar4 != 0);
    }
    local_108 = piVar2;
    iVar1 = FUN_004eb0f0(param_1,0x26,0);
    if (iVar1 < 0) goto LAB_004361cc;
    local_144 = 0;
    if (0 < local_158) {
      do {
        iVar4 = *(int *)(piVar2[2] + local_144 * 4);
        if (((*(byte *)(iVar4 + 0x10) & 0x10) != 0) && (*(int *)(iVar4 + 4) == 3)) {
          local_154 = 0;
          iVar1 = FUN_005f5ad0(param_1,local_104,local_150,local_14c,&local_154);
          if (iVar1 < 0) goto LAB_004361cc;
          FUN_004ea250(param_1,iVar4,1,0);
          iVar1 = FUN_005c9e30(&local_140,param_1,iVar4,local_138,local_134,local_150,local_14c);
          puVar5 = local_130;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_11c = local_14c;
          local_130[0] = 0x10;
          local_130[2] = 0;
          local_130[3] = 0;
          local_130[4] = local_150;
          local_118 = 0;
          local_114 = 0;
          local_110 = FUN_005f2d10();
          FUN_005c70c0(param_1,local_140,local_154,local_130,0,0,1);
          if (local_13c == 1) {
            iVar1 = FUN_005f34d0(local_140,0);
          }
          if (iVar1 < 0) goto LAB_004361cc;
        }
        local_144 = local_144 + 1;
        piVar2 = local_108;
      } while (local_144 < local_158);
    }
  }
  else {
    iVar1 = FUN_004eb0f0(param_1,0x26,0);
    if (iVar1 < 0) goto LAB_004361cc;
    local_158 = 0;
    iVar1 = FUN_005f5ad0(param_1,local_104,local_150,local_14c,&local_158);
    if (iVar1 < 0) goto LAB_004361cc;
    FUN_004ea250(param_1,param_2,1,0);
    FUN_005c9e30(&local_154,param_1,param_2,local_138,local_134,local_150,local_14c);
    puVar5 = local_130;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_130[0] = 0x10;
    local_130[4] = local_150;
    local_130[2] = 0;
    local_130[3] = 0;
    local_11c = local_14c;
    local_118 = 0;
    local_114 = 0;
    local_110 = FUN_005f2d10();
    FUN_005c70c0(param_1,local_154,local_158,local_130,0,0,1);
    iVar1 = FUN_005f34d0(local_154,0);
  }
  if (-1 < iVar1) {
    FUN_004eb2b0(param_1);
  }
LAB_004361cc:
  FUN_004ea040(param_1,0);
  FUN_00456c20(DAT_00647630);
  FUN_005b84d0(param_1,1);
  return iVar1;
}


