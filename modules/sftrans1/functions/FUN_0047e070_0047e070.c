/* Module: sftrans1.dll
   Function: FUN_0047e070
   Address: 0047e070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0047e070(int param_1,int param_2)

{
  HWND hWnd;
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar2;
  uint *puVar3;
  LPARAM local_c8;
  WPARAM local_c4;
  undefined4 local_c0;
  uint local_bc [6];
  undefined4 local_a4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  puVar3 = local_bc;
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_bc[0] = 0xbc;
  SendMessageA(hWnd,0x43f,1,0);
  SendMessageA(hWnd,0xb0,(WPARAM)&local_c4,(LPARAM)&local_c8);
  SendMessageA(hWnd,0xb1,0,-1);
  SendMessageA(hWnd,0x43d,0,(LPARAM)local_bc);
  local_c0 = local_a4;
  puVar3 = local_bc;
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar2 = local_bc[1] & 8;
  local_bc[0] = 0xbc;
  local_bc[1] = 8;
  if (param_2 == 0x9c4b) {
    local_a4 = CONCAT22(local_a4._2_2_,1);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = 0;
    iVar1 = param_1;
  }
  else if (param_2 == 0x9c4c) {
    local_a4 = CONCAT22(local_a4._2_2_,2);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = 2;
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + -0x9c4d;
    if (param_2 + -0x9c4d == 0) {
      local_a4 = CONCAT22(local_a4._2_2_,3);
      iVar1 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
  }
  FUN_0052d290(0x9c4b,CONCAT31((int3)((uint)iVar1 >> 8),param_2 == 0x9c4b) + 4);
  FUN_0052d290(0x9c4d,CONCAT31((int3)((uint)extraout_ECX >> 8),param_2 == 0x9c4d) + 4);
  FUN_0052d290(0x9c4c,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2 == 0x9c4c) + 4);
  if ((uVar2 == 0) || ((short)local_c0 != (short)local_a4)) {
    SendMessageA(hWnd,0x447,0,(LPARAM)local_bc);
  }
  SendMessageA(hWnd,0xb1,local_c4,local_c8);
  SendMessageA(hWnd,0x43f,0,0);
  return;
}


