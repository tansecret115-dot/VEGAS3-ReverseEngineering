/* Module: sfxpfx1.dll
   Function: FUN_5c945ae0
   Address: 5c945ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c945ae0(void *this,byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int local_14;
  
  if (param_3 != 0) {
    local_14 = param_3;
    do {
      FUN_5c945830((int)this,(double)(int)(char)(*param_1 ^ 0x80) * _DAT_5c98b9d8,param_4);
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


