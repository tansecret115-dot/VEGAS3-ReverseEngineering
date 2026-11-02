/* Module: sfxpfx2.dll
   Function: FUN_5c899820
   Address: 5c899820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c899820(void *this,byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  float10 fVar3;
  int local_14;
  double local_10;
  
  if (param_3 != 0) {
    local_14 = param_3;
    do {
      fVar3 = FUN_5c8996a0((int)this,(double)(int)(char)(*param_1 ^ 0x80) * _DAT_5c8dc950,0);
      local_10 = (double)fVar3;
      if (*(int *)((int)this + 0x80) == 2) {
        fVar3 = FUN_5c8996a0((int)this,local_10,1);
        local_10 = (double)fVar3;
      }
      if (*(int *)((int)this + 0x80) == 3) {
        FUN_5c8996a0((int)this,local_10,2);
      }
      iVar2 = ftol();
      if (iVar2 < -0x80) {
        bVar1 = 0;
      }
      else if (iVar2 < 0x80) {
        bVar1 = (byte)iVar2 ^ 0x80;
      }
      else {
        bVar1 = 0xff;
      }
      *param_1 = bVar1;
      param_1 = param_1 + param_2;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}


