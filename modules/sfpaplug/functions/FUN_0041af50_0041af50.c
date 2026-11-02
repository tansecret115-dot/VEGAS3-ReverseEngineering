/* Module: sfpaplug.dll
   Function: FUN_0041af50
   Address: 0041af50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_0041af50(HWND param_1,BYTE *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uchar local_800 [2048];
  
  bVar1 = true;
  if (param_2 == (BYTE *)0x0) {
    SetWindowTextA(param_1,"");
    return 0;
  }
  if (*param_2 == '~') {
    bVar1 = false;
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == '~');
  }
  uVar2 = FUN_004189a0(local_800,param_2,(uint *)&stack0x0000000c);
  SendMessageA(param_1,0xb1,0xffffffff,-1);
  SendMessageA(param_1,0xc2,0,(LPARAM)local_800);
  if (bVar1) {
    SendMessageA(param_1,0xb1,0xffffffff,-1);
    SendMessageA(param_1,0xc2,0,0x45b6f8);
  }
  return uVar2;
}


