/* Module: rmto3260.dll
   Function: FUN_662dc200
   Address: 662dc200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dc200(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  short local_8;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x31) != 0) {
    FUN_662dc120(this);
    *(undefined4 *)((int)this + 0x31) = 0;
  }
  if (param_2 == 0) {
    pbVar1 = (byte *)0x0;
  }
  else {
    local_8 = CONCAT11(param_1[4],param_1[5]);
    pbVar1 = param_1 + 6;
  }
  if (pbVar1 == (byte *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  if (-1 < iVar2) {
    if (local_8 == 4) {
      iVar2 = FUN_662dc2a0(this,param_1,param_2);
    }
    else if (local_8 == 5) {
      iVar2 = FUN_662dc320(this,param_1,param_2);
    }
    else {
      iVar2 = -0x7ffbfff1;
    }
    if ((-1 < iVar2) && (iVar2 = FUN_662dc3f0(this), -1 < iVar2)) {
      *(undefined4 *)((int)this + 0x31) = 1;
    }
  }
  return iVar2;
}


