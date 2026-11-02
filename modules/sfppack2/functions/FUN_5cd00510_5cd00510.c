/* Module: sfppack2.dll
   Function: FUN_5cd00510
   Address: 5cd00510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cd00510(void *this,int *param_1)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *piStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_20 [3];
  undefined1 local_14 [20];
  
  uStack_34 = 0;
  puStack_3c = local_14;
  uStack_38 = 0x14;
  piStack_40 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (-1 < iVar1) {
    if (unaff_EBX == 0x20) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = aiStack_20;
      piVar3 = &DAT_5cd54070;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (bVar4) {
LAB_5cd0055f:
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffd0,0xc,0);
        if (-1 < iVar1) {
          (**(code **)(*(int *)this + 0x10))(this,&piStack_40);
        }
        FUN_5cd00440(this,100);
        return iVar1;
      }
      iVar1 = 4;
      bVar4 = true;
      piVar2 = aiStack_20;
      piVar3 = &DAT_5cd54080;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (bVar4) goto LAB_5cd0055f;
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


