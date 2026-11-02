/* Module: vidcap30.exe
   Function: FUN_0042dc00
   Address: 0042dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042dc00(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  int unaff_retaddr;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  undefined1 *puStack_30;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_8;
  int local_4;
  
  piVar2 = param_4;
  piVar1 = param_1;
  iVar5 = 0;
  piStack_20 = (int *)&param_1;
  piStack_24 = &local_4;
  *param_4 = 0;
  piStack_28 = param_1;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 != 0) {
    return -0x7fffbffb;
  }
  iVar3 = local_4;
  if (unaff_retaddr == 0) {
    iVar3 = iStack_8 + local_4;
  }
  puStack_30 = &stack0xffffffe8;
  puStack_34 = &DAT_005a1ca8;
  piStack_38 = piVar1;
  piStack_3c = (int *)0x42dc66;
  iVar4 = (**(code **)*piVar1)();
  if (iVar4 == 0) {
    piStack_3c = &iStack_8;
    piStack_40 = piStack_24;
    iVar4 = (**(code **)(*piStack_24 + 0x28))();
    if (-1 < iVar4) {
      iVar4 = (**(code **)(iRam00000000 + 0xc))(0,1,&puStack_30,&piStack_28);
      while (iVar4 == 0) {
        (**(code **)(*piStack_40 + 8))(piStack_40);
        if (iVar5 == iVar3) {
          *piVar2 = (int)piStack_40;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = (**(code **)(*piStack_20 + 0xc))(piStack_20,1,&piStack_40,&piStack_38);
      }
      (**(code **)(*piStack_20 + 8))(piStack_20);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return (-(uint)(*piVar2 != 0) & 0x7fffbffb) + 0x80004005;
}


