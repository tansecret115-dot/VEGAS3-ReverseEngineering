/* Module: vegas30k.dll
   Function: FUN_011b0310
   Address: 011b0310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b0310(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  piVar3 = param_1;
  iVar4 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)param_1[0x1a3];
  iVar5 = 1;
  local_4 = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[6]) {
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011d9ca0,&param_1);
    if (param_1 != (int *)0x0) {
      if (((*(byte *)(puVar1 + 3) & 0x10) != 0) &&
         (iVar5 = (**(code **)(*param_1 + 0x58))(param_1), iVar5 == 0)) {
        iVar4 = iVar4 + 1;
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  FUN_011bbc50(piVar3,&local_4);
  if (iVar5 == 0) {
    piVar3[2] = piVar3[2] | 0x100;
  }
  *param_2 = local_4 + iVar4;
  if (-1 < iVar5) {
    piVar2 = (int *)piVar3[0x19a];
    if (piVar2 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,0,0);
      return iVar4;
    }
    piVar3 = (int *)piVar3[0x19b];
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0,0);
      return iVar4;
    }
  }
  return iVar5;
}


