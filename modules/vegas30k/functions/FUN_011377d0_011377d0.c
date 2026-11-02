/* Module: vegas30k.dll
   Function: FUN_011377d0
   Address: 011377d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011377d0(int *param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  undefined1 *puStack_28;
  int *piStack_24;
  
  iVar1 = (**(code **)(*param_2 + 0x34))();
  if (-1 < iVar1) {
    piStack_24 = param_2;
    puStack_28 = (undefined1 *)0x1137805;
    iVar1 = (**(code **)(*param_2 + 0x28))();
    if (iVar1 != 0) {
      puStack_28 = (undefined1 *)0x0;
      (**(code **)(*param_2 + 0x34))(param_2,0);
      return iVar1;
    }
    while( true ) {
      puStack_28 = &stack0xfffffff0;
      iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,1,&stack0xfffffff4);
      if ((iVar1 != 0) || (&stack0x00000000 == (undefined1 *)0x0)) goto LAB_01137875;
      iVar1 = (**(code **)(*param_2 + 0x24))(param_2,&puStack_28);
      if ((-1 < iVar1) && ((puStack_28 == (undefined1 *)0x0 && (param_1[0xe] == 0)))) break;
      (**(code **)(*param_2 + 8))(param_2);
    }
    param_1[0xe] = (int)param_2;
LAB_01137875:
    (**(code **)(*param_1 + 8))(param_1);
    if (param_1[0xe] == 0) {
      (**(code **)(*param_2 + 0x34))(param_2,0,0);
      return 1;
    }
    iVar1 = (**(code **)*param_2)(param_2,&DAT_011ed330,param_1 + 10);
    if (iVar1 < 0) {
      (**(code **)(*param_2 + 0x34))(param_2,0,0);
      (**(code **)(*(int *)param_1[0xe] + 8))((int *)param_1[0xe]);
      param_1[0xe] = 0;
      return iVar1;
    }
    if (param_1[2] != 0) {
      (**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1[2] + 0x3cc));
    }
    (**(code **)*param_2)(param_2,&DAT_011da7a0,param_1 + 0xb);
    iVar1 = (**(code **)*param_2)(param_2,&DAT_011f0ee0,param_1 + 0xc);
    param_1[9] = (int)param_2;
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(*(int *)param_1[9] + 0x30))((int *)param_1[9],param_1 + 0xf);
  }
  return iVar1;
}


