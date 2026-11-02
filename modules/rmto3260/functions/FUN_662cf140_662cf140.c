/* Module: rmto3260.dll
   Function: FUN_662cf140
   Address: 662cf140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cf140(byte *param_1,uint param_2)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14 [3];
  void *local_8;
  
  iVar3 = 0;
  this = FUN_662e19e0(param_1,param_2);
  if (this == (int *)0x0) {
    iVar3 = -0x7ffbff7f;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  FUN_662dedc0(this,local_14);
  iVar1 = FUN_662ef820(local_14,s_logical__6630a12c);
  if ((iVar1 == -1) || (FUN_662cf750(local_8,this), iVar1 == -1)) {
    iVar1 = FUN_662ef820(local_14,s_realaudio_6630a998);
    if (iVar1 != -1) {
      iVar2 = FUN_66305590((int)this);
      if (iVar2 != 0) {
        iVar3 = FUN_662cf220(local_8,*(byte **)(iVar2 + 0x36),*(uint *)(iVar2 + 0x32));
      }
      if (iVar1 != -1) goto LAB_662cf203;
    }
    iVar1 = FUN_662ef820(local_14,s_realvideo_6630a98c);
    if ((iVar1 != -1) && (iVar1 = FUN_66305590((int)this), iVar1 != 0)) {
      iVar3 = FUN_662cf570((int)local_8);
    }
  }
LAB_662cf203:
  FUN_662ef0f0(local_14);
  return iVar3;
}


