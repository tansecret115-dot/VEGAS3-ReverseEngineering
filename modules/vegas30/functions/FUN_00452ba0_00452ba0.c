/* Module: vegas30.exe
   Function: FUN_00452ba0
   Address: 00452ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452ba0(int param_1,uint param_2,int param_3,LPCSTR param_4,undefined4 *param_5)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined *local_8;
  
  if (*(int *)(param_1 + 0x210) != 0) {
    ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&param_2);
    lstrcpynA(&DAT_0064bd9c,param_4,0x50);
    DAT_0064bdeb = 0;
    hWnd = *(HWND *)(param_1 + 0x210);
    puVar3 = local_2c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_2c[2] = *(undefined4 *)(param_1 + 4);
    local_2c[0] = 0x2c;
    local_2c[3] = 2;
    LVar1 = SendMessageA(hWnd,0x408,0,(LPARAM)local_2c);
    if (LVar1 == 0) {
      local_2c[2] = *(undefined4 *)(param_1 + 4);
      local_c = DAT_006471fc;
      local_2c[0] = 0x2c;
      local_2c[4] = *(undefined4 *)(param_1 + 0xac0);
      local_2c[3] = 2;
      local_2c[1] = 0x1a0;
      local_18 = *(undefined4 *)(param_1 + 0xac4);
      local_8 = &DAT_0064bd9c;
      local_14 = *(undefined4 *)(param_1 + 0xac8);
      local_10 = *(undefined4 *)(param_1 + 0xacc);
      SendMessageA(*(HWND *)(param_1 + 0x210),0x404,0,(LPARAM)local_2c);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
      SendMessageA(*(HWND *)(param_1 + 0x210),0x412,0,param_3 << 0x10 | param_2 & 0xffff);
      SendMessageA(*(HWND *)(param_1 + 0x210),0x401,1,0);
      SendMessageA(*(HWND *)(param_1 + 0x210),0x411,1,(LPARAM)local_2c);
      if (param_5 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x340) = *param_5;
        *(undefined4 *)(param_1 + 0x344) = param_5[1];
        *(undefined4 *)(param_1 + 0x348) = param_5[2];
        *(undefined4 *)(param_1 + 0x34c) = param_5[3];
        SetTimer(*(HWND *)(param_1 + 4),3,200,(TIMERPROC)0x0);
      }
    }
    else {
      local_8 = &DAT_0064bd9c;
      SendMessageA(*(HWND *)(param_1 + 0x210),0x40c,0,(LPARAM)local_2c);
    }
    SendMessageA(*(HWND *)(param_1 + 0x210),0x412,0,param_3 << 0x10 | param_2 & 0xffff);
  }
  return;
}


