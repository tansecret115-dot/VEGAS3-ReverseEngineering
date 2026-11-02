/* Module: vegas30.exe
   Function: FUN_00506240
   Address: 00506240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00506240(void)

{
  undefined4 *puVar1;
  EMIXERTYPE EVar2;
  undefined4 uVar3;
  LPARAM lParam;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LONG LStack_38;
  int Y;
  int iVar8;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  LStack_38 = 0x506253;
  puVar1 = (undefined4 *)GetWindowLongA(DAT_0064b4a8,-0x15);
  EVar2 = Mixer_GetMixerType((ISFMixer *)0x0);
  iVar8 = 0;
  Y = 0;
  LStack_38 = 0;
  local_24 = 0;
  (**(code **)(*DAT_0064b144 + 0x24))(DAT_0064b144,0);
  if (((EVar2 == 1) || ((int)EVar2 < 2)) || (4 < (int)EVar2)) {
    FUN_00506150();
  }
  else {
    uVar5 = (uint)(&local_24 != (int *)0x4);
    if (uVar5 != puVar1[0x1a]) {
      puVar1[0x1a] = uVar5;
      if ((code *)puVar1[0x30] != (code *)0x0) {
        (*(code *)puVar1[0x30])(puVar1 + 0x2c,puVar1 + 0x20);
      }
      puVar6 = puVar1 + 0x20;
      puVar7 = puVar1 + 0x26;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar3 = FUN_00504760(&local_24);
      puVar1[0x1f] = uVar3;
      lParam = FUN_00504730(uVar3);
      SendMessageA((HWND)puVar1[0x17],0x606,0,lParam);
      FUN_005047b0(puVar1,0,puVar1 + 0x26);
      uVar5 = -(uint)((puVar1[0x1f] & 8) != 0) & 5;
      ShowWindow((HWND)puVar1[0x18],uVar5);
      ShowWindow((HWND)puVar1[0x19],uVar5);
      GetWindowRect((HWND)*puVar1,(LPRECT)&LStack_38);
      GetClientRect((HWND)*puVar1,(LPRECT)&stack0xffffffd8);
      iVar4 = 0x1d;
      if (puVar1[0x1a] == 1) {
        iVar4 = 0x3d;
      }
      SetWindowPos((HWND)*puVar1,(HWND)0x0,LStack_38,Y,iVar8 - LStack_38,
                   ((iStack_20 - unaff_EBX) + iVar4 + -4 + (local_24 - iStack_1c) + unaff_ESI) - Y,
                   0x16);
      return;
    }
  }
  return;
}


