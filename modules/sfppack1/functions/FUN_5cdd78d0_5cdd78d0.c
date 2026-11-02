/* Module: sfppack1.dll
   Function: FUN_5cdd78d0
   Address: 5cdd78d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd78d0(void *this,short *param_1,int param_2,int param_3)

{
  double dVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  float10 fVar5;
  double local_c;
  
  pcVar2 = _controlfp_exref;
  uVar4 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar5 = FUN_5cdd7110(this,(double)(int)*param_1 * _DAT_5ce13270,0);
    local_c = (double)fVar5;
    if (*(int *)((int)this + 0x90) == 2) {
      fVar5 = FUN_5cdd7110(this,local_c,1);
      local_c = (double)fVar5;
    }
    if (*(int *)((int)this + 0x90) == 3) {
      fVar5 = FUN_5cdd7110(this,local_c,2);
    }
    dVar1 = (double)(fVar5 * (float10)_DAT_5ce13248);
    sVar3 = -0x8000;
    if ((-0x8001 < (int)ROUND(dVar1)) && (sVar3 = 0x7fff, (int)ROUND(dVar1) < 0x8000)) {
      sVar3 = (short)(int)ROUND(dVar1);
    }
    *param_1 = sVar3;
    param_1 = param_1 + param_2;
    pcVar2 = _controlfp_exref;
  }
  (*pcVar2)(uVar4,0xffffffff);
  return 0;
}


