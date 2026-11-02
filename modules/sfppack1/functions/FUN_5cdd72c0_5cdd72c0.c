/* Module: sfppack1.dll
   Function: FUN_5cdd72c0
   Address: 5cdd72c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd72c0(void *this,byte *param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double local_10;
  
  pcVar1 = _controlfp_exref;
  uVar2 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar4 = FUN_5cdd7110(this,(double)(int)(char)(*param_1 ^ 0x80) * _DAT_5ce13240,0);
    local_10 = (double)fVar4;
    if (*(int *)((int)this + 0x90) == 2) {
      fVar4 = FUN_5cdd7110(this,local_10,1);
      local_10 = (double)fVar4;
    }
    if (*(int *)((int)this + 0x90) == 3) {
      fVar4 = FUN_5cdd7110(this,local_10,2);
    }
    iVar3 = (int)ROUND((double)(fVar4 * (float10)_DAT_5ce13238));
    if (iVar3 < -0x80) {
      iVar3 = 0;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0xff;
    }
    *param_1 = (byte)iVar3 ^ 0x80;
    param_1 = param_1 + param_2;
    pcVar1 = _controlfp_exref;
  }
  (*pcVar1)(uVar2,0xffffffff);
  return 0;
}


