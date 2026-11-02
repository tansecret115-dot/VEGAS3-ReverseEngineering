/* Module: sfpagepeel.dll
   Function: FUN_00464680
   Address: 00464680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00464680(void *this,LPSTR param_1,int param_2)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BYTE *pBVar5;
  DWORD local_4c;
  HKEY local_48;
  HKEY local_44;
  uint local_40 [2];
  HKEY__ local_38 [7];
  BYTE local_1c [28];
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_38[0].unused._0_1_ = 0;
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
  iVar2 = FUN_00465d70(this,(LPBYTE)local_38);
  if (-1 < iVar2) {
    FUN_004639f0(this,(uchar *)local_38);
    FUN_00465e00((int)this);
    iVar3 = FUN_004649d0(this,(int *)(local_40 + 1),local_40,local_38,(uint *)0x0,(undefined4 *)0x0)
    ;
  }
  FUN_00463e90(this);
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_44);
  if (LVar1 != 0) {
    return -0x7ff8fffb;
  }
  LVar1 = RegOpenKeyExA(local_44,"License",0,0x2001f,&local_48);
  if (LVar1 != 0) goto LAB_004647e1;
  LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
  if (LVar1 == 0) {
    if (iVar3 < 0) goto LAB_004647d4;
    iVar4 = FUN_00464830(this,(HKEY)0x2,(HKEY)0x0);
    if (-1 < iVar4) {
      local_4c = 0x1a;
      LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
      if (LVar1 == 0) goto LAB_004647d4;
    }
  }
  else {
    FUN_00464830(this,(HKEY)0x2,(HKEY)0x0);
    local_4c = 0x1a;
    LVar1 = RegQueryValueExA(local_48,"CurrentKey",(LPDWORD)0x0,(LPDWORD)0x0,local_1c,&local_4c);
    if (LVar1 != 0) goto LAB_004647d6;
LAB_004647d4:
    iVar4 = 0;
  }
LAB_004647d6:
  RegCloseKey(local_48);
LAB_004647e1:
  RegCloseKey(local_44);
  if (-1 < iVar4) {
    lstrcpynA(param_1,(LPCSTR)local_1c,param_2);
    param_1[param_2 + -1] = '\0';
    lstrcpynA((LPSTR)((int)this + 4),(LPCSTR)local_1c,param_2);
    *(undefined1 *)((int)this + param_2 + 3) = 0;
  }
  return iVar4;
}


