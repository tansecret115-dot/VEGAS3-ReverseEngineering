/* Module: vidpcore.dll
   Function: FUN_5df0ca00
   Address: 5df0ca00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5df0ca00(int param_1,LPSTR param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BYTE *pBVar5;
  DWORD local_4c;
  HKEY local_48;
  HKEY local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [28];
  BYTE local_1c [28];
  
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  pBVar5 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar5[0] = '\0';
    pBVar5[1] = '\0';
    pBVar5[2] = '\0';
    pBVar5[3] = '\0';
    pBVar5 = pBVar5 + 4;
  }
  pBVar5[0] = '\0';
  pBVar5[1] = '\0';
  iVar4 = -0x7ff8fffb;
  local_4c = 0x1a;
  iVar3 = -0x7fffbffb;
  iVar2 = FUN_5df0e0f0(local_38,0x19);
  if (-1 < iVar2) {
    FUN_5df0bd70(local_38);
    FUN_5df0e180();
    iVar3 = FUN_5df0cd50(&local_3c,&local_40,local_38,0,0);
  }
  FUN_5df0c210();
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_44);
  if (LVar1 != 0) {
    return -0x7ff8fffb;
  }
  LVar1 = RegOpenKeyExA(local_44,"License",0,0x2001f,&local_48);
  if (LVar1 != 0) goto LAB_5df0cb61;
  LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
  if (LVar1 == 0) {
    if (iVar3 < 0) goto LAB_5df0cb54;
    iVar4 = FUN_5df0cbb0(2,0);
    if (-1 < iVar4) {
      local_4c = 0x1a;
      LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
      if (LVar1 == 0) goto LAB_5df0cb54;
    }
  }
  else {
    FUN_5df0cbb0(2,0);
    local_4c = 0x1a;
    LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
    if (LVar1 != 0) goto LAB_5df0cb56;
LAB_5df0cb54:
    iVar4 = 0;
  }
LAB_5df0cb56:
  RegCloseKey(local_48);
LAB_5df0cb61:
  RegCloseKey(local_44);
  if (-1 < iVar4) {
    lstrcpynA(param_2,(LPCSTR)local_1c,param_3);
    param_2[param_3 + -1] = '\0';
    lstrcpynA((LPSTR)(param_1 + 4),(LPCSTR)local_1c,param_3);
    *(undefined1 *)(param_1 + 3 + param_3) = 0;
  }
  return iVar4;
}


