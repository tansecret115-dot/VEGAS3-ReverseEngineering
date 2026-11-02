/* Module: mp3plug.dll
   Function: FUN_5f6faa70
   Address: 5f6faa70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_5f6faa70(void)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  double dVar7;
  double local_40;
  
  pvVar5 = malloc(0xa2c);
  fVar2 = (_DAT_5f75e418 - _DAT_5f75e41c) * _DAT_5f75e420;
  local_40 = (double)_DAT_5f75e41c;
  iVar6 = 0;
  if (_DAT_5f75e41c < _DAT_5f75e418) {
    dVar1 = (double)_DAT_5f75e414;
    do {
      fVar4 = _DAT_5f75e410;
      if ((double)_DAT_5f75e424 <= local_40) {
        fVar4 = _DAT_5f75e40c;
      }
      dVar7 = local_40 * (double)fVar4;
      if ((dVar7 < (double)_DAT_5f75e428) || ((double)_DAT_5f75e42c < dVar7)) {
        dVar3 = (double)_DAT_5f75e46c;
      }
      else {
        dVar3 = dVar7 - (double)_DAT_5f75e430;
        dVar3 = (dVar3 * dVar3 - (double)_DAT_5f75e434 * dVar3) * (double)_DAT_5f75e438;
      }
      dVar7 = dVar7 + (double)_DAT_5f75e43c;
      dVar7 = (dVar1 * dVar7 + (double)_DAT_5f75e440) -
              SQRT(dVar7 * dVar7 + _DAT_5f75e448) * (double)_DAT_5f75e450;
      if ((double)_DAT_5f75e454 < dVar7) {
        dVar7 = pow(_DAT_5f75e460,(dVar7 + dVar3) * (double)_DAT_5f75e468);
        *(float *)((int)pvVar5 + iVar6 * 4) = (float)dVar7;
      }
      else {
        *(undefined4 *)((int)pvVar5 + iVar6 * 4) = 0;
      }
      local_40 = (double)fVar2 + local_40;
      iVar6 = iVar6 + 1;
    } while (local_40 < (double)_DAT_5f75e418);
  }
  return pvVar5;
}


