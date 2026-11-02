/* Module: sfppack3.dll
   Function: FUN_5cc37320
   Address: 5cc37320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc37320(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_24;
  int aiStack_20 [3];
  undefined1 local_14 [20];
  
  uStack_38 = 0;
  puStack_40 = local_14;
  uStack_3c = 0x14;
  piStack_44 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (-1 < iVar1) {
    if (iStack_24 == 0x24) {
      iVar1 = 4;
      bVar5 = true;
      piVar3 = aiStack_20;
      piVar4 = &DAT_5cc87e28;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
LAB_5cc37373:
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffcc,0x10,0);
        if (-1 < iVar1) {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_5cc87e18;
          piVar4 = (int *)&stack0xffffffd0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            piStack_44 = (int *)((int)piStack_44 * 10);
          }
          (**(code **)(*(int *)this + 0x10))(this,&piStack_44);
        }
        FUN_5cc37240(this,100);
        return iVar1;
      }
      iVar1 = 4;
      bVar5 = true;
      piVar3 = aiStack_20;
      piVar4 = &DAT_5cc87e18;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_5cc37373;
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


