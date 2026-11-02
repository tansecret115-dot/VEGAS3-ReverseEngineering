/* Module: g2plug.dll
   Function: FUN_5f805e60
   Address: 5f805e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f805e60(HANDLE param_1)

{
  DWORD DVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_108;
  uchar local_104 [260];
  
  FUN_5f825e30(local_104,(BYTE *)"Frame Rate\t: %.0f fps\r\n");
  pDVar2 = &local_108;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_5f825e30(local_104,(BYTE *)"Video Bit Rate\t\t: %.0f bps\r\n");
  pDVar2 = &local_108;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_5f825e30(local_104,(BYTE *)"Video Latency\t\t: %d ms\r\n");
  pDVar2 = &local_108;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_5f825e30(local_104,(BYTE *)"Audio Bit Rate\t\t: %d bps\r\n");
  pDVar2 = &local_108;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  FUN_5f825e30(local_104,(BYTE *)"Audio Latency\t\t: %d ms\r\n");
  pDVar2 = &local_108;
  p_Var3 = (LPOVERLAPPED)0x0;
  DVar1 = lstrlenA((LPCSTR)local_104);
  WriteFile(param_1,local_104,DVar1,pDVar2,p_Var3);
  return;
}


