/* Module: InstMsi-x86w.exe
   Function: FUN_01004265
   Address: 01004265
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_01004265(int param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_010030da();
  if (DAT_0100ae78 == 0) {
    BVar1 = WriteFile(*(HANDLE *)(&DAT_0100b854 + param_1 * 0x18),param_2,param_3,&param_3,
                      (LPOVERLAPPED)0x0);
    DVar2 = param_3;
    if (BVar1 == 0) {
      DVar2 = 0xffffffff;
    }
    if (((DVar2 != 0xffffffff) && (DAT_0100b0a0 = DAT_0100b0a0 + DVar2, DAT_0100a2f8 != 0)) &&
       (DAT_0100aa78 != (HWND)0x0)) {
      SendDlgItemMessageA(DAT_0100aa78,0x83a,0x402,(uint)(DAT_0100b0a0 * 100) / DAT_0100b098,0);
    }
    return DVar2;
  }
  return 0xffffffff;
}


