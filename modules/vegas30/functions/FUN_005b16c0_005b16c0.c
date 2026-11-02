/* Module: vegas30.exe
   Function: FUN_005b16c0
   Address: 005b16c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b16c0(int *param_1,float *param_2,code *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int param_7,int param_8)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pfVar1 = (float *)param_1[2];
  local_18 = *pfVar1;
  local_14 = pfVar1[1];
  local_10 = pfVar1[2];
  SfVector3DSubtract(&local_18,param_2,&local_c);
  fVar5 = SfVector3DDot(&local_c,pfVar1 + 0xfe);
  if (param_8 == 0) {
    if (_DAT_00610f20 < fVar5) {
      bVar2 = true;
      goto LAB_005b1743;
    }
  }
  else if (fVar5 < _DAT_00610f20) {
    bVar2 = true;
    goto LAB_005b1743;
  }
  bVar2 = false;
LAB_005b1743:
  if (bVar2) {
    iVar3 = param_1[0x18];
  }
  else {
    iVar3 = param_1[0x17];
  }
  if ((iVar3 != 0) &&
     (iVar3 = FUN_005b16c0(iVar3,param_2,param_3,param_4,param_5,param_6,param_7 + 1,param_8),
     iVar3 < 0)) {
    return;
  }
  if ((((param_1[0x16] & 1U) == 0) || (((uint)param_1[0x16] >> 1 & 1) != param_6)) && (1 < *param_1)
     ) {
    if (param_6 == 0) {
      if (fVar5 <= _DAT_00610f20) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    _SfList_Sort_12(param_1,uVar4,&LAB_005b1840);
    param_1[0x16] = (param_6 & 1) << 1 | param_1[0x16] & 0xfffffffdU | 1;
  }
  iVar3 = (*param_3)(param_1,param_1[0x15],param_4,param_5);
  if (-1 < iVar3) {
    if (local_c == 0.0) {
      iVar3 = param_1[0x18];
    }
    else {
      iVar3 = param_1[0x17];
    }
    if (iVar3 != 0) {
      FUN_005b16c0(iVar3,uStack_8,uStack_4,param_4,param_5,param_6,param_3,param_4);
    }
  }
  return;
}


