/* Module: sfpaplug.dll
   Function: FUN_00432a30
   Address: 00432a30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00432a30(HWND param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  tagPOINT local_8;
  
  puVar5 = param_4;
  uVar7 = 0;
  puVar2 = (uint *)GetWindowLongA(param_1,-0x15);
  sVar1 = (short)((uint)param_4 >> 0x10);
  switch(param_2) {
  case 0x601:
    return puVar2[4];
  case 0x602:
    uVar7 = puVar2[4];
    puVar2[4] = 0xffffffff;
    if (param_3 < puVar2[0x2c]) {
      puVar2[4] = param_3;
    }
    uVar4 = puVar2[4];
    if ((-1 < (int)uVar4) && ((int)uVar4 < (int)puVar2[0x2c])) {
      puVar2[5] = puVar2[uVar4 * 0xe + 0x56];
      puVar2[6] = puVar2[uVar4 * 0xe + 0x57];
      puVar2[7] = puVar2[uVar4 * 0xe + 0x58];
      puVar2[8] = puVar2[uVar4 * 0xe + 0x59];
      SetWindowTextA(param_1,(LPCSTR)(puVar2 + uVar4 * 0xe + 0x4d));
      FUN_00432750(param_1,(int)puVar2,1);
      FUN_004332a0(param_1,(byte *)puVar2,(RECT *)0x0,1);
      return uVar7;
    }
    SetWindowTextA(param_1,"");
    FUN_004332a0(param_1,(byte *)puVar2,(RECT *)0x0,1);
    return uVar7;
  case 0x603:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x2c]) {
      _mbscpy((uchar *)param_4,(uchar *)(puVar2 + param_3 * 0xe + 0x4d));
      uVar7 = lstrlenA((LPCSTR)param_4);
      return uVar7;
    }
    break;
  case 0x604:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x2c]) {
      puVar5 = puVar2 + param_3 * 0xe + 0x4d;
      lstrcpynA((LPSTR)puVar5,(LPCSTR)param_4,0x20);
      *(CHAR *)((int)puVar5 + 0x1f) = '\0';
      uVar7 = lstrlenA((LPCSTR)puVar5);
      FUN_004323d0(param_1,puVar2);
      FUN_004332a0(param_1,(byte *)puVar2,(RECT *)0x0,1);
      return uVar7;
    }
    break;
  case 0x605:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x2c]) {
      return puVar2[param_3 * 0xe + 0x55];
    }
    break;
  case 0x606:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x2c]) {
      puVar2[param_3 * 0xe + 0x55] = (uint)param_4;
      return 0;
    }
    break;
  case 0x607:
    uVar7 = puVar2[0x2c];
    if (param_4 != (uint *)0x0) {
      if (*param_4 < 0x34) {
        return 0xffffffff;
      }
      uVar4 = (*param_4 - 8) / 0x28;
      param_3 = 0;
      puVar6 = param_4 + 0xb;
      puVar5 = puVar2 + 0x55;
      while( true ) {
        uVar3 = puVar2[0x2c];
        if (uVar4 <= puVar2[0x2c]) {
          uVar3 = uVar4;
        }
        if (uVar3 <= param_3) break;
        _mbscpy((uchar *)(puVar6 + -8),(uchar *)(puVar5 + -8));
        *puVar6 = *puVar5;
        param_3 = param_3 + 1;
        puVar5 = puVar5 + 0xe;
        param_4[1] = param_3;
        puVar6 = puVar6 + 10;
      }
    }
    break;
  case 0x608:
    if (param_4 == (uint *)0x0) {
      return 0xffffffff;
    }
    if (*param_4 < 8) {
      return 0xffffffff;
    }
    FUN_0042e720();
    uVar4 = (*param_4 - 8) / 0x28;
    uVar7 = param_4[1];
    if (uVar4 <= param_4[1]) {
      uVar7 = uVar4;
    }
    puVar2[0x2c] = uVar7;
    if (puVar2[0x2d] <= uVar7) {
      uVar7 = puVar2[0x2d];
    }
    puVar2[0x2c] = uVar7;
    puVar6 = param_4 + 2;
    param_4 = (uint *)0x0;
    puVar2[1] = *puVar6 & 1;
    puVar2[2] = puVar5[2] >> 1 & 1;
    puVar2[3] = puVar5[2] >> 2 & 1;
    if (uVar7 != 0) {
      puVar5 = puVar5 + 0xb;
      puVar6 = puVar2 + 0x55;
      do {
        _mbscpy((uchar *)(puVar6 + -8),(uchar *)(puVar5 + -8));
        *puVar6 = *puVar5;
        puVar6[5] = puVar5[1];
        param_4 = (uint *)((int)param_4 + 1);
        puVar5 = puVar5 + 10;
        puVar6 = puVar6 + 0xe;
      } while (param_4 < (uint *)puVar2[0x2c]);
    }
    FUN_004323d0(param_1,puVar2);
  case 0x612:
    uVar7 = puVar2[0x2c];
    break;
  case 0x609:
    uVar4 = *puVar2 & 0xffffffef;
    uVar7 = *puVar2 >> 4 & 1;
    *puVar2 = uVar4;
    if (param_3 != 0) {
      *puVar2 = uVar4 | 0x10;
      return uVar7;
    }
    break;
  case 0x60a:
    uVar4 = GetWindowLongA(param_1,-0x10);
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xfffffffe;
    if (((uint)param_4 & 0x20) != 0) {
      *puVar2 = uVar7 & 0xfffffffe | 1;
    }
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xfffffffd;
    if (((uint)param_4 & 0x40) != 0) {
      *puVar2 = uVar7 & 0xfffffffd | 2;
    }
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xffffffdf;
    if (((uint)param_4 & 1) != 0) {
      *puVar2 = uVar7 & 0xffffffdf | 0x20;
    }
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xffffffbf;
    if (((uint)param_4 & 0x80) != 0) {
      *puVar2 = uVar7 & 0xffffffbf | 0x40;
    }
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xfffffeff;
    if (((uint)param_4 & 0x100) != 0) {
      *puVar2 = uVar7 & 0xfffffeff | 0x100;
    }
    uVar7 = *puVar2;
    *puVar2 = uVar7 & 0xfffffdff;
    if (((uint)param_4 & 0x200) != 0) {
      *puVar2 = uVar7 & 0xfffffdff | 0x200;
    }
    FUN_004332a0(param_1,(byte *)puVar2,(RECT *)0x0,1);
    return uVar4;
  case 0x60b:
    local_8.x = (LONG)(short)param_4;
    local_8.y = (LONG)sVar1;
    ScreenToClient(param_1,&local_8);
    uVar7 = FUN_00432fa0((int)puVar2,local_8.x,local_8.y);
    return uVar7;
  case 0x60c:
    local_8.x = (LONG)(short)param_4;
    local_8.y = (LONG)sVar1;
    ScreenToClient(param_1,&local_8);
    uVar7 = FUN_00432ff0(param_1,(int)puVar2,local_8.x,local_8.y);
    return uVar7;
  case 0x60d:
    uVar7 = FUN_00433190(param_1,(int)puVar2,param_3);
    return uVar7;
  case 0x60e:
    uVar7 = FUN_00433160(param_1,(int)puVar2);
    return uVar7;
  case 0x60f:
    uVar7 = puVar2[1];
    puVar2[1] = param_3;
    return uVar7;
  case 0x610:
    if ((puVar2[1] != 0) && (puVar2[0x26] == 3)) {
      return 1;
    }
    return 0;
  case 0x611:
    puVar2[0x22] = (uint)param_4;
    return 0;
  }
  return uVar7;
}


