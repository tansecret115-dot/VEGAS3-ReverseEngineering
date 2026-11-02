/* Module: vegas30k.dll
   Function: FUN_0102c530
   Address: 0102c530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0102c530(HKEY param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  HKEY hKey;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  DWORD local_48;
  uint local_44;
  int local_40 [4];
  int local_30 [4];
  int local_20 [4];
  int local_10 [4];
  
  hKey = param_1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  local_48 = 4;
  RegQueryValueExA(param_1,"Version",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)&local_44,&local_48);
  if ((local_48 != 4) || (param_1 != (HKEY)0x3)) {
    local_44 = 0;
  }
  if (local_44 < 3) {
    return 0;
  }
  local_48 = 0x10;
  RegQueryValueExA(hKey,"CheckSumAM1",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)local_40,&local_48);
  if ((local_48 != 0x10) || (param_1 != (HKEY)0x3)) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
  }
  local_48 = 0x10;
  RegQueryValueExA(hKey,"CheckSumDX5",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)local_30,&local_48);
  if ((local_48 != 0x10) || (param_1 != (HKEY)0x3)) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_2;
  piVar4 = local_40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_3;
  piVar4 = local_30;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    local_48 = 0x10;
    RegQueryValueExA(hKey,"CheckSumAM1Track",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)local_20,
                     &local_48);
    puVar1 = param_5;
    if ((local_48 != 0x10) || (param_1 != (HKEY)0x3)) {
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      if ((local_48 == 4) && (param_5 != (undefined4 *)0x0)) {
        *param_5 = 1;
      }
    }
    local_48 = 0x10;
    RegQueryValueExA(hKey,"CheckSumDX5Track",(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)local_10,
                     &local_48);
    if ((local_48 != 0x10) || (param_1 != (HKEY)0x3)) {
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      if ((local_48 == 4) && (puVar1 != (undefined4 *)0x0)) {
        *puVar1 = 1;
      }
    }
    iVar2 = 4;
    bVar5 = true;
    piVar3 = local_40;
    piVar4 = local_20;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = local_30;
      piVar4 = local_10;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        *param_4 = 1;
      }
    }
  }
  return 1;
}


