/* Module: mcplugrw.dll
   Function: FUN_0041a900
   Address: 0041a900
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041a900(HKEY param_1,undefined4 param_2)

{
  int iVar1;
  DWORD cbData;
  LSTATUS LVar2;
  DWORD dwType;
  BYTE *lpData;
  BYTE local_10 [16];
  
  iVar1 = FUN_004180d0();
  if (iVar1 == 0) {
    lpData = (BYTE *)&param_2;
    cbData = 4;
    dwType = 4;
  }
  else {
    sprintf((char *)local_10,"%d",param_2);
    lpData = local_10;
    iVar1 = lstrlenA((LPCSTR)local_10);
    cbData = iVar1 + 1;
    dwType = 1;
  }
  LVar2 = RegSetValueExA(param_1,(LPCSTR)0x0,0,dwType,lpData,cbData);
  return -(uint)(LVar2 != 0) & 0x80070005;
}


