/* Module: wmfplug2.dll
   Function: FUN_00410390
   Address: 00410390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410390(HANDLE param_1,int param_2)

{
  DWORD DVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  uchar local_104 [260];
  
  FUN_00425a40(local_104,(BYTE *)"Sample Count\t\t: %I64d\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,(BYTE *)"Byte Count\t\t: %I64d\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,(BYTE *)"Dropped Sample Count\t: %I64d\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,(BYTE *)"Dropped Byte Count\t: %I64d\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,(BYTE *)"Current Bitrate\t\t: %u\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,(BYTE *)"Average Bitrate\t\t: %u\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_00425a40(local_104,"Expected Bitrate\t: %u\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  local_10c = *(undefined4 *)(param_2 + 0x2c);
  uStack_108 = 0;
  FUN_00425a40(local_104,(BYTE *)"Current Sample Rate\t: %lf\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  local_10c = *(undefined4 *)(param_2 + 0x30);
  uStack_108 = 0;
  FUN_00425a40(local_104,(BYTE *)"Average Sample Rate\t: %lf\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  local_10c = *(undefined4 *)(param_2 + 0x34);
  uStack_108 = 0;
  FUN_00425a40(local_104,(BYTE *)"Expected Sample Rate\t: %lf\r\n");
  pDVar2 = &local_110;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  return;
}


