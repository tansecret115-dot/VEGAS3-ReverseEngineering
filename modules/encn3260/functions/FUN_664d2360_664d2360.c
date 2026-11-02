/* Module: encn3260.dll
   Function: FUN_664d2360
   Address: 664d2360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d2360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *local_8;
  
  iVar1 = param_1;
  local_8 = (int *)0x0;
  (**(code **)**(undefined4 **)(param_1 + 0x14))
            (*(undefined4 **)(param_1 + 0x14),&DAT_664dd8a0,&local_8);
  uVar2 = param_2;
  (**(code **)(*local_8 + 0x14))(local_8,param_2);
  if (*(undefined4 **)(iVar1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar1 + 0xc))(1);
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_664ba900(puVar3);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  iVar5 = (**(code **)(*local_8 + 0xc))(local_8,uVar2,(int *)(iVar1 + 0x10));
  if (iVar5 != 0) {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    return 0x80004005;
  }
  iVar5 = *(int *)(iVar1 + 0x10);
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    (**(code **)(*local_8 + 0x10))(local_8,uVar2,iVar5,&param_1);
    FUN_664baab0(*(void **)(iVar1 + 0xc),param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


