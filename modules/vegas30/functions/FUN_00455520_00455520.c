/* Module: vegas30.exe
   Function: FUN_00455520
   Address: 00455520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00455520(int param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_006106d0;
  dVar2 = _DAT_006128d0 / *(double *)(param_1 + 0x30);
  dVar1 = (double)*(ushort *)(param_1 + 0x40) * dVar2;
  if (((-2 < (int)param_3) &&
      (((param_3 < 0x80000000 || (0xffffffde < param_2)) && (0x7fffffff < param_3)))) &&
     (((int)param_3 < -1 || (param_2 != 0xffffffff)))) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&DAT_00455685)[param_2]) {
    case 0:
      fVar3 = (float10)dVar1 * (float10)_DAT_00612890;
      break;
    case 1:
      return (float10)dVar1 * (float10)_DAT_00612898;
    case 2:
      return (float10)dVar1 * (float10)_DAT_006128a0;
    case 3:
      return (float10)dVar1 * (float10)_DAT_006128a8;
    case 4:
      return (float10)dVar1 * (float10)_DAT_006128b0;
    case 5:
      return (float10)dVar1 * (float10)_DAT_006128b8;
    case 6:
      return (float10)dVar1 * (float10)_DAT_006128c0;
    case 7:
      return (float10)dVar1 * (float10)_DAT_006128c8;
    case 8:
      return (float10)(*(uint *)(param_1 + 0x40) >> 0x10) * (float10)dVar2;
    }
  }
  return fVar3;
}


