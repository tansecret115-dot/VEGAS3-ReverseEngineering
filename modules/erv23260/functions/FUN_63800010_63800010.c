/* Module: erv23260.dll
   Function: FUN_63800010
   Address: 63800010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63800010(void *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = param_1 - 0x20 & 0x3f;
    FUN_637fd360(this,*(int *)(&DAT_6382a58c + uVar1 * 8),*(int *)(&DAT_6382a588 + uVar1 * 8));
    uVar1 = param_2 - 0x20 & 0x3f;
    FUN_637fd360(this,*(int *)(&DAT_6382a58c + uVar1 * 8),*(int *)(&DAT_6382a588 + uVar1 * 8));
    return;
  }
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  iVar2 = 0;
  if (uVar1 == 0) {
    FUN_637fd360(this,1,1);
  }
  else if (uVar1 < 2) {
    FUN_637fd360(this,0,1);
    FUN_637fd360(this,(uint)((int)param_1 < 0),1);
    FUN_637fd360(this,0,1);
  }
  else if (uVar1 < 4) {
    iVar2 = 1;
    uVar1 = uVar1 - 2;
  }
  else if (uVar1 < 8) {
    iVar2 = 2;
    uVar1 = uVar1 - 4;
  }
  else if (uVar1 < 0x10) {
    iVar2 = 3;
    uVar1 = uVar1 - 8;
  }
  else if (uVar1 < 0x20) {
    iVar2 = 4;
    uVar1 = uVar1 - 0x10;
  }
  else if (uVar1 < 0x40) {
    iVar2 = 5;
    uVar1 = uVar1 - 0x20;
  }
  else if (uVar1 < 0x80) {
    iVar2 = 6;
    uVar1 = uVar1 - 0x40;
  }
  else if (uVar1 < 0x100) {
    iVar2 = 7;
    uVar1 = uVar1 - 0x80;
  }
  if (iVar2 != 0) {
    FUN_637fd360(this,0,1);
    param_3 = 0;
    if (iVar2 != 0) {
      do {
        FUN_637fd360(this,uVar1 >> (((char)iVar2 - (char)param_3) - 1U & 0x1f) & 1,1);
        FUN_637fd360(this,1,1);
        param_3 = param_3 + 1;
      } while (param_3 < iVar2);
    }
    FUN_637fd360(this,(uint)((int)param_1 < 0),1);
    FUN_637fd360(this,0,1);
  }
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  iVar2 = 0;
  if (uVar1 == 0) {
    FUN_637fd360(this,1,1);
  }
  else if (uVar1 < 2) {
    FUN_637fd360(this,0,1);
    FUN_637fd360(this,(uint)((int)param_2 < 0),1);
    FUN_637fd360(this,0,1);
  }
  else if (uVar1 < 4) {
    iVar2 = 1;
    uVar1 = uVar1 - 2;
  }
  else if (uVar1 < 8) {
    iVar2 = 2;
    uVar1 = uVar1 - 4;
  }
  else if (uVar1 < 0x10) {
    iVar2 = 3;
    uVar1 = uVar1 - 8;
  }
  else if (uVar1 < 0x20) {
    iVar2 = 4;
    uVar1 = uVar1 - 0x10;
  }
  else if (uVar1 < 0x40) {
    iVar2 = 5;
    uVar1 = uVar1 - 0x20;
  }
  else if (uVar1 < 0x80) {
    iVar2 = 6;
    uVar1 = uVar1 - 0x40;
  }
  else if (uVar1 < 0x100) {
    iVar2 = 7;
    uVar1 = uVar1 - 0x80;
  }
  if (iVar2 != 0) {
    FUN_637fd360(this,0,1);
    param_3 = 0;
    if (iVar2 != 0) {
      do {
        FUN_637fd360(this,uVar1 >> (((char)iVar2 - (char)param_3) - 1U & 0x1f) & 1,1);
        FUN_637fd360(this,1,1);
        param_3 = param_3 + 1;
      } while (param_3 < iVar2);
    }
    FUN_637fd360(this,(uint)((int)param_2 < 0),1);
    FUN_637fd360(this,0,1);
  }
  if ((param_1 == 1) && (param_2 == 1)) {
    FUN_637fd360(this,1,1);
  }
  return;
}


