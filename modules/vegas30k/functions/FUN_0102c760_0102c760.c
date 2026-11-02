/* Module: vegas30k.dll
   Function: FUN_0102c760
   Address: 0102c760
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0102c760(HKEY param_1,BYTE *param_2,BYTE *param_3,int param_4)

{
  int *piVar1;
  BYTE *lpData;
  LSTATUS LVar2;
  int iVar3;
  HKEY pHVar4;
  BYTE *lpData_00;
  DWORD cbData;
  HKEY local_30;
  BYTE local_2c [44];
  
  LVar2 = RegCreateKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",&local_30
                       );
  if (LVar2 != 0) {
    return false;
  }
  LVar2 = 0;
  pHVar4 = param_1;
  if (param_1 != (HKEY)0x0) {
    do {
      FUN_0102aeb0(pHVar4 + 4,local_2c + 4,0x28,1);
      LVar2 = RegCreateKeyA(local_30,(LPCSTR)(local_2c + 4),&param_1);
      if (LVar2 != 0) goto LAB_0102c8bd;
      iVar3 = lstrlenA((LPCSTR)(pHVar4 + 8));
      RegSetValueExA(param_1,(LPCSTR)0x0,0,1,(BYTE *)(pHVar4 + 8),iVar3 + 1);
      LVar2 = RegSetValueExA(param_1,"Flags",0,4,(BYTE *)(pHVar4 + 3),4);
      piVar1 = &pHVar4->unused;
      pHVar4 = (HKEY)*piVar1;
    } while ((HKEY)*piVar1 != (HKEY)0x0);
    if (LVar2 != 0) goto LAB_0102c8bd;
  }
  local_2c[0] = '\x03';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  RegSetValueExA(local_30,"Version",0,3,local_2c,4);
  lpData = param_2;
  RegSetValueExA(local_30,"CheckSumAM1",0,3,param_2,0x10);
  lpData_00 = param_3;
  RegSetValueExA(local_30,"CheckSumDX5",0,3,param_3,0x10);
  if (param_4 == 0) {
    param_1 = (HKEY)0xdeadbeef;
    RegSetValueExA(local_30,"CheckSumAM1Track",0,3,(BYTE *)&param_1,4);
    lpData_00 = (BYTE *)&param_1;
    cbData = 4;
  }
  else {
    RegSetValueExA(local_30,"CheckSumAM1Track",0,3,lpData,0x10);
    cbData = 0x10;
  }
  RegSetValueExA(local_30,"CheckSumDX5Track",0,3,lpData_00,cbData);
LAB_0102c8bd:
  RegFlushKey(local_30);
  RegCloseKey(local_30);
  return LVar2 == 0;
}


