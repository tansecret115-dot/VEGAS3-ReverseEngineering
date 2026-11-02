/* Module: aviplug.dll
   Function: FUN_5f974410
   Address: 5f974410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f974410(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_retaddr;
  int *piStack_18;
  undefined1 *puStack_14;
  int local_c [3];
  
  puStack_14 = (undefined1 *)local_c;
  local_c[1] = 0;
  iVar3 = *param_1;
  param_2[1] = iVar3 >> 0x18 & 0xf;
  local_c[2] = param_2[0x10];
  *param_2 = iVar3 >> 0x1c;
  local_c[0] = param_2[8];
  piStack_18 = param_2;
  FUN_5f973e90();
  piVar5 = (int *)param_2[8];
  *piStack_18 = 0;
  if (puStack_14 == (undefined1 *)0x0) {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      do {
        piVar1 = (int *)*unaff_retaddr;
        piVar5 = piVar5 + 1;
        *piVar1 = iVar3;
        iVar3 = *piVar5;
        *unaff_retaddr = (int)(piVar1 + 1);
      } while (iVar3 != 0);
      return 0;
    }
  }
  else {
    if (piStack_18 == piVar5) {
      FUN_5f974320((int)unaff_retaddr,(int)&piStack_18,0);
      return 0;
    }
    piStack_18 = piVar5;
    uVar4 = FUN_5f974110(&piStack_18);
    if (uVar4 == 0xffffffff) {
      puVar2 = (undefined4 *)*piStack_18;
      while (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0x1556;
        *(undefined4 *)(*piStack_18 + 4) = 0;
        piStack_18 = piStack_18 + 1;
        puVar2 = (undefined4 *)*piStack_18;
      }
      return 0xffffffff;
    }
    if (0 < (int)uVar4) {
      FUN_5f974320((int)unaff_retaddr,(int)&piStack_18,(int)puStack_14 - uVar4);
      return 0;
    }
    iVar3 = *piStack_18;
    while (iVar3 != 0) {
      piVar5 = (int *)*unaff_retaddr;
      *piVar5 = iVar3;
      piStack_18 = piStack_18 + 1;
      *unaff_retaddr = (int)(piVar5 + 1);
      iVar3 = *piStack_18;
    }
  }
  return 0;
}


