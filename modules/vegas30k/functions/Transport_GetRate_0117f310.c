/* Module: vegas30k.dll
   Function: Transport_GetRate
   Address: 0117f310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* double __stdcall Transport_GetRate(void) */

double Transport_GetRate(void)

{
  double dVar1;
  int *piVar2;
  double local_8;
  
  piVar2 = DAT_012b0b2c;
                    /* 0x17f310  545  ?Transport_GetRate@@YGNXZ */
  local_8 = _DAT_011dad58;
  dVar1 = _DAT_011dad58;
  if (DAT_012b0b2c != (int *)0x0) {
    (**(code **)(*DAT_012b0b2c + 0x8c))();
    dVar1 = (double)CONCAT44(&local_8,piVar2);
  }
  return dVar1;
}


