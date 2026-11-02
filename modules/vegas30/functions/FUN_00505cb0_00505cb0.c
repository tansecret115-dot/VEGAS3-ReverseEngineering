/* Module: vegas30.exe
   Function: FUN_00505cb0
   Address: 00505cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00505cb0(HWND param_1,undefined4 *param_2)

{
  LONG LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (*(code **)(LVar1 + 0xcc) != (code *)0x0) {
    (**(code **)(LVar1 + 0xcc))(LVar1 + 0xb0,0);
  }
  puVar3 = (undefined4 *)param_2[0x16];
  puVar4 = (undefined4 *)(LVar1 + 0xbc);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)param_2[0x15];
  puVar3 = (undefined4 *)(LVar1 + 0xb0);
  *puVar3 = *puVar4;
  *(undefined4 *)(LVar1 + 0xb4) = puVar4[1];
  *(undefined4 *)(LVar1 + 0xb8) = puVar4[2];
  lstrcpynA((LPSTR)(LVar1 + 4),(LPCSTR)(param_2 + 1),0x50);
  *(undefined1 *)(LVar1 + 0x53) = 0;
  if (*(code **)(LVar1 + 0xc0) != (code *)0x0) {
    (**(code **)(LVar1 + 0xc0))(puVar3,LVar1 + 0x80);
  }
  puVar4 = (undefined4 *)(LVar1 + 0x80);
  puVar5 = (undefined4 *)(LVar1 + 0x98);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(LVar1 + 0x7c) = *param_2;
  *(undefined4 *)(LVar1 + 0xd4) = param_2[0x18];
  FUN_005047b0(LVar1,0,(undefined4 *)(LVar1 + 0x98));
  InvalidateRect(*(HWND *)(LVar1 + 0x54),(RECT *)0x0,1);
  SetWindowTextA(param_1,(LPCSTR)(LVar1 + 4));
  BringWindowToTop(param_1);
  if (*(code **)(LVar1 + 0xcc) != (code *)0x0) {
    (**(code **)(LVar1 + 0xcc))(puVar3,1);
  }
  return;
}


