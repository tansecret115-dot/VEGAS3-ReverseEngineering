/* Module: vegas30k.dll
   Function: FUN_0118d1f0
   Address: 0118d1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0118d1f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar1 = param_1 + 0x5a;
  piStack_24 = (int *)param_1[0x7c];
  param_1[0x1a] = 0;
  uStack_18 = 0;
  *piVar1 = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0x3ff00000;
  uStack_1c = 0x3ff00000;
  uStack_20 = 0;
  uStack_28 = 0x118d22b;
  (**(code **)(*piStack_24 + 0x48))();
  piStack_30 = (int *)param_1[0x7c];
  uStack_28 = 0xffffffff;
  uStack_2c = 0xffffffff;
  (**(code **)(*piStack_30 + 0xdc))();
  if (param_1[0x3f] != 0) {
    param_1[0x3f] = 0;
    (**(code **)(*param_1 + 0xdc))(param_1,param_1 + 0x36);
  }
  iVar2 = (*(code *)param_1[0x56])(param_1,0x400,piVar1,param_1[0x57],&uStack_18,0);
  if (iVar2 < 0) {
    ppiVar3 = &piStack_30;
    (*(code *)param_1[0x56])(param_1,0x4800,piVar1,param_1[0x57],ppiVar3,iVar2);
    if (ppiVar3 != (int **)0x0) {
      param_1[0x3f] = 0;
      (**(code **)(*param_1 + 0xdc))(param_1,param_1 + 0x36);
    }
  }
  return iVar2;
}


