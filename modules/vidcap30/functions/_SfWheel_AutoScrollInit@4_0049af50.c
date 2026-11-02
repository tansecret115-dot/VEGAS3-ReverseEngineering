/* Module: vidcap30.exe
   Function: _SfWheel_AutoScrollInit@4
   Address: 0049af50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfWheel_AutoScrollInit_4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  SHORT SVar3;
  BOOL BVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *local_4;
  
                    /* 0x9af50  672  _SfWheel_AutoScrollInit@4 */
  puVar2 = param_1;
  BVar4 = IsWindow((HWND)*param_1);
  bVar6 = BVar4 != 0;
  if (puVar2[1] == 0) {
    bVar6 = false;
LAB_0049b01b:
    if (puVar2[4] != 0) goto LAB_0049b029;
  }
  else {
    if ((!bVar6) || (puVar2[6] == 0)) goto LAB_0049b01b;
    uVar5 = GetWindowLongA((HWND)*puVar2,-0x10);
    if (((uVar5 & 0x200000) != 0) &&
       (GetScrollRange((HWND)*puVar2,1,(LPINT)&param_1,(LPINT)&local_4), param_1 != local_4)) {
      puVar2[5] = 1;
    }
    if (((uVar5 & 0x100000) != 0) &&
       (GetScrollRange((HWND)*puVar2,0,(LPINT)&param_1,(LPINT)&local_4), param_1 != local_4)) {
      puVar2[4] = 1;
    }
    if (puVar2[4] != 0) {
      if ((puVar2[5] != 0) && (SVar3 = GetKeyState(0x10), SVar3 < 0)) {
        puVar2[5] = 0;
      }
      goto LAB_0049b01b;
    }
  }
  if (puVar2[5] == 0) {
    bVar6 = false;
  }
LAB_0049b029:
  if (puVar2[7] == 0x23e7) {
    puVar2[7] = 0x10;
  }
  if (puVar2[8] == 0x23e7) {
    puVar2[8] = 0x4b;
  }
  if (puVar2[9] == 0x23e7) {
    puVar2[9] = 0x19;
  }
  if (puVar2[10] == 0x23e7) {
    puVar2[10] = 3;
  }
  iVar1 = puVar2[7];
  puVar2[0xf] = puVar2[2] + iVar1;
  puVar2[0xd] = puVar2[2] - iVar1;
  puVar2[0x10] = puVar2[3] + iVar1;
  puVar2[0xe] = puVar2[3] - iVar1;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  if ((bVar6 != false) && (puVar2[6] != 0)) {
    _SfWheel_AutoScrollOriginIcon_8(puVar2,1);
    _SfWheel_AutoScrollSetCursor_4(puVar2);
    SetCapture((HWND)puVar2[0x16]);
    SetTimer((HWND)puVar2[0x16],0x23e7,puVar2[8],(TIMERPROC)0x0);
  }
  return bVar6;
}


