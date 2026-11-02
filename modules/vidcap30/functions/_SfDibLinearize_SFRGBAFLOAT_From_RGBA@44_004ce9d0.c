/* Module: vidcap30.exe
   Function: _SfDibLinearize_SFRGBAFLOAT_From_RGBA@44
   Address: 004ce9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfDibLinearize_SFRGBAFLOAT_From_RGBA_44
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          double param_10)

{
  code *pcVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  int local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [144];
  float local_408 [257];
  
                    /* 0xce9d0  321  _SfDibLinearize_SFRGBAFLOAT_From_RGBA@44 */
  pcVar1 = (code *)(&PTR_LAB_005b7a00)[param_9];
  local_4a0 = 0;
  if (_DAT_00589f10 == param_10) {
    local_4a8 = 1.0;
  }
  else {
    local_4a8 = _DAT_00587ad0 / param_10;
  }
  local_4ac = 0;
  pfVar3 = local_408;
  do {
    fVar4 = (float10)(*pcVar1)((double)local_4ac * _DAT_0059a2b0,(undefined4)local_4a8,
                               local_4a8._4_4_);
    *pfVar3 = (float)fVar4;
    local_4ac = local_4ac + 1;
    pfVar3 = pfVar3 + 1;
  } while (local_4ac < 0x100);
  iVar2 = FUN_004961e0(auStack_498,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,3
                      );
  if (iVar2 != 0) {
    local_4a0 = FUN_004ce8d0(auStack_498,local_408);
  }
  FUN_00496580(auStack_498);
  return local_4a0;
}


