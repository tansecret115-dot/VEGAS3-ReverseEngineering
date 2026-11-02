/* Module: sftrans1.dll
   Function: FUN_00466bc0
   Address: 00466bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00466bc0(int param_1,HWND param_2,WPARAM param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  WPARAM local_5a4;
  double local_5a0;
  int local_590;
  undefined4 uStack_58c;
  undefined8 local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined2 local_53c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined2 local_3e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  double local_2b8;
  double local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined2 local_28c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  double local_160;
  double local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    bVar4 = false;
  }
  else {
    if (iVar1 < 1) {
      return;
    }
    if (2 < iVar1) {
      return;
    }
    bVar4 = true;
  }
  local_5a0 = *(double *)(param_1 + 0x70);
  if (param_3 != 0) {
    SendMessageA(param_2,0x802,0,0);
    local_178 = 0;
    local_2a0 = 0xffffffff;
    local_174 = 0;
    local_148 = 0xffffffff;
    local_170 = 0;
    local_16c = 0;
    local_138 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_2b8 = 0.5;
    local_2b0 = 0.5;
    local_2a8 = 2;
    local_2a4 = 1;
    local_29c = 0x3f800000;
    local_298 = 0x3f000000;
    local_294 = 0x3f000000;
    local_290 = 0;
    local_28c = 0;
    local_188 = 0;
    local_184 = 0xffffff;
    local_180 = 0;
    local_17c = 0x3f800000;
    local_168 = 1;
    local_164 = 0;
    local_160 = 0.5;
    local_158 = 0.5;
    local_150 = 2;
    local_14c = 1;
    local_144 = 0x3f800000;
    local_140 = 0x3f000000;
    local_13c = 0x3f000000;
    local_134 = 0;
    local_30 = 0;
    local_2c = 0xffffff;
    local_28 = 0;
    local_24 = 0x3f800000;
    local_14 = 0;
    local_10 = 1;
    local_c = 0;
    SendMessageA(param_2,0x805,0,(LPARAM)&local_2b8);
    SendMessageA(param_2,0x805,param_3,(LPARAM)&local_160);
    local_160 = local_160 - local_2b8;
    local_158 = local_158 - local_2b0;
    if ((ABS(local_160) < _DAT_00560f60) && (ABS(local_158) < _DAT_00560f60)) {
      return;
    }
    FUN_00466ba0(&local_590,&local_570);
    dVar2 = *(double *)(param_1 + 0x118 + param_3 * 8) - local_2b8;
    local_588 = *(double *)(param_1 + 0x168 + param_3 * 8) - local_2b0;
    if (ABS(dVar2) <= ABS(local_588)) {
      dVar2 = local_588 * local_570;
    }
    else {
      dVar2 = dVar2 * (double)CONCAT44(uStack_58c,local_590);
    }
    dVar3 = _DAT_00555908;
    if (dVar2 < _DAT_00555910) {
      dVar3 = _DAT_00557828;
    }
    fVar6 = (float10)fpatan((float10)local_158,(float10)local_160);
    local_5a0 = (double)fVar6;
    if ((dVar3 < _DAT_00555910) && (!bVar4)) {
      local_5a0 = local_5a0 + _DAT_00560f58;
    }
    local_590 = ftol();
    *(double *)(param_1 + 0x70) = (double)local_590 * _DAT_00560f48 + local_5a0;
  }
  FUN_00466ba0(&local_578,&local_580);
  local_428 = 0;
  local_434 = 0xffffff;
  local_424 = 0;
  local_2dc = 0xffffff;
  local_420 = 0;
  local_41c = 0;
  local_410 = 0;
  local_408 = 0;
  local_3e8 = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c8 = 0;
  local_568 = 0.5;
  local_560 = 0.5;
  local_558 = 2;
  local_554 = 1;
  local_550 = 0xffffffff;
  local_54c = 0x3f800000;
  local_548 = 0x3f000000;
  local_544 = 0x3f000000;
  local_540 = 0;
  local_53c = 0;
  local_438 = 0;
  local_430 = 0;
  local_42c = 0x3f800000;
  local_418 = 1;
  local_414 = 0;
  uStack_40c = 0x3fe00000;
  uStack_404 = 0x3fe00000;
  local_400 = 2;
  local_3fc = 1;
  local_3f8 = 0xffffffff;
  local_3f4 = 0x3f800000;
  local_3f0 = 0x3f000000;
  local_3ec = 0x3f000000;
  local_3e4 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d4 = 0x3f800000;
  local_2c4 = 0;
  local_2c0 = 1;
  local_2bc = 0;
  SendMessageA(param_2,0x805,0,(LPARAM)&local_410);
  local_590 = SendMessageA(param_2,0x802,0,0);
  if (param_3 == 0) {
    local_570 = (double)CONCAT44(uStack_40c,local_410) - *(double *)(param_1 + 0x118);
    local_5a4 = 1;
    local_588 = (double)CONCAT44(uStack_404,local_408) - *(double *)(param_1 + 0x168);
    if (1 < local_590) {
      do {
        SendMessageA(param_2,0x805,local_5a4,(LPARAM)&local_568);
        local_568 = local_568 + local_570;
        local_560 = local_560 + local_588;
        SendMessageA(param_2,0x804,local_5a4,(LPARAM)&local_568);
        local_5a4 = local_5a4 + 1;
      } while ((int)local_5a4 < local_590);
    }
    local_568 = 0.0;
    local_560 = 0.0;
  }
  else {
    SendMessageA(param_2,0x805,param_3,(LPARAM)&local_568);
    local_568 = local_568 - (double)CONCAT44(uStack_40c,local_410);
    local_560 = local_560 - (double)CONCAT44(uStack_404,local_408);
  }
  if (((ABS(local_568) < _DAT_00560f60) && (ABS(local_560) < _DAT_00560f60)) && (param_3 != 0)) {
    if (bVar4) {
      param_3 = 0;
    }
    else {
      SendMessageA(param_2,0x805,param_3,(LPARAM)&local_2b8);
      dVar2 = (local_2b8 - (double)CONCAT44(uStack_40c,local_410)) * local_578 +
              (local_2b0 - (double)CONCAT44(uStack_404,local_408)) * local_580;
      local_2b8 = dVar2 * local_578 + (double)CONCAT44(uStack_40c,local_410);
      local_2b0 = dVar2 * local_580 + (double)CONCAT44(uStack_404,local_408);
      SendMessageA(param_2,0x804,param_3,(LPARAM)&local_2b8);
    }
  }
  fVar6 = (float10)fcos((float10)local_5a0);
  local_578 = (double)fVar6;
  fVar5 = (float10)fsin((float10)local_5a0);
  local_580 = (double)fVar5;
  if (ABS(fVar6) <= ABS((float10)local_580)) {
    local_588 = (double)((ulonglong)local_588._4_4_ << 0x20);
    local_5a0 = -1.0;
    if (local_580 < _DAT_00555910) goto LAB_004672e3;
  }
  else {
    local_588 = (double)CONCAT44(local_588._4_4_,1);
    if (fVar6 < (float10)_DAT_00555910) {
      local_5a0 = -1.0;
      goto LAB_004672e3;
    }
  }
  local_5a0 = 1.0;
LAB_004672e3:
  local_5a4 = 1;
  if (1 < local_590) {
    do {
      if (param_3 != local_5a4) {
        SendMessageA(param_2,0x805,local_5a4,(LPARAM)&local_568);
        local_568 = local_568 - (double)CONCAT44(uStack_40c,local_410);
        local_560 = local_560 - (double)CONCAT44(uStack_404,local_408);
        dVar2 = SQRT(local_568 * local_568 + local_560 * local_560);
        if (!bVar4) {
          if ((int)local_588 != 0) {
            local_560 = local_568;
          }
          if (local_5a0 * local_560 < _DAT_00555910) {
            dVar2 = -dVar2;
          }
        }
        local_568 = dVar2 * local_578 + (double)CONCAT44(uStack_40c,local_410);
        local_560 = dVar2 * local_580 + (double)CONCAT44(uStack_404,local_408);
        SendMessageA(param_2,0x804,local_5a4,(LPARAM)&local_568);
      }
      local_5a4 = local_5a4 + 1;
    } while ((int)local_5a4 < local_590);
  }
  return;
}


