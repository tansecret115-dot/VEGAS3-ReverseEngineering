/* Module: vegas30.exe
   Function: FUN_0044c030
   Address: 0044c030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c030(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 7;
  *(int *)(param_1 + 0xac) = param_2;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffc0b;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x34);
  FUN_00446940(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x144),0x602,0,0);
  FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
  *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x100;
  if (((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_2 + 0x78) == 0)) &&
     (*(int *)(param_2 + 0x7c) == 0)) {
    *(undefined4 *)(param_2 + 0x78) = DAT_00649988;
    *(undefined4 *)(param_2 + 0x7c) = DAT_0064998c;
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x100;
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      *(uint *)**(undefined4 **)(param_1 + 0x88) =
           *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x2000;
    }
    *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x40;
  }
  FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
  InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,1);
  FUN_00445cb0(param_1);
  return 1;
}


