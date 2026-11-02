/* Module: sfcdi.dll
   Function: FUN_5bf1d570
   Address: 5bf1d570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1d570(int param_1,HWND param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *local_108;
  BYTE local_104 [260];
  
  iVar1 = FUN_5bf22040(&local_108,"CD Interface",0x2000001,param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_5bf21860((DWORD)local_108,100,0,300,0xf);
    SendMessageA(param_2,0x14b,0,0);
    uVar3 = 1000;
    if (0 < (int)uVar2) {
      do {
        iVar1 = FUN_5bf21c40((int)local_108,uVar3,local_104,0x104,(LPCSTR)0x0,1);
        if ((iVar1 == 0) || (local_104[0] == '\0')) break;
        SendMessageA(param_2,0x143,0,(LPARAM)local_104);
        iVar1 = uVar3 - 999;
        uVar3 = uVar3 + 1;
      } while (iVar1 < (int)uVar2);
    }
    FUN_5bf22510(local_108);
  }
  return;
}


