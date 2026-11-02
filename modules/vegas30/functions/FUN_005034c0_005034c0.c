/* Module: vegas30.exe
   Function: FUN_005034c0
   Address: 005034c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005034c0(HWND param_1,int *param_2)

{
  ushort *puVar1;
  short sVar2;
  undefined *puVar3;
  WPARAM WVar4;
  char cVar5;
  HWND hWnd;
  int *piVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  LRESULT LVar12;
  int iVar13;
  uint uVar14;
  LPSTR lpString1;
  undefined2 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint *puVar18;
  WPARAM local_264;
  uint local_260;
  int *local_25c;
  ISFMixerIn *local_258;
  undefined1 local_254 [4];
  uint local_250;
  int *piStack_24c;
  undefined4 local_248;
  undefined4 local_240;
  int local_23c;
  undefined4 *local_238;
  uint auStack_234 [2];
  int local_22c;
  uint uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  CHAR local_208 [240];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [268];
  
  local_238 = (undefined4 *)FUN_005030c0(param_1);
  FUN_00503080(local_238,0,&local_240);
  hWnd = GetDlgItem(param_1,0x44c);
  local_264 = _SfGetUIFont_4(100);
  SendMessageA(hWnd,0x30,local_264,0);
  SendMessageA(hWnd,0x438,1,0);
  local_260 = *(int *)(*param_2 + 0xfec) + 1;
  if (0x20 < local_260) {
    local_260 = 0x20;
  }
  uVar11 = local_260;
  local_248 = local_240;
  local_23c = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  _DAT_0064e23c = &DAT_0064e248;
  puVar16 = (undefined4 *)&DAT_0064e248;
  _DAT_0064e230 = uVar11;
  for (iVar13 = 0x80; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  lpString1 = &DAT_0064de30;
  _DAT_0064e238 = 0;
  local_258 = (ISFMixerIn *)0x0;
  uVar14 = 0x400;
  DAT_0064e240 = &DAT_0064de30;
  local_25c = (int *)0x0;
  _DAT_0064e234 = uVar11;
  if (0 < (int)local_260) {
    do {
      piVar6 = local_25c;
      sVar2 = (short)lpString1;
      if (local_25c == (int *)0x0) {
        _DAT_0064e248 = DAT_00619e70;
        _DAT_0064e250 = DAT_00619e78 & 0xffff0000;
        DAT_0064e254 = DAT_00619e7c;
        _DAT_0064e24c = CONCAT22(sVar2 - (short)DAT_0064e240,(short)DAT_00619e74);
        if (1 < uVar14) {
          _SfLoadString_16(DAT_00647204,0x520d,local_208,0x104);
          iVar13 = lstrlenA(local_208);
          uVar11 = iVar13 + 1U;
          if (uVar14 < iVar13 + 1U) {
            uVar11 = uVar14;
          }
          uVar14 = uVar14 - uVar11;
          lstrcpynA(lpString1,local_208,uVar11);
          lpString1[uVar11 - 1] = '\0';
          lpString1[uVar11] = '\0';
          _SfGetTextExtent_16(local_264,lpString1,uVar11,&local_22c);
          piVar6 = (int *)_SfGetUIFontSize_4(100);
          local_22c = (local_22c * 8) / *piVar6 + 8;
          iVar13 = local_22c;
          if ((short)local_22c < DAT_0064e248) {
            iVar13 = _DAT_0064e248;
          }
          lpString1 = lpString1 + uVar11 + 1;
          _DAT_0064e248 = CONCAT22(DAT_0064e24a,(short)iVar13);
          piVar6 = local_25c;
        }
      }
      else {
        uVar15 = SUB42(local_25c,0);
        if ((int)local_25c + -1 < local_23c) {
          lVar7 = Mixer_GetMainBus(&local_258,(int)local_25c - 1,(ISFMixer *)0x0);
          if (-1 < lVar7) {
            puVar1 = (ushort *)(&DAT_0064e248 + (int)piVar6 * 8);
            *(int *)puVar1 = DAT_00619e70;
            *(undefined4 *)(&DAT_0064e24c + (int)piVar6 * 8) = DAT_00619e74;
            *(uint *)(&DAT_0064e250 + (int)piVar6 * 8) = DAT_00619e78;
            (&DAT_0064e254)[(int)piVar6 * 4] = DAT_00619e7c;
            puVar3 = DAT_0064e240;
            (&DAT_0064e250)[(int)piVar6 * 8] = uVar15;
            (&DAT_0064e24e)[(int)piVar6 * 8] = sVar2 - (short)puVar3;
            if (1 < uVar14) {
              (**(code **)(*(int *)local_258 + 0xc))(local_258,local_208,0x104);
              iVar13 = lstrlenA(local_208);
              uVar11 = iVar13 + 1U;
              if (uVar14 < iVar13 + 1U) {
                uVar11 = uVar14;
              }
              uVar14 = uVar14 - uVar11;
              lstrcpynA(lpString1,local_208,uVar11);
              lpString1[uVar11 - 1] = '\0';
              lpString1[uVar11] = '\0';
              _SfGetTextExtent_16(local_264,lpString1,uVar11,auStack_234);
              piVar6 = (int *)_SfGetUIFontSize_4(100);
              auStack_234[0] = (int)(auStack_234[0] * 8) / *piVar6 + 8;
              uVar8 = auStack_234[0];
              if ((short)auStack_234[0] < (short)*puVar1) {
                uVar8 = (uint)*puVar1;
              }
              lpString1 = lpString1 + uVar11 + 1;
              *puVar1 = (ushort)uVar8;
              piVar6 = local_25c;
            }
            (**(code **)(*(int *)local_258 + 8))(local_258);
          }
        }
        else {
          puVar1 = (ushort *)(&DAT_0064e248 + (int)local_25c * 8);
          *(int *)puVar1 = DAT_00619e70;
          *(undefined4 *)(&DAT_0064e24c + (int)local_25c * 8) = DAT_00619e74;
          *(uint *)(&DAT_0064e250 + (int)local_25c * 8) = DAT_00619e78;
          (&DAT_0064e254)[(int)local_25c * 4] = DAT_00619e7c;
          puVar3 = DAT_0064e240;
          *(byte *)(&DAT_0064e24c + (int)local_25c * 8) =
               *(byte *)(&DAT_0064e24c + (int)local_25c * 8) | 8;
          (&DAT_0064e250)[(int)local_25c * 8] = uVar15;
          (&DAT_0064e24e)[(int)local_25c * 8] = sVar2 - (short)puVar3;
          if (1 < uVar14) {
            cVar5 = (char)local_25c + 'F';
            if ((int)local_25c + -1 < 0x1a) {
              cVar5 = (char)local_25c + '@';
            }
            iVar13 = (int)cVar5;
            uVar9 = _SfGetString_8(DAT_00647204,0x4f41);
            SfPrintF(local_208,uVar9,iVar13);
            iVar13 = lstrlenA(local_208);
            uVar11 = iVar13 + 1U;
            if (uVar14 < iVar13 + 1U) {
              uVar11 = uVar14;
            }
            uVar14 = uVar14 - uVar11;
            lstrcpynA(lpString1,local_208,uVar11);
            lpString1[uVar11 - 1] = '\0';
            lpString1[uVar11] = '\0';
            _SfGetTextExtent_16(local_264,lpString1,uVar11,&local_250);
            piVar6 = (int *)_SfGetUIFontSize_4(100);
            local_250 = (int)(local_250 * 8) / *piVar6 + 8;
            uVar8 = local_250;
            if ((short)local_250 < (short)*puVar1) {
              uVar8 = (uint)*puVar1;
            }
            lpString1 = lpString1 + uVar11 + 1;
            *puVar1 = (ushort)uVar8;
            piVar6 = local_25c;
          }
        }
      }
      local_25c = (int *)((int)piVar6 + 1);
    } while ((int)local_25c < (int)local_260);
  }
  (&DAT_0064e248)[(int)local_25c * 8] = 0xfc18;
  (&DAT_0064e24a)[(int)local_25c * 8] = 0;
  (&DAT_0064e24c)[(int)local_25c * 8] = 1;
  (&DAT_0064e250)[(int)local_25c * 8] = (short)local_25c;
  (&DAT_0064e252)[(int)local_25c * 8] = 0;
  (&DAT_0064e254)[(int)local_25c * 4] = 0;
  (&DAT_0064e24e)[(int)local_25c * 8] = (short)lpString1[-1] - (short)DAT_0064e240;
  _DAT_0064e448 = param_1;
  SendMessageA(hWnd,0x419,0,0x64e448);
  SendMessageA(hWnd,0x40b,0,0x64e230);
  SendMessageA(hWnd,0x42e,0,4);
  puVar18 = &local_250;
  uVar17 = 0xffffffff;
  uVar9 = _SfGetString_8(DAT_00647204,0x520d);
  WVar4 = local_264;
  _SfGetTextExtent_16(local_264,uVar9,uVar17,puVar18);
  iVar13 = 0x18;
  if (0x17 < (int)(local_250 + 8)) {
    iVar13 = local_250 + 8;
  }
  (**(code **)(*(int *)*local_238 + 0x50))((int *)*local_238,local_254);
  if (local_25c != (int *)0x0) {
    uVar11 = local_250;
    if (0 < (int)local_250) {
      do {
        iVar10 = (**(code **)(*local_25c + 0xc))(local_25c,1,&piStack_24c,0);
        if (iVar10 == 0) {
          (**(code **)(*piStack_24c + 0x1c))(piStack_24c,auStack_10c,0x104);
          _SfGetTextExtent_16(WVar4,auStack_118,0xffffffff,&local_264);
          if (iVar13 <= (int)(local_264 + 8)) {
            iVar13 = local_264 + 8;
          }
          (**(code **)(*(int *)local_258 + 8))(local_258);
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    (**(code **)(*local_25c + 8))(local_25c);
  }
  local_22c = 5;
  uStack_228 = local_250;
  uStack_224 = 0xffffffff;
  uStack_220 = 0xffffffff;
  piVar6 = (int *)_SfGetUIFontSize_4(100);
  iStack_21c = iVar13 / *piVar6;
  uStack_218 = 0;
  uStack_214 = 0;
  SendMessageA(hWnd,0x437,0,(LPARAM)&local_22c);
  LVar12 = SendMessageA(hWnd,0x435,0,0);
  SendMessageA(hWnd,0x436,(uint)((ushort)LVar12 & 0xefff),0);
  SendMessageA(hWnd,0x438,0,0);
  return;
}


