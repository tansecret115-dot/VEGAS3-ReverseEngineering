/* Module: sftrkfx1.dll
   Function: FUN_5cbaf7e0
   Address: 5cbaf7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbaf7e0(HWND param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  tagPOINT local_8;
  
  uVar7 = 0;
  puVar2 = (uint *)GetWindowLongA(param_1,-0x15);
  sVar1 = (short)((uint)param_4 >> 0x10);
  switch(param_2) {
  case 0x601:
    return puVar2[4];
  case 0x602:
    uVar7 = puVar2[4];
    puVar2[4] = 0xffffffff;
    if (param_3 < puVar2[0x29]) {
      puVar2[4] = param_3;
    }
    uVar4 = puVar2[4];
    if ((-1 < (int)uVar4) && ((int)uVar4 < (int)puVar2[0x29])) {
      puVar2[5] = puVar2[uVar4 * 0xe + 0x34];
      puVar2[6] = puVar2[uVar4 * 0xe + 0x35];
      puVar2[7] = puVar2[uVar4 * 0xe + 0x36];
      puVar2[8] = puVar2[uVar4 * 0xe + 0x37];
      FUN_5cbaf550(param_1,(int)puVar2,1);
    }
    FUN_5cbaf7b0(param_1,(byte *)puVar2,(RECT *)0x0,1);
    return uVar7;
  case 0x603:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x29]) {
      _mbscpy((uchar *)param_4,(uchar *)(puVar2 + param_3 * 0xe + 0x2b));
      uVar7 = lstrlenA((LPCSTR)param_4);
      return uVar7;
    }
    break;
  case 0x604:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x29]) {
      puVar5 = puVar2 + param_3 * 0xe + 0x2b;
      lstrcpynA((LPSTR)puVar5,(LPCSTR)param_4,0x20);
      *(CHAR *)((int)puVar5 + 0x1f) = '\0';
      uVar7 = lstrlenA((LPCSTR)puVar5);
      FUN_5cbaf190(param_1,puVar2);
      FUN_5cbaf7b0(param_1,(byte *)puVar2,(RECT *)0x0,1);
      return uVar7;
    }
    break;
  case 0x605:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x29]) {
      return puVar2[param_3 * 0xe + 0x33];
    }
    break;
  case 0x606:
    uVar7 = 0xffffffff;
    if (param_3 < puVar2[0x29]) {
      puVar2[param_3 * 0xe + 0x33] = (uint)param_4;
      return 0;
    }
    break;
  case 0x607:
    uVar7 = puVar2[0x29];
    if (param_4 != (uint *)0x0) {
      if (*param_4 < 0x34) {
        return 0xffffffff;
      }
      uVar4 = (*param_4 - 8) / 0x28;
      param_3 = 0;
      puVar6 = param_4 + 0xb;
      puVar5 = puVar2 + 0x33;
      while( true ) {
        uVar3 = puVar2[0x29];
        if (uVar4 <= puVar2[0x29]) {
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
    uVar7 = 0xffffffff;
    if ((param_4 != (uint *)0x0) && (7 < *param_4)) {
      uVar7 = (*param_4 - 8) / 0x28;
      if (param_4[1] < uVar7) {
        uVar7 = param_4[1];
      }
      puVar2[0x29] = uVar7;
      uVar4 = puVar2[0x2a];
      if (uVar7 < puVar2[0x2a]) {
        uVar4 = uVar7;
      }
      puVar2[0x29] = uVar4;
      uVar7 = 0;
      puVar2[1] = param_4[2] & 1;
      puVar2[2] = param_4[2] >> 1 & 1;
      puVar2[3] = param_4[2] >> 2 & 1;
      if (uVar4 != 0) {
        puVar6 = puVar2 + 0x33;
        puVar5 = param_4 + 0xb;
        do {
          _mbscpy((uchar *)(puVar6 + -8),(uchar *)(puVar5 + -8));
          *puVar6 = *puVar5;
          puVar6[5] = puVar5[1];
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0xe;
          puVar5 = puVar5 + 10;
        } while (uVar7 < puVar2[0x29]);
      }
      FUN_5cbaf190(param_1,puVar2);
      return puVar2[0x29];
    }
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
    FUN_5cbaf7b0(param_1,(byte *)puVar2,(RECT *)0x0,1);
    return uVar4;
  case 0x60b:
    local_8.x = (LONG)(short)param_4;
    local_8.y = (LONG)sVar1;
    ScreenToClient(param_1,&local_8);
    uVar7 = FUN_5cbafc90((int)puVar2,local_8.x,local_8.y);
    return uVar7;
  case 0x60c:
    local_8.x = (LONG)(short)param_4;
    local_8.y = (LONG)sVar1;
    ScreenToClient(param_1,&local_8);
    uVar7 = FUN_5cbafce0(param_1,(int)puVar2,local_8.x,local_8.y);
    return uVar7;
  case 0x60d:
    uVar7 = FUN_5cbafe30(param_1,(int)puVar2,param_3);
    return uVar7;
  case 0x60e:
    uVar7 = FUN_5cbafe00(param_1,(int)puVar2);
    return uVar7;
  case 0x60f:
    uVar7 = puVar2[1];
    puVar2[1] = param_3;
  }
  return uVar7;
}


