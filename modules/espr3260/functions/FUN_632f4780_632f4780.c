/* Module: espr3260.dll
   Function: FUN_632f4780
   Address: 632f4780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_632f4780(void *this,short *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint local_cc [44];
  undefined1 local_1c [24];
  
  if (param_3 == 3) {
    iVar3 = 0;
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      iVar3 = iVar3 + 4;
      psVar4 = psVar4 + 1;
      *(float *)(*(int *)((int)this + 0x24dc) + -4 + iVar3) = (float)(int)sVar1;
    } while (iVar3 < 0x280);
    FUN_632f5710((int *)local_cc);
  }
  else {
    local_cc[0] = param_3;
    if ((param_3 == 0) || (param_3 == 1)) {
      iVar3 = *(int *)(*(int *)this + 4);
    }
    else {
      iVar3 = *(int *)(*(int *)((int)this + 0x844) + 4) + 0x844;
    }
    FUN_632f4a30((void *)(iVar3 + (int)this),param_1,(int *)local_cc);
  }
  if (*(int *)((int)this + 0x5268) != 0) {
    if (param_3 == 3) {
      FUN_632f9000((int)local_cc,0x17);
    }
    else {
      FUN_632f9000((int)local_cc,0x15);
      local_cc[0] = param_3;
    }
  }
  FUN_632f8bd0(local_cc,(int)local_1c,param_3);
  FUN_632f8c90(param_2,(int)local_1c,0,0,*(uint *)((int)this + 0x525c));
  if ((param_3 != 1) && (param_3 != 3)) {
    local_cc[0] = param_3;
    if (param_3 == 0) {
      iVar2 = *(int *)((int)this + 0x5250);
      iVar3 = *(int *)(*(int *)this + 4);
    }
    else {
      iVar2 = *(int *)((int)this + 0x5250);
      iVar3 = *(int *)(*(int *)((int)this + 0x844) + 4) + 0x844;
    }
    FUN_632f4a30((void *)(iVar3 + (int)this),param_1 + iVar2,(int *)local_cc);
    if (*(int *)((int)this + 0x5268) != 0) {
      FUN_632f9000((int)local_cc,0x15);
      local_cc[0] = param_3;
    }
    FUN_632f8bd0(local_cc,(int)local_1c,param_3);
    FUN_632f8c90(param_2,(int)local_1c,*(uint *)((int)this + 0x525c),0,*(uint *)((int)this + 0x525c)
                );
  }
  return 0;
}


