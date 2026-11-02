/* Module: rmto3260.dll
   Function: FUN_662d5cf0
   Address: 662d5cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662d5cf0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  iVar1 = FUN_662d5a90((char *)*param_1,s_START_6630ac34);
  if (iVar1 != 0) {
    pcVar2 = FUN_662d57f0((int)this);
    *param_1 = pcVar2;
    iVar1 = FUN_662d5a90(pcVar2,&DAT_6630abe8);
    if (iVar1 != 0) {
      pcVar2 = FUN_662d57f0((int)this);
      *param_1 = pcVar2;
      iVar1 = FUN_662d5ac0(this,param_1);
      if (iVar1 != 0) {
        bVar3 = true;
      }
    }
  }
  uVar4 = 0;
  if (bVar3) {
    bVar3 = false;
    iVar1 = FUN_662d5a90((char *)*param_1,&DAT_6630ac30);
    if (iVar1 != 0) {
      pcVar2 = FUN_662d57f0((int)this);
      *param_1 = pcVar2;
      iVar1 = FUN_662d5a90(pcVar2,&DAT_6630abe8);
      if (iVar1 != 0) {
        pcVar2 = FUN_662d57f0((int)this);
        *param_1 = pcVar2;
        iVar1 = FUN_662d5ac0(this,param_1);
        if (iVar1 != 0) {
          bVar3 = true;
        }
      }
    }
    uVar4 = 0;
    if (bVar3) {
      bVar3 = false;
      iVar1 = FUN_662d5a90((char *)*param_1,s_COORDS_6630ac28);
      if (iVar1 != 0) {
        pcVar2 = FUN_662d57f0((int)this);
        *param_1 = pcVar2;
        iVar1 = FUN_662d5a90(pcVar2,&DAT_6630abe8);
        if (iVar1 != 0) {
          pcVar2 = FUN_662d57f0((int)this);
          *param_1 = pcVar2;
          iVar1 = FUN_662d5bb0(this,param_1,1,0);
          if (iVar1 != 0) {
            bVar3 = true;
          }
        }
      }
      uVar4 = 0;
      if (bVar3) {
        uVar4 = 0;
        iVar1 = FUN_662d5a90((char *)*param_1,&DAT_6630ac24);
        if (iVar1 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}


