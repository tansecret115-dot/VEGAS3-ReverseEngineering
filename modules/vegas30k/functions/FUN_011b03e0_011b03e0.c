/* Module: vegas30k.dll
   Function: FUN_011b03e0
   Address: 011b03e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b03e0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  piVar3 = param_1;
  iVar4 = 0;
  *param_2 = 0;
  iVar5 = 1;
  piVar1 = (int *)param_1[0x19a];
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[0x19b];
    if (piVar1 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar1 + 0x54))(piVar1);
    }
  }
  else {
    iVar5 = (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  for (puVar2 = (undefined4 *)piVar3[0x1a3]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[6]) {
    (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_011d9ca0,&param_1);
    if (param_1 != (int *)0x0) {
      if (((*(byte *)(puVar2 + 3) & 4) != 0) &&
         (iVar5 = (**(code **)(*param_1 + 0x5c))(param_1), -1 < iVar5)) {
        iVar4 = iVar4 + 1;
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  FUN_011bbd10(piVar3,&local_4);
  if (-1 < iVar5) {
    if ((code *)piVar3[0x195] != (code *)0x0) {
      (*(code *)piVar3[0x195])(piVar3,1,piVar3[0x194],0,0,0xffffffff,0xffffffff,0,0,0);
    }
    if (iVar5 == 0) {
      piVar3[2] = piVar3[2] & 0xfffffeff;
    }
  }
  *param_2 = local_4 + iVar4;
  return iVar5;
}


