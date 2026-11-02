/* Module: sfpaplug.dll
   Function: FUN_004046f0
   Address: 004046f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004046f0(int *param_1,LPCSTR param_2,undefined4 *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  SIZE_T dwBytes;
  undefined4 *puVar5;
  DWORD DVar6;
  uint uVar7;
  HGLOBAL pvVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  ushort *puVar11;
  uint uVar12;
  uint *puVar13;
  HANDLE *ppvVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong lVar19;
  HANDLE pvVar20;
  HANDLE pvStack_278;
  uint uStack_274;
  DWORD DStack_270;
  ushort *puStack_26c;
  uint local_268;
  DWORD DStack_264;
  LONG LStack_260;
  uint uStack_25c;
  LPVOID local_258;
  uint local_254;
  int local_250;
  int local_24c;
  ushort *local_248;
  LPVOID local_244;
  DWORD local_240;
  uint local_23c;
  uint uStack_238;
  int *local_234;
  DWORD local_230;
  SIZE_T local_22c;
  DWORD DStack_228;
  uint uStack_224;
  uint local_220;
  int local_21c;
  DWORD DStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint local_208;
  uint uStack_204;
  int iStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint local_1ec [3];
  LPVOID pvStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  LPCVOID pvStack_1d0;
  DWORD DStack_1c8;
  HANDLE local_198 [5];
  undefined4 uStack_184;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  LPCVOID pvStack_168;
  undefined4 *puStack_164;
  uint uStack_160;
  undefined1 auStack_158 [40];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  LPCVOID pvStack_118;
  uint uStack_72;
  undefined1 auStack_34 [20];
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_248 = (ushort *)0x0;
  local_230 = 0;
  iVar2 = FUN_004046e0();
  if (iVar2 != 0) {
    return 0x8004e085;
  }
  local_234 = (int *)0x0;
  puVar13 = local_1ec;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  ppvVar14 = local_198;
  for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar14 = (HANDLE)0x0;
    ppvVar14 = ppvVar14 + 1;
  }
  local_220 = 0;
  local_21c = 0;
  local_254 = 0;
  local_250 = 0;
  local_240 = 0;
  local_23c = 0;
  local_208 = 0;
  local_258 = (LPVOID)0x0;
  local_22c = 0;
  local_24c = 0;
  local_268 = 0;
  local_244 = (LPVOID)0x0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1,0,100,0);
  }
  pvStack_278 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x8000000,(HANDLE)0x0)
  ;
  if ((pvStack_278 == (HANDLE)0xffffffff) || (param_4 == 0)) {
    uVar12 = 0x8004e006;
    goto LAB_004057c6;
  }
  (**(code **)*param_3)();
  if (local_234 == (int *)0x0) {
    uVar12 = 0x8000ffff;
    goto LAB_004057c6;
  }
  puVar11 = *(ushort **)(*(ushort **)(param_4 + 0x424) + 0xb);
  if (puVar11 == (ushort *)0x0) {
    puVar11 = *(ushort **)(param_4 + 0x424);
  }
  puStack_26c = puVar11;
  iVar2 = (**(code **)(*local_234 + 0x30))(local_234,0,0,&local_22c,0,0,0);
  if (iVar2 < 0) {
    return 0x8000ffff;
  }
  pvVar8 = GlobalAlloc(0x42,local_22c);
  local_248 = GlobalLock(pvVar8);
  if ((local_248 != (ushort *)0x0) &&
     (uVar12 = (**(code **)(*local_234 + 0x30))(local_234,local_248,local_22c,&local_22c,0,0,0),
     (int)uVar12 < 0)) goto LAB_004057c6;
  puVar1 = local_248;
  (**(code **)(*local_234 + 0x2c))(local_234,&uStack_214);
  if (((int)uStack_210 < 1) && (((int)uStack_210 < 0 || (uStack_214 == 0)))) {
    uStack_214 = 1;
    uStack_210 = 0;
  }
  FUN_00403490((int)auStack_158,4000);
  pvVar20 = pvStack_278;
  bVar16 = true;
  uStack_130 = 1;
  uStack_12c = 1;
  uStack_128 = 0;
  if ((0x10 < puVar1[7]) || (0x10 < puVar11[7])) {
    bVar16 = false;
    uStack_12c = 0;
  }
  local_198[0] = pvStack_278;
  uStack_20 = 0x20;
  iStack_1c = 1;
  if (bVar16) {
    iStack_1c = 3;
  }
  iStack_1c = iStack_1c + 0x640000;
  uStack_18 = uStack_214;
  uStack_14 = uStack_210;
  uStack_c = 0x200;
  uStack_a = 0x19;
  uStack_8 = 0;
  uStack_4 = 0;
  uVar18 = __alldiv(uStack_214,uStack_210,0x3200,0);
  uStack_20c = (int)uVar18 + 2;
  uStack_160 = 0;
  uStack_10 = uStack_20c;
  if (uStack_20c != 0) {
    pvVar8 = GlobalAlloc(0x42,uStack_20c * 8);
    puStack_164 = GlobalLock(pvVar8);
    pvVar20 = pvStack_278;
  }
  uStack_184 = 0;
  uStack_178 = *(undefined4 *)puVar11;
  uStack_174 = *(undefined4 *)(puVar11 + 2);
  uStack_170 = *(undefined4 *)(puVar11 + 4);
  uStack_16c = *(undefined4 *)(puVar11 + 6);
  pvStack_168 = (LPCVOID)CONCAT22(pvStack_168._2_2_,puVar11[8]);
  if (param_5 == 0) {
    uVar12 = FUN_00425270(pvVar20,0x45564157,0);
    uStack_274 = 0xc;
    DStack_270 = 0;
    local_258 = (LPVOID)FUN_00403360(0x28);
  }
  else {
    uVar12 = FUN_0041b8b0(pvVar20);
    uStack_274 = 0x28;
    DStack_270 = 0;
  }
  puVar11 = puStack_26c;
  if ((int)uVar12 < 0) goto LAB_004057c6;
  puStack_26c[8] = 0x20;
  uStack_238 = 0x32;
  if (param_5 == 0) {
    FUN_00425160(pvStack_278);
    bVar16 = 0xfffffff7 < uStack_274;
    uStack_274 = uStack_274 + 8;
    DStack_270 = DStack_270 + bVar16;
    DStack_218 = SetFilePointer(pvStack_278,0,(PLONG)0x0,1);
    *puVar11 = 0x1971;
    BVar3 = WriteFile(pvStack_278,puVar11,0x12,&uStack_25c,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      bVar16 = CARRY4(uStack_274,uStack_25c);
      uStack_274 = uStack_274 + uStack_25c;
      DStack_270 = DStack_270 + bVar16;
    }
    *puVar11 = 1;
    BVar3 = WriteFile(pvStack_278,&uStack_20,0x20,&uStack_25c,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      bVar16 = CARRY4(uStack_274,uStack_25c);
      uStack_274 = uStack_274 + uStack_25c;
      DStack_270 = DStack_270 + bVar16;
    }
    uVar4 = FUN_00403360(uStack_25c + 0x10);
    pvVar10 = (LPVOID)((int)local_258 + uVar4);
  }
  else {
    uVar12 = FUN_0041b540(pvStack_278);
    bVar16 = CARRY4(uStack_274,uStack_204);
    uStack_274 = uStack_274 + uStack_204;
    DStack_270 = DStack_270 + iStack_200 + (uint)bVar16;
    pvVar10 = local_258;
  }
  if ((int)uVar12 < 0) goto LAB_004057c6;
  if ((*puStack_26c != 1) && (*puStack_26c != 3)) {
    local_230 = SetFilePointer(pvStack_278,0,(PLONG)0x0,1);
    if (param_5 == 0) {
      local_258 = (LPVOID)0x0;
      uVar12 = FUN_004251b0(pvStack_278,0x74636166,&local_258,4,(int *)&uStack_25c);
      bVar16 = CARRY4(uStack_274,uStack_25c);
      uStack_274 = uStack_274 + uStack_25c;
      DStack_270 = DStack_270 + bVar16;
      uVar4 = FUN_00403360(uStack_25c + 0x10);
      pvVar10 = (LPVOID)((int)pvVar10 + uVar4);
    }
    else {
      DStack_264 = 0;
      LStack_260 = 0;
      uVar12 = FUN_0041b540(pvStack_278);
      bVar16 = CARRY4(uStack_274,uStack_204);
      uStack_274 = uStack_274 + uStack_204;
      DStack_270 = DStack_270 + iStack_200 + (uint)bVar16;
    }
    if (((int)uVar12 < 0) ||
       (uVar12 = FUN_00402ee0((uint)local_248,(int)puStack_26c), (int)uVar12 < 0))
    goto LAB_004057c6;
  }
  if ((param_5 == 0) && (DAT_0045c054 != 0)) {
    uVar12 = FUN_00403360(0x18);
    uVar4 = uStack_274;
    uVar12 = (int)pvVar10 + ((uVar12 - 8) - uStack_274);
    FUN_00425160(pvStack_278);
    SetFilePointer(pvStack_278,uVar12 - 8,(PLONG)0x0,1);
    uStack_274 = uVar4 + uVar12;
    DStack_270 = DStack_270 + CARRY4(uVar4,uVar12);
    local_208 = uVar12;
  }
  DStack_228 = SetFilePointer(pvStack_278,0,(PLONG)0x0,1);
  if (param_5 == 0) {
    uVar12 = FUN_00425160(pvStack_278);
    bVar16 = 0xfffffff7 < uStack_274;
    uStack_274 = uStack_274 + 8;
  }
  else {
    uVar12 = FUN_0041b4d0(pvStack_278);
    bVar16 = 0xffffffe7 < uStack_274;
    uStack_274 = uStack_274 + 0x18;
  }
  DStack_270 = DStack_270 + bVar16;
  if ((int)uVar12 < 0) goto LAB_004057c6;
  uStack_1f0 = (uint)local_248[6];
  if (local_24c == 0) {
    uVar4 = 0x200;
    pvVar8 = GlobalAlloc(0x42,uStack_1f0 << 9);
    pvStack_1e0 = GlobalLock(pvVar8);
  }
  else {
    uVar4 = uStack_1dc / uStack_1f0;
  }
  puVar11 = puStack_26c;
  local_244 = pvStack_1e0;
  if (pvStack_1e0 == (LPVOID)0x0) {
    uVar12 = 0x8007000e;
    goto LAB_004057c6;
  }
  local_258 = (LPVOID)0x0;
  if ((local_24c == 0) && ((local_248[7] != puStack_26c[7] || (*local_248 != *puStack_26c)))) {
    local_258 = (LPVOID)(uint)puStack_26c[6];
    LStack_260 = 0;
    DStack_264 = uVar4;
    dwBytes = ftol();
    pvVar8 = GlobalAlloc(0x42,dwBytes);
    local_258 = GlobalLock(pvVar8);
    iVar2 = FUN_00424d60(puVar11,local_248);
    if (iVar2 == 0) {
      uVar12 = 0x80004001;
    }
  }
  uVar4 = 0;
  pvVar10 = local_244;
  do {
    if ((int)uVar12 < 0) goto LAB_004057c6;
    uVar12 = (**(code **)(*local_234 + 0x3c))
                       (local_234,local_220,local_21c,
                        (LPVOID)(puStack_26c[6] * uVar4 + (int)pvVar10),0x200 - uVar4,&uStack_1f8);
    uVar4 = uVar4 + uStack_1f8;
    bVar16 = CARRY4(local_220,uStack_1f8);
    local_220 = local_220 + uStack_1f8;
    local_21c = local_21c + (uint)bVar16;
    uStack_1f4 = uVar12;
    if ((uVar4 == 0x200) || ((uStack_1f8 == 0 && (uVar4 != 0)))) {
      FUN_00403ef0((int)local_198,uVar4,pvVar10);
      local_268 = local_268 + 1;
      if (0x18 < (int)local_268) {
        local_268 = 0;
      }
      if (uStack_20c <= uStack_160) {
        pvVar8 = GlobalAlloc(0x42,uStack_10 << 4);
        puVar5 = GlobalLock(pvVar8);
        puVar9 = puStack_164;
        puVar15 = puVar5;
        for (iVar2 = (uStack_10 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar15 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        pvVar8 = GlobalHandle(puStack_164);
        GlobalUnlock(pvVar8);
        pvVar8 = GlobalHandle(puStack_164);
        GlobalFree(pvVar8);
        uStack_20c = uStack_10 * 2;
        uVar12 = uStack_1f4;
        pvVar10 = local_244;
        puStack_164 = puVar5;
        uStack_10 = uStack_20c;
      }
      if ((local_268 == 1) && (uStack_160 < uStack_10)) {
        DStack_264 = 0;
        LStack_260 = 0;
        DVar6 = SetFilePointer(pvStack_278,0,&LStack_260,1);
        puStack_164[uStack_160 * 2] = DVar6;
        puStack_164[uStack_160 * 2 + 1] = LStack_260;
        uStack_160 = uStack_160 + 1;
      }
      iVar2 = FUN_00404530(local_198,(uint)(local_268 == 1),0,(int *)&uStack_1fc);
      if ((iVar2 < 0) ||
         (BVar3 = WriteFile(pvStack_278,pvStack_118,uStack_72 & 0xffff,&uStack_224,(LPOVERLAPPED)0x0
                           ), BVar3 == 0)) goto LAB_004053fb;
      uVar7 = uStack_224 + uStack_1fc;
      bVar16 = CARRY4(local_254,uVar7);
      local_254 = local_254 + uVar7;
      local_250 = local_250 + (uint)CARRY4(uStack_224,uStack_1fc) + (uint)bVar16;
      bVar16 = CARRY4(local_240,uVar4);
      local_240 = local_240 + uVar4;
      local_23c = local_23c + bVar16;
      bVar16 = CARRY4(uStack_274,uVar7);
      uStack_274 = uStack_274 + uVar7;
      DStack_270 = DStack_270 + CARRY4(uStack_224,uStack_1fc) + (uint)bVar16;
      if ((uVar12 == 0) && (param_1 != (int *)0x0)) {
        ftol();
        uVar12 = (**(code **)(*param_1 + 0x18))();
        if ((int)uVar12 < 0) {
          uVar12 = 0x8004e00c;
        }
      }
      uVar4 = 0;
    }
  } while (((uVar12 != 1) && ((int)DStack_270 < 1)) &&
          (((int)DStack_270 < 0 || (uStack_274 < 0xfffef920))));
  uVar12 = 0;
  if (local_24c == 0) {
LAB_004052a3:
    pvVar10 = local_244;
    pvVar8 = GlobalHandle(local_244);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvVar10);
    GlobalFree(pvVar8);
    local_244 = (LPVOID)0x0;
  }
  else {
    uStack_1dc = 0;
    uStack_1d8 = 0;
    iVar2 = acmStreamConvert();
    while (iVar2 == 0) {
      if ((local_1ec[1] & 0x10000) == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      bVar16 = false;
      if (DStack_1c8 == 0) {
        iVar2 = acmStreamConvert();
        if (iVar2 != 0) break;
        if ((local_1ec[1] & 0x10000) == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        bVar16 = DStack_1c8 == 0;
      }
      if (bVar16) goto LAB_0040529d;
      uVar4 = uStack_1d8 / uStack_1f0;
      BVar3 = WriteFile(pvStack_278,pvStack_1d0,DStack_1c8,&uStack_224,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        uVar12 = 0x8004e009;
        goto LAB_0040529d;
      }
      bVar16 = CARRY4(local_240,uVar4);
      local_240 = local_240 + uVar4;
      local_23c = local_23c + bVar16;
      bVar16 = CARRY4(local_254,uStack_224);
      local_254 = local_254 + uStack_224;
      local_250 = local_250 + (uint)bVar16;
      bVar17 = CARRY4(uStack_274,uStack_224);
      uStack_274 = uStack_274 + uStack_224;
      bVar16 = SCARRY4(DStack_270,(uint)bVar17);
      DStack_270 = DStack_270 + bVar17;
      if (((-1 < (int)DStack_270) &&
          (((DStack_270 != 0 && !bVar16 || (0xfffef91f < uStack_274)) && (param_5 == 0)))) &&
         (DAT_0045c054 != 0)) {
        if ((*puStack_26c == 1) || (*puStack_26c == 3)) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
        uVar12 = FUN_004032d0(param_2,&pvStack_278,0,puStack_26c,iVar2,0,0,&local_230,&DStack_228);
        param_5 = 1;
      }
      if (DStack_1c8 == 0) goto LAB_0040529d;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      iVar2 = acmStreamConvert();
    }
    uVar12 = 0x8004e01e;
LAB_0040529d:
    if (local_24c == 0) goto LAB_004052a3;
  }
  pvVar10 = local_258;
  if (local_258 != (LPCVOID)0x0) {
    pvVar8 = GlobalHandle(local_258);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvVar10);
    GlobalFree(pvVar8);
  }
  if ((int)uVar12 < 0) goto LAB_004057c6;
  if (((int)DStack_270 < 0) || (((int)DStack_270 < 1 && (uStack_274 < 0xfffef920)))) {
    if (param_5 != 0) goto LAB_00405370;
LAB_004053ce:
    local_268 = local_254 & 1;
    if (local_268 != 0) {
      puVar13 = &uStack_238;
      uVar12 = 1;
      uStack_238 = 0;
      goto LAB_004053f1;
    }
  }
  else {
    if (param_5 == 0) {
      if (DAT_0045c054 == 0) goto LAB_004053ce;
      if ((*puStack_26c == 1) || (*puStack_26c == 3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      FUN_004032d0(param_2,&pvStack_278,0,puStack_26c,iVar2,0,0,&local_230,&DStack_228);
      param_5 = 1;
    }
LAB_00405370:
    local_268 = local_254 & 7;
    uStack_274 = 0;
    DStack_270 = 0;
    if (local_268 != 0) {
      local_268 = 8 - local_268;
      puVar13 = &uStack_274;
      uVar12 = local_268;
LAB_004053f1:
      BVar3 = WriteFile(pvStack_278,puVar13,uVar12,&uStack_25c,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
LAB_004053fb:
        uVar12 = 0x8004e009;
        goto LAB_004057c6;
      }
    }
  }
  SetFilePointer(pvStack_278,0,(PLONG)0x0,1);
  uVar12 = 0;
  puVar9 = puStack_164;
  if (uStack_10 != 0) {
    do {
      uVar12 = uVar12 + 1;
      *puVar9 = puStack_164[uVar12 * 2 + -2];
      puVar9 = puVar9 + 1;
    } while (uVar12 < uStack_10);
  }
  iVar2 = uStack_10 * 4;
  FUN_00425160(pvStack_278);
  if ((puStack_164 != (undefined4 *)0x0) &&
     (BVar3 = WriteFile(pvStack_278,puStack_164,uStack_10 * 4,&uStack_25c,(LPOVERLAPPED)0x0),
     BVar3 == 0)) {
    return 0x8004e009;
  }
  FUN_00403360(iVar2 + 0x10);
  SetFilePointer(pvStack_278,0,(PLONG)0x0,1);
  uVar12 = local_23c;
  DVar6 = local_240;
  puVar11 = puStack_26c;
  if (param_5 == 0) {
    uStack_10 = uStack_160 + 1;
    uStack_18 = local_240;
    uStack_14 = local_23c;
    if (local_240 != 0 || local_23c != 0) {
      lVar19 = __allmul(*(uint *)(puStack_26c + 2),0,local_254,local_250);
      uVar18 = __alldiv((uint)lVar19,(uint)((ulonglong)lVar19 >> 0x20),DVar6,uVar12);
      *(int *)(puVar11 + 4) = (int)uVar18;
    }
    LStack_260 = (int)DStack_218 >> 0x1f;
    DStack_264 = DStack_218;
    SetFilePointer(pvStack_278,DStack_218,&LStack_260,0);
    pvVar20 = (HANDLE)0x0;
    *puVar11 = 0x1971;
    BVar3 = WriteFile(pvStack_278,puVar11,0x12,&uStack_25c,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return 0x8004e009;
    }
    *puVar11 = 1;
    BVar3 = WriteFile(pvVar20,auStack_34,0x20,&DStack_270,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return 0x8004e009;
    }
  }
  DStack_264 = 0;
  LStack_260 = 0;
  SetFilePointer(pvStack_278,0,&LStack_260,0);
  if (param_5 == 0) {
    iVar2 = 0x46;
    if ((*puVar11 != 1) && (*puVar11 != 3)) {
      iVar2 = 0x52;
    }
    uStack_238 = iVar2 + local_254 + 8 + uStack_10 * 4 + local_208 + local_268;
    uVar12 = FUN_00425270(pvStack_278,0x45564157,uStack_238);
  }
  else {
    if ((*puVar11 == 3) || (*puVar11 == 1)) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = puVar11[8] + 0x12;
    }
    uStack_238 = iVar2 + 0x40;
    if ((*puVar11 != 1) && (*puVar11 != 3)) {
      uStack_238 = iVar2 + 0x5c;
    }
    uVar12 = FUN_0041b8b0(pvStack_278);
  }
  if (-1 < (int)uVar12) {
    LStack_260 = (int)DStack_228 >> 0x1f;
    DStack_264 = DStack_228;
    SetFilePointer(pvStack_278,DStack_228,&LStack_260,0);
    if (param_5 == 0) {
      uVar12 = FUN_00425160(pvStack_278);
    }
    else {
      uVar12 = FUN_0041b4d0(pvStack_278);
    }
    if (((-1 < (int)uVar12) && (*puVar11 != 1)) && (*puVar11 != 3)) {
      LStack_260 = (int)local_230 >> 0x1f;
      DStack_264 = local_230;
      SetFilePointer(pvStack_278,local_230,&LStack_260,0);
      if (param_5 == 0) {
        DStack_218 = local_240;
        uVar12 = FUN_004251b0(pvStack_278,0x74636166,&DStack_218,4,(int *)0x0);
      }
      else {
        uVar12 = FUN_0041b540(pvStack_278);
      }
    }
  }
LAB_004057c6:
  if (local_24c != 0) {
    FUN_004030c0(local_24c,(int)local_1ec);
  }
  if (local_234 != (int *)0x0) {
    (**(code **)(*local_234 + 8))(local_234);
  }
  pvVar10 = local_244;
  if (local_244 != (LPCVOID)0x0) {
    pvVar8 = GlobalHandle(local_244);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvVar10);
    GlobalFree(pvVar8);
  }
  puVar11 = local_248;
  if (local_248 != (ushort *)0x0) {
    pvVar8 = GlobalHandle(local_248);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(puVar11);
    GlobalFree(pvVar8);
  }
  if (puStack_164 != (undefined4 *)0x0) {
    pvVar8 = GlobalHandle(puStack_164);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvStack_168);
    GlobalFree(pvVar8);
  }
  if (pvStack_278 != (HANDLE)0xffffffff) {
    CloseHandle(pvStack_278);
  }
  FUN_004033a0((int)auStack_158);
  return uVar12;
}


