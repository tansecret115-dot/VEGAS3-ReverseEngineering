/* Module: vegas30k.dll
   Function: FUN_0118c050
   Address: 0118c050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118c050(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int iVar5;
  uint unaff_retaddr;
  uint uStack_4;
  
  uVar2 = param_3;
  iVar5 = 1;
  if ((*(code **)(param_1 + 0x158) != (code *)0x0) &&
     (iVar5 = (**(code **)(param_1 + 0x158))
                        (param_1,0x8006,&param_2,*(undefined4 *)(param_1 + 0x15c),0,param_3),
     iVar5 < 0)) {
    return iVar5;
  }
  *(uint *)(param_1 + 0x164) = param_2 & 0xffff0000;
  *(uint *)(param_1 + 0x160) = param_2 & 0xffff;
  param_3 = 0;
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x18))(*(int **)(param_1 + 0x1f0),&param_3);
  if ((((~unaff_retaddr & 0x2000) == 0) && ((uStack_4 & 0x20000000) != 0)) &&
     (iVar5 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x140))(*(int **)(param_1 + 0x1f0)),
     (uStack_4 & 0x800000) != 0)) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x164))
                      (*(int **)(param_1 + 0x1f0),&stack0xffffffec);
  }
  if (-1 < iVar5) {
    if ((uStack_4 & 0xc0000000) != 0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x3c))(*(int **)(param_1 + 0x1fc));
    }
    if (-1 < iVar5) {
      iVar4 = *(int *)(param_1 + 0x204) - unaff_ESI;
      *(int *)(param_1 + 0x204) = iVar4;
      if ((((uStack_4 & 0x800000) != 0) && (iVar4 == 0)) && (unaff_ESI != 0)) {
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffffef;
        (**(code **)(param_1 + 0x158))(param_1,0xd,&uStack_4,*(undefined4 *)(param_1 + 0x15c),0,0);
      }
      if (*(uint *)(param_1 + 0x164) == (*(uint *)(param_1 + 0x164) & uStack_4)) {
        piVar1 = *(int **)(param_1 + 0x1f8);
        if (piVar1 == (int *)0x0) {
          uVar3 = _SfGetMillisec_0();
        }
        else {
          (**(code **)(*piVar1 + 0xf4))(piVar1,&stack0xfffffff0);
          uVar3 = __alldiv(unaff_EBP,0,10000,0);
        }
        *(undefined4 *)(param_1 + 0x1c8) = uVar3;
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffbff;
      }
      if ((*(code **)(param_1 + 0x158) != (code *)0x0) &&
         (((uStack_4 & 0x20000000) != 0 ||
          (((uStack_4 & 0x10000000) != 0 && ((uStack_4 & 0x800000) == 0)))))) {
        (**(code **)(param_1 + 0x158))
                  (param_1,0x8007,&uStack_4,*(undefined4 *)(param_1 + 0x15c),0,uVar2);
      }
    }
  }
  return iVar5;
}


