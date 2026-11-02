/* Module: vegas30.exe
   Function: FUN_004217f0
   Address: 004217f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004217f0(void)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_0000002c;
  tagRECT tStack_168;
  undefined1 auStack_158 [4];
  undefined4 *local_154 [4];
  int *local_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  undefined1 auStack_130 [260];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppuVar2 = local_154;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = (undefined4 *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  local_154[1] = in_stack_00000020;
  local_154[2] = (undefined4 *)0x5;
  local_154[3] = *(undefined4 **)(in_stack_00000014 + 8);
  local_140 = in_stack_00000010;
  local_13c = in_stack_00000014;
  local_138 = in_stack_00000018;
  local_144 = in_stack_0000001c;
  (**(code **)(*in_stack_0000001c + 4))(in_stack_0000001c);
  uStack_8 = 0;
  uStack_20 = in_stack_00000024;
  uStack_2c = *in_stack_00000020;
  uStack_28 = in_stack_00000020[1];
  SfPrintF(auStack_130,"Take: %s",*(undefined4 *)(*(int *)(in_stack_00000018 + 0x50) + 0x20));
  uStack_1c = *in_stack_00000028;
  uStack_18 = in_stack_00000028[1];
  uStack_14 = in_stack_00000028[2];
  uStack_10 = in_stack_00000028[3];
  uStack_c = in_stack_0000002c;
  puVar3 = (undefined4 *)&stack0xfffffe7c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  GetClientRect(DAT_00647624,&tStack_168);
  InflateRect(&tStack_168,-(((tStack_168.right - tStack_168.left) + -400) / 2),
              -(((tStack_168.bottom - tStack_168.top) + -300) / 2));
  MapWindowPoints(DAT_00647624,(HWND)0x0,(LPPOINT)&tStack_168,2);
  iVar1 = FUN_00412220(unaff_retaddr,9,0,&PTR_FUN_0063d3d0,auStack_130,&stack0xfffffe7c,
                       in_stack_00000020 + 0x32,0,0x2d8,auStack_158);
  if (iVar1 == -1) {
    (**(code **)(*in_stack_0000001c + 8))(in_stack_0000001c);
  }
  return iVar1;
}


